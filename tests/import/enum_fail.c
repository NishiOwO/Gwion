#include "gwion_util.h"
#include "gwion_ast.h"
#include "oo.h"
#include "vm.h"
#include "env.h"
#include "type.h"
#include "object.h"
#include "instr.h"
#include "gwion.h"
#include "value.h"
#include "operator.h"
#include "import.h"

GWION_IMPORT(enum_test) {
  GWI_BB(gwi_enum_ini(gwi, "int"))
    GWI_BB(gwi_enum_add(gwi, "zero", 0))
  GWI_OB(gwi_enum_end(gwi))
  return GW_OK;
}
