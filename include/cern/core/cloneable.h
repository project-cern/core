#ifndef CERN_CORE_CLONEABLE_H
#define CERN_CORE_CLONEABLE_H 1

#include <glib-object.h>
#include "exports.h"

G_BEGIN_DECLS

#define CERN_TYPE_CLONEABLE (cern_cloneable_get_type())

G_DECLARE_INTERFACE (CernCloneable, cern_cloneable, CERN, CLONEABLE, GObject)

struct _CernCloneableInterface {
  GTypeInterface parent_iface;

  CernCloneable *
  (*clone) (CernCloneable *self);
};

CERN_CORE_API
CernCloneable *
cern_cloneable_clone(CernCloneable *self);

G_END_DECLS

#endif /* !CERN_CORE_CLONEABLE_H */
