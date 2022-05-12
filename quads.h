#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "SymbolTable.h"


#define EXPAND_SIZE 1024
#define CURR_SIZE (total*sizeof(quad))
#define NEW_SIZE (EXPAND_SIZE*sizeof(quad) + CURR_SIZE)


int tempcounter=0;

/*entoles quads*/
typedef enum iopcode{
assign, add, sub,
mul, divide, mod,
uminus, and, or,
not, if_eq, if_noteq,
if_lesseq, if_greatereq, if_less, 
if_greater, call, param,
ret, getretval, funcstart,
funcend, tablecreate,
tablegetelem, tablesetelem
}iopcode;


typedef enum expr_t{
	var_e,
	tableitem_e,
	programfunc_e,
	libraryfunc_e,
	arithexpr_e,
	boolexpr_e,
	assignexpr_e,
	newtable_e,
	constnum_e,
	constbool_e,
	conststring_e,
	nil_e	
}expr_t;

typedef enum scopespace_t{
	programvar,
	functionlocal,
	formalarg
	
}scopespace_t;

typedef enum symbol_t {
	
	var_s,
	programfunc_s,
	libraryfunc_s
	
}symbol_t;

typedef struct symbol{
	symbol_t type;
	char* name;
	scopespace_t space;
	unsigned	offset;
	unsigned	scope;
	unsigned	line;
	
}symbol;

unsigned programVarOffset=0;
unsigned functionLocalOffset=0;
unsigned formalArgOffset=0;
unsigned scopeSpaceCounter=1;

scopespace_t currscopespace();

typedef struct expr{
	
	expr_t type;
	symbol*	sym;
	struct expr* index;
	double numConst;
	char* strConst;
	unsigned char boolConst;
	struct expr* next;

}expr;

typedef struct quad{
	iopcode op;
	expr* result;
	expr* arg1;
	expr* arg2;
	unsigned label;
	unsigned line;
}quad;


quad* quads = (quad*) 0;
unsigned total=0;
unsigned int currQuad=0;

void expand(void);
void emit(enum iopcode op,expr* arg1,expr* arg2,expr* result,unsigned label, unsigned line);


void expand(void){
	assert(total==currQuad);
	quad *p=(quad*)malloc(NEW_SIZE);
	if(quads){
		memcpy(p,quads,CURR_SIZE);
		free(quads);
		
		
	}
	quads=p;
	total += EXPAND_SIZE;
	
	
}

void emit(enum iopcode op,expr* arg1,expr* arg2,expr* result,unsigned label, unsigned line) {
	if(currQuad == total){
		expand();
	}
	quad* p=quads + currQuad++;
	p->arg1=arg1;
	p->arg2=arg2;
	p->result=result;
	p->label=label;
	p->line=line;
	p->op=op;
	
	
	
}

scopespace_t currscopespace(){
	if(scopeSpaceCounter == 1){
		return programvar;
		
	}else if(scopeSpaceCounter % 2 == 0){
		return formalarg;
	}else{
		
		return functionlocal;
	}
	
	
}

/*krataw offset gia kathe scope space*/
unsigned currscopeoffset(void){
	
	switch(currscopespace()){
		case programvar: return programVarOffset;
		case functionlocal: return functionLocalOffset;
		case formalarg: return formalArgOffset;
		default: assert(0);
	}
	
	
}


/*nea dilwsh metavlitis auksanei to offset tou ekastote scope space*/
void inccurroffset(void){
	switch(currscopespace()){
		case programvar:  ++programVarOffset; break;
		case functionlocal: ++functionLocalOffset; break;
		case formalarg: ++formalArgOffset; break;
		default: assert(0);
		
		
	}
}

/*mpainovgainoume se scope */
void enterscopespace(){
	
	++scopeSpaceCounter;
}

void exitscopespace(){
	assert(scopeSpaceCounter>1);
	--scopeSpaceCounter;
	
}

char *newtempname(){char *s=malloc(sizeof(int)+4);snprintf(s,sizeof(int)+4,"_t%d",tempcounter);return s;}
void resettemp(){tempcounter=0;}
struct expr*newtemp(int scope){
	struct expr* exp=(struct expr*)malloc(sizeof(struct expr));
	/*exp->sym=malloc(sizeof(struct symbol));
	exp->sym->name= newtempname();*/
	exp=(expr *)newtempname();
	struct Entry *sym = lookUpScope((char*)exp,scope);
	if(sym==NULL){
		InsertAtScope(scope,(char*)exp,0,1);
		return exp;
	}else return exp;
}

struct expr* exprNumConst(double i){
	struct expr* exp= (struct expr *)malloc(sizeof(expr));
	exp->numConst=i;
	exp->type=constnum_e;
	return exp;
}

struct expr* exprBoolConst(unsigned char i){
	struct expr* exp= (struct expr *)malloc(sizeof(expr));
	exp->boolConst=i;
	exp->type=constbool_e;
	return exp;
}

void printQuads(){
    int i=0;

	printf("\n-----------------------------------------------------------------------------\n\t\t\tPrinting intermidiate code\n-----------------------------------------------------------------------------\n");
	printf("quad#\topcode\t\tresult\t\targ1\t\targ2\t\tlabel\n-----------------------------------------------------------------------------\n");
    while(i<currQuad){
		if(quads[i].op==0)printf("%d:\tassign\t\t%s\t\t%s\n",i+1,quads[i].result,quads[i].arg1);
		else if(quads[i].op==1){if(quads[i].arg1->type==constnum_e)printf("%d:\tadd\t\t%s\t\t%d\t\t%d\n",i+1,quads[i].result,(int)quads[i].arg1->numConst,(int)quads[i].arg2->numConst);}
		else if(quads[i].op==2){if(quads[i].arg1->type==constnum_e)printf("%d:\tsub\t\t%s\t\t%d\t\t%d\n",i+1,quads[i].result,(int)quads[i].arg1->numConst,(int)quads[i].arg2->numConst);}
		else if(quads[i].op==3){if(quads[i].arg1->type==constnum_e)printf("%d:\tmul\t\t%s\t\t%d\t\t%d\n",i+1,quads[i].result,(int)quads[i].arg1->numConst,(int)quads[i].arg2->numConst);}
		else if(quads[i].op==4){if(quads[i].arg1->type==constnum_e)printf("%d:\tdivide\t\t%s\t\t%d\t\t%d\n",i+1,quads[i].result,(int)quads[i].arg1->numConst,(int)quads[i].arg2->numConst);}
		else if(quads[i].op==5){if(quads[i].arg1->type==constnum_e)printf("%d:\tmod\t\t%s\t\t%d\t\t%d\n",i+1,quads[i].result,(int)quads[i].arg1->numConst,(int)quads[i].arg2->numConst);}
		else if(quads[i].op==6)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==7)printf("quad with return stmt at line %d\n",quads[i].line);

		else if(quads[i].op==8)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==9)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==10)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==11)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==12)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==13)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==14)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==15)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==16)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==17)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==18)printf("%d:\treturn\t\t%s\n",i+1,quads[i].result);
		else if(quads[i].op==19)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==20)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==21)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==22)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==23)printf("quad with return stmt at line %d\n",quads[i].line);
		else if(quads[i].op==24)printf("quad with return stmt at line %d\n",quads[i].line);
		i++;
	}
	return;
}	
	


