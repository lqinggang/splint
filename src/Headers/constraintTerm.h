#ifndef __constraintTerm_h__

#define __constraintTerm_h__

typedef union
{
  /*@exposed@*/ /*@dependent@*/ exprNode expr;
  /*@only@*/  sRef     sref;
  int      intlit;
} constraintTermValue;

/*@-namechecks@*/

void constraintTermValue_copy (/*@out@*/ constraintTermValue src, constraintTermValue dst);

/*@-macroassign*/

#define constraintTermValue_copy(dst, src)     ((dst) = (src))

/*@=macroassign*/

typedef enum
{
  ERRORBADCONSTRAINTTERMTYPE,
 EXPRNODE, SREF,
 INTLITERAL
} constraintTermType;

struct _constraintTerm {
  /*@only@*/ fileloc loc;
  constraintTermValue value;
  constraintTermType kind;
};


abst_typedef struct _constraintTerm * constraintTerm;

extern constraintTermType constraintTerm_getKind (constraintTerm) ;
extern /*@exposed@*/ sRef constraintTerm_getSRef (constraintTerm) ;

extern /*@falsenull@*/ bool constraintTerm_isDefined (constraintTerm p_e) /*@*/;
extern /*@unused@*/ /*@truenull@*/ bool constraintTerm_isUndefined (constraintTerm p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintTerm_isError (constraintTerm p_e) /*@*/ ;

/*@constant null constraintTerm constraintTerm_undefined; @*/

# define constraintTerm_undefined ((constraintTerm)NULL)

# define constraintTerm_isDefined(e)        ((e) != constraintTerm_undefined)
# define constraintTerm_isUndefined(e)      ((e) == constraintTerm_undefined)
# define constraintTerm_isError(e)          ((e) == constraintTerm_undefined)



void constraintTerm_free (/*@only@*/ constraintTerm term);

constraintTerm constraintTerm_simplify (/*@returned@*/ constraintTerm term) /*@modifies term@*/ ;

/*@only@*/ constraintTerm constraintTerm_makeExprNode (/*@dependent@*/ exprNode e) /*@*/;

constraintTerm constraintTerm_copy (constraintTerm term) /*@*/;

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2) /*@*/;

bool constraintTerm_canGetValue (constraintTerm term)/*@*/;
int constraintTerm_getValue (constraintTerm term) /*@*/;

fileloc constraintTerm_getFileloc (constraintTerm t) /*@*/;


bool constraintTerm_isIntLiteral (constraintTerm term) /*@*/;

cstring constraintTerm_print (constraintTerm term) /*@*/;

constraintTerm constraintTerm_makesRef  (/*@temp@*/ /*@observer@*/ sRef s) /*@*/;

/*@unused@*/ bool constraintTerm_probSame (constraintTerm term1, constraintTerm term2) /*@*/;

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) /*@modifies term@*/;

constraintTerm constraintTerm_makeIntLiteral (int i) /*@*/;

bool constraintTerm_isStringLiteral (constraintTerm c) /*@*/;
cstring constraintTerm_getStringLiteral (constraintTerm c) /*@*/;


constraintTerm constraintTerm_doSRefFixBaseParam (/*@returned@*/ constraintTerm term, exprNodeList arglist) /*@modifies term@*/;

void constraintTerm_dump ( /*@observer@*/ constraintTerm t,  FILE *f);

/*@only@*/ constraintTerm constraintTerm_undump ( FILE *f);

/*@=namechecks@*/

#else

#error Multiple Include

#endif
