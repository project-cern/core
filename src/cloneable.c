#include "cern/core/cloneable.h"

G_DEFINE_INTERFACE(CernCloneable, cern_cloneable, G_TYPE_OBJECT)

static void
cern_cloneable_default_init (CernCloneableInterface *iface) {
  (void) iface;
}

CernCloneable *
cern_cloneable_clone(CernCloneable *self) {
  g_return_val_if_fail (CERN_IS_CLONEABLE(self), NULL);
  return CERN_CLONEABLE_GET_IFACE (self)->clone (self);
}
