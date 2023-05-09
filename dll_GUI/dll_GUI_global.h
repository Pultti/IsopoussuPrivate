#ifndef DLL_GUI_GLOBAL_H
#define DLL_GUI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLL_GUI_LIBRARY)
#  define DLL_GUI_EXPORT Q_DECL_EXPORT
#else
#  define DLL_GUI_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL_GUI_GLOBAL_H
