#ifndef __OL_UTILS_DBUS_H__
#define __OL_UTILS_DBUS_H__

#include <dbus/dbus-glib.h>

/** 
 * @brief Invokes a dbus method without parameter and returns a string
 * 
 * @param proxy A DBusGProxy
 * @param method The name of method to invoke
 * @param returnval The point to the returned string, should be freed by g_free
 * 
 * @return If succeeded, return TRUE
 */
gboolean ol_dbus_get_string (DBusGProxy *proxy, const gchar *method, gchar **returnval);

gboolean ol_dbus_get_uint (DBusGProxy *proxy, const gchar *method, guint *returnval);

gboolean ol_dbus_get_uint8 (DBusGProxy *proxy, const gchar *method, guint8 *returnval);

#endif // __OL_UTILS_DBUS_H__
