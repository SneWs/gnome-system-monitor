#ifndef H_PROCMAN_ICONTHEMEWRAPPER_H_1185707711
#define H_PROCMAN_ICONTHEMEWRAPPER_H_1185707711

#include <gtkmm.h>

class IconThemeWrapper
{
 public:
  // returns 0 instead of raising an exception
  Glib::RefPtr<Gdk::Pixbuf>
  load_icon(const Glib::ustring& icon_name, int size, Gtk::IconLookupFlags flags) const;

  const IconThemeWrapper* operator->() const
  { return this; }
};

#endif // H_PROCMAN_ICONTHEMEWRAPPER_H_1185707711