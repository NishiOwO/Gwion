#ifndef __CPY_AST
#define __CPY_AST
ANN Array_Sub cpy_array_sub(MemPool, Array_Sub);
ANN Type_Decl* cpy_type_decl(MemPool, const Type_Decl*);
ANN Type_List cpy_type_list(MemPool, const Type_List);
ANN Func_Def cpy_func_def(MemPool, const Func_Def);
ANN Func_Def cpy_func_def(MemPool, Func_Def);
ANN struct Func_Base_* cpy_func_base(MemPool, struct Func_Base_*);
ANN Class_Def cpy_class_def(MemPool, Class_Def);
ANN Type_List cpy_type_list(MemPool p, const Type_List src);
#endif
