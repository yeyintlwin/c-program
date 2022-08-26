#include <gtk/gtk.h>

int main(int argc, char *atgv[])
{
    gtk_init(&argc, &argv);
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOP_LEVEL);
    gtk_widget_show(win);
    gtk_main();
    return 0;
}