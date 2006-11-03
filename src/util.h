#ifndef RGRAPHVIZ_UTIL_H
#define RGRAPHVIZ_UTIL_H 1

#define STR(SE) CHAR(STRING_ELT(SE,0))

#define CHECK_Rgraphviz_graph(s) do { \
     if (TYPEOF(s) != EXTPTRSXP || \
         R_ExternalPtrTag(s) != Rgraphviz_graph_type_tag) \
         error("bad graph reference"); \
} while (0)

Agraph_t *setDefaultAttrs(Agraph_t *, SEXP);
int getVectorPos(SEXP vector, char *str);
SEXP assignAttrs(SEXP, SEXP, SEXP);
SEXP buildRagraph(Agraph_t *);
SEXP getBoundBox(Agraph_t *);
SEXP getEdgeLocs(Agraph_t *,int);
SEXP getListElement(SEXP list, char *str);
SEXP getNodeLayouts(Agraph_t *);
SEXP Rgraphviz_fin(SEXP);
SEXP Rgraphviz_getAttr(SEXP, SEXP);
SEXP R_scalarInteger(int);
SEXP R_scalarLogical(Rboolean);
SEXP R_scalarReal(double);
SEXP R_scalarString(const char *v);
SEXP stringEltByName(SEXP strv, char *str);

#endif // RGRAPHVIZ_UTIL_H

