/*
** Inserted at beginning of c files generated by bison
** REMEMBER:  Change bison.reset too.
*/

/*@-allmacros@*/
/*@+boolint@*/
/*@+charint@*/
/*@-macroparams@*/
/*@-macroundef@*/
/*@-unreachable@*/
/*@-macrospec@*/
/*@-varuse@*/
/*@+ignorequals@*/
/*@-macrostmt@*/
/*@-noeffect@*/
/*@-shadow@*/
/*@-exitarg@*/
/*@-macroredef@*/
/*@-uniondef@*/
/*@-compdef@*/
/*@-matchfields@*/
/*@-exportlocal@*/
/*@-evalorderuncon@*/
/*@-exportheader@*/
/*@-typeuse@*/
/*@-redecl@*/
/*@-redef@*/
/*@-noparams@*/
/*@-ansireserved@*/
/*@-fielduse@*/
/*@-ifblock@*/
/*@-elseifcomplete@*/
/*@-whileblock@*/
/*@-forblock@*/
/*@-branchstate@*/
/*@-readonlytrans@*/
/*@-namechecks@*/
/*@-usedef@*/
/*@-systemunrecog@*/
/*@-dependenttrans@*/
/*@-unqualifiedtrans@*/
/*@-nullassign@*/

/* < end of bison.head > */

typedef union {
  mttok tok; 
  mtDeclarationNode mtdecl;
  mtDeclarationPiece mtpiece;
  mtDeclarationPieces mtpieces;
  mtContextNode mtcontext;
  mtValuesNode mtvalues;
  mtDefaultsNode mtdefaults;
  mtDefaultsDeclList mtdeflist;
  mtAnnotationsNode mtannotations;
  mtAnnotationList mtannotlist;
  mtAnnotationDecl mtannotdecl;
  mtMergeNode mtmerge;
  mtMergeItem mtmergeitem;
  mtMergeClauseList mtmergeclauselist;
  mtMergeClause mtmergeclause;
  mtTransferClauseList mttransferclauselist;
  mtTransferClause mttransferclause;
  mtTransferAction mttransferaction;
  mtLoseReferenceList mtlosereferencelist;
  mtLoseReference mtlosereference;

  /*@only@*/ cstringList cstringlist;
  ctype ctyp;
  /*@only@*/ qtype qtyp;
  int count;
} YYSTYPE;
#define	MT_BADTOK	257
#define	MT_END	258
#define	MT_STATE	259
#define	MT_GLOBAL	260
#define	MT_CONTEXT	261
#define	MT_ONEOF	262
#define	MT_DEFAULTS	263
#define	MT_DEFAULT	264
#define	MT_REFERENCE	265
#define	MT_PARAMETER	266
#define	MT_CLAUSE	267
#define	MT_ANNOTATIONS	268
#define	MT_ARROW	269
#define	MT_MERGE	270
#define	MT_TRANSFERS	271
#define	MT_PRECONDITIONS	272
#define	MT_POSTCONDITIONS	273
#define	MT_LOSEREFERENCE	274
#define	MT_AS	275
#define	MT_ERROR	276
#define	MT_PLUS	277
#define	MT_STAR	278
#define	MT_BAR	279
#define	MT_LPAREN	280
#define	MT_RPAREN	281
#define	MT_LBRACKET	282
#define	MT_RBRACKET	283
#define	MT_LBRACE	284
#define	MT_RBRACE	285
#define	MT_COMMA	286
#define	MT_CHAR	287
#define	MT_INT	288
#define	MT_FLOAT	289
#define	MT_DOUBLE	290
#define	MT_VOID	291
#define	MT_ANYTYPE	292
#define	MT_INTEGRALTYPE	293
#define	MT_UNSIGNEDINTEGRALTYPE	294
#define	MT_SIGNEDINTEGRALTYPE	295
#define	MT_CONST	296
#define	MT_VOLATILE	297
#define	MT_STRINGLIT	298
#define	MT_IDENT	299

/*
** Resets all flags in bison.head
*/


/*@=allmacros@*/
/*@=boolint@*/
/*@=charint@*/
/*@=macroparams@*/
/*@=macroundef@*/
/*@=unreachable@*/
/*@=macrospec@*/
/*@=varuse@*/
/*@=ignorequals@*/
/*@=macrostmt@*/
/*@=noeffect@*/
/*@=shadow@*/
/*@=exitarg@*/
/*@=macroredef@*/
/*@=uniondef@*/
/*@=compdef@*/
/*@=matchfields@*/
/*@=exportlocal@*/
/*@=evalorderuncon@*/
/*@=exportheader@*/
/*@=typeuse@*/
/*@=redecl@*/
/*@=redef@*/
/*@=noparams@*/
/*@=ansireserved@*/
/*@=fielduse@*/
/*@=ifblock@*/
/*@=elseifcomplete@*/
/*@=whileblock@*/
/*@=forblock@*/
/*@=branchstate@*/
/*@=readonlytrans@*/
/*@=namechecks@*/
/*@=usedef@*/
/*@=systemunrecog@*/
/*@=dependenttrans@*/
/*@=unqualifiedtrans@*/
