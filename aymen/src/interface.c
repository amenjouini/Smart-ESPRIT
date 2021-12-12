/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_agentresto (void)
{
  GtkWidget *agentresto;
  GtkWidget *fixedresto;
  GtkWidget *logoutresto;
  GtkWidget *alignment797881;
  GtkWidget *hbox9;
  GtkWidget *image577779;
  GtkWidget *label7998991;
  GtkWidget *image577783;
  GtkWidget *label7998995;
  GtkWidget *notebookresto;
  GtkWidget *fixeddisplayresto;
  GtkWidget *buttondisplayresto;
  GtkWidget *alignment244;
  GtkWidget *hbox2;
  GtkWidget *image2787;
  GtkWidget *labelafficherresto;
  GtkWidget *labeldonnerrefsupp;
  GtkWidget *buttonsuppresto;
  GtkWidget *alignment797880;
  GtkWidget *hbox8;
  GtkWidget *image577778;
  GtkWidget *label7998990;
  GtkWidget *scrolledwindow223;
  GtkWidget *treeview99;
  GtkWidget *labelafficherquoi;
  GtkWidget *displayresto;
  GtkWidget *fixedaddresto;
  GtkWidget *entrynomadd;
  GtkWidget *entryrefadd;
  GtkObject *spinquantadd_adj;
  GtkWidget *spinquantadd;
  GtkWidget *msgadd;
  GtkWidget *comboboxtypeadd;
  GtkWidget *buttonaddresto;
  GtkWidget *alignment133333;
  GtkWidget *hbox1;
  GtkWidget *image1723;
  GtkWidget *labeladdresto;
  GtkWidget *radioepuise;
  GSList *radioepuise_group = NULL;
  GtkWidget *radioenstock;
  GtkWidget *labelnomadd;
  GtkWidget *labelrefadd;
  GtkWidget *labeltypeadd;
  GtkWidget *labelquantadd;
  GtkWidget *checkbuttonresto;
  GtkWidget *addresto;
  GtkWidget *fixeddeleteresto;
  GtkWidget *buttonhistory;
  GtkWidget *alignment579797;
  GtkWidget *hbox5;
  GtkWidget *image577777;
  GtkWidget *label678889;
  GtkWidget *scrolledwindow222;
  GtkWidget *treeview500;
  GtkWidget *labeldisplayhistory;
  GtkWidget *historyresto;
  GtkWidget *fixedsearchresto;
  GtkWidget *searchrestoentry;
  GtkWidget *entryeditref;
  GtkObject *spinbuttoneditquant_adj;
  GtkWidget *spinbuttoneditquant;
  GtkWidget *comboboxedittype;
  GtkWidget *buttoneditresto;
  GtkWidget *alignment797879;
  GtkWidget *hbox7;
  GtkWidget *image7766;
  GtkWidget *label97777;
  GtkWidget *test;
  GtkWidget *labelwarning;
  GtkWidget *labelsearchpro;
  GtkWidget *buttonsearchresto;
  GtkWidget *alignment89898;
  GtkWidget *hbox4;
  GtkWidget *image47777;
  GtkWidget *label4777;
  GtkWidget *labeleditref;
  GtkWidget *labeledittype;
  GtkWidget *labeleditquant;
  GtkWidget *labeleditetat;
  GtkWidget *radiobuttoneditepuise;
  GSList *radiobuttoneditepuise_group = NULL;
  GtkWidget *radiobuttoneditenstock;
  GtkWidget *searchresto;
  GtkWidget *fixedcommand;
  GtkWidget *buttonepuise;
  GtkWidget *alignment797882;
  GtkWidget *hbox10;
  GtkWidget *image577780;
  GtkWidget *label7998992;
  GtkWidget *buttoncommand;
  GtkWidget *alignment797884;
  GtkWidget *hbox12;
  GtkWidget *image577782;
  GtkWidget *label7998994;
  GtkWidget *scrolledwindow111;
  GtkWidget *treeview501;
  GtkWidget *command;
  GtkWidget *refreshstock;
  GtkWidget *alignment3888;
  GtkWidget *hbox3;
  GtkWidget *image344;
  GtkWidget *label17777;

  agentresto = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (agentresto), _("agentresto"));

  fixedresto = gtk_fixed_new ();
  gtk_widget_show (fixedresto);
  gtk_container_add (GTK_CONTAINER (agentresto), fixedresto);

  logoutresto = gtk_button_new ();
  gtk_widget_show (logoutresto);
  gtk_fixed_put (GTK_FIXED (fixedresto), logoutresto, 1176, 24);
  gtk_widget_set_size_request (logoutresto, 98, 29);

  alignment797881 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment797881);
  gtk_container_add (GTK_CONTAINER (logoutresto), alignment797881);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment797881), hbox9);

  image577779 = gtk_image_new_from_stock ("gtk-disconnect", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image577779);
  gtk_box_pack_start (GTK_BOX (hbox9), image577779, FALSE, FALSE, 0);

  label7998991 = gtk_label_new_with_mnemonic (_("l<span color='black'><b>LOGOUT</b></span>"));
  gtk_widget_show (label7998991);
  gtk_box_pack_start (GTK_BOX (hbox9), label7998991, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label7998991), TRUE);

  image577783 = create_pixmap (agentresto, "logos.png");
  gtk_widget_show (image577783);
  gtk_fixed_put (GTK_FIXED (fixedresto), image577783, 0, 8);
  gtk_widget_set_size_request (image577783, 232, 120);

  label7998995 = gtk_label_new (_("<span color='red'><b>AGENT DE RESTAURANT</b></span>"));
  gtk_widget_show (label7998995);
  gtk_fixed_put (GTK_FIXED (fixedresto), label7998995, 576, 40);
  gtk_widget_set_size_request (label7998995, 232, 49);
  gtk_label_set_use_markup (GTK_LABEL (label7998995), TRUE);

  notebookresto = gtk_notebook_new ();
  gtk_widget_show (notebookresto);
  gtk_fixed_put (GTK_FIXED (fixedresto), notebookresto, 0, 192);
  gtk_widget_set_size_request (notebookresto, 1280, 816);
  gtk_notebook_set_tab_pos (GTK_NOTEBOOK (notebookresto), GTK_POS_LEFT);
  gtk_notebook_set_scrollable (GTK_NOTEBOOK (notebookresto), TRUE);

  fixeddisplayresto = gtk_fixed_new ();
  gtk_widget_show (fixeddisplayresto);
  gtk_container_add (GTK_CONTAINER (notebookresto), fixeddisplayresto);

  buttondisplayresto = gtk_button_new ();
  gtk_widget_show (buttondisplayresto);
  gtk_fixed_put (GTK_FIXED (fixeddisplayresto), buttondisplayresto, 80, 16);
  gtk_widget_set_size_request (buttondisplayresto, 150, 45);

  alignment244 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment244);
  gtk_container_add (GTK_CONTAINER (buttondisplayresto), alignment244);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment244), hbox2);

  image2787 = gtk_image_new_from_stock ("gtk-info", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2787);
  gtk_box_pack_start (GTK_BOX (hbox2), image2787, FALSE, FALSE, 0);

  labelafficherresto = gtk_label_new_with_mnemonic (_("<span color='black'><b>Afficher le stock</b></span>"));
  gtk_widget_show (labelafficherresto);
  gtk_box_pack_start (GTK_BOX (hbox2), labelafficherresto, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (labelafficherresto), TRUE);

  labeldonnerrefsupp = gtk_label_new_with_mnemonic (_(" "));
  gtk_widget_show (labeldonnerrefsupp);
  gtk_fixed_put (GTK_FIXED (fixeddisplayresto), labeldonnerrefsupp, 0, 72);
  gtk_widget_set_size_request (labeldonnerrefsupp, 400, 41);

  buttonsuppresto = gtk_button_new ();
  gtk_widget_show (buttonsuppresto);
  gtk_fixed_put (GTK_FIXED (fixeddisplayresto), buttonsuppresto, 256, 16);
  gtk_widget_set_size_request (buttonsuppresto, 136, 48);

  alignment797880 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment797880);
  gtk_container_add (GTK_CONTAINER (buttonsuppresto), alignment797880);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment797880), hbox8);

  image577778 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image577778);
  gtk_box_pack_start (GTK_BOX (hbox8), image577778, FALSE, FALSE, 0);

  label7998990 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Supprimer</b></span>"));
  gtk_widget_show (label7998990);
  gtk_box_pack_start (GTK_BOX (hbox8), label7998990, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label7998990), TRUE);

  scrolledwindow223 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow223);
  gtk_fixed_put (GTK_FIXED (fixeddisplayresto), scrolledwindow223, 0, 88);
  gtk_widget_set_size_request (scrolledwindow223, 1080, 696);

  treeview99 = gtk_tree_view_new ();
  gtk_widget_show (treeview99);
  gtk_container_add (GTK_CONTAINER (scrolledwindow223), treeview99);
  gtk_widget_set_size_request (treeview99, 712, 384);
  gtk_container_set_border_width (GTK_CONTAINER (treeview99), 247);

  labelafficherquoi = gtk_label_new (_("<span color='black'><b>Gestion</b></span>"));
  gtk_widget_show (labelafficherquoi);
  gtk_fixed_put (GTK_FIXED (fixeddisplayresto), labelafficherquoi, 0, 8);
  gtk_widget_set_size_request (labelafficherquoi, 72, 56);
  gtk_label_set_use_markup (GTK_LABEL (labelafficherquoi), TRUE);

  displayresto = gtk_label_new (_("<span color='black'><b>Afficher/Supprimer</b></span>"));
  gtk_widget_show (displayresto);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookresto), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookresto), 0), displayresto);
  gtk_label_set_use_markup (GTK_LABEL (displayresto), TRUE);

  fixedaddresto = gtk_fixed_new ();
  gtk_widget_show (fixedaddresto);
  gtk_container_add (GTK_CONTAINER (notebookresto), fixedaddresto);

  entrynomadd = gtk_entry_new ();
  gtk_widget_show (entrynomadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), entrynomadd, 176, 72);
  gtk_widget_set_size_request (entrynomadd, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrynomadd), 8226);

  entryrefadd = gtk_entry_new ();
  gtk_widget_show (entryrefadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), entryrefadd, 176, 112);
  gtk_widget_set_size_request (entryrefadd, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryrefadd), 8226);

  spinquantadd_adj = gtk_adjustment_new (1, 0, 50000, 1, 10, 10);
  spinquantadd = gtk_spin_button_new (GTK_ADJUSTMENT (spinquantadd_adj), 100, 3);
  gtk_widget_show (spinquantadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), spinquantadd, 176, 192);
  gtk_widget_set_size_request (spinquantadd, 160, 32);

  msgadd = gtk_label_new ("");
  gtk_widget_show (msgadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), msgadd, 232, 304);
  gtk_widget_set_size_request (msgadd, 240, 32);

  comboboxtypeadd = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxtypeadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), comboboxtypeadd, 175, 152);
  gtk_widget_set_size_request (comboboxtypeadd, 225, 34);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), _("viandesrouges"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), _("legumes"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), _("fruits"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), _("viandesblanches"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), _("produitlaitier"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), _("pates"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtypeadd), "");

  buttonaddresto = gtk_button_new ();
  gtk_widget_show (buttonaddresto);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), buttonaddresto, 424, 152);
  gtk_widget_set_size_request (buttonaddresto, 96, 37);

  alignment133333 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment133333);
  gtk_container_add (GTK_CONTAINER (buttonaddresto), alignment133333);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment133333), hbox1);

  image1723 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1723);
  gtk_box_pack_start (GTK_BOX (hbox1), image1723, FALSE, FALSE, 0);

  labeladdresto = gtk_label_new_with_mnemonic (_("<span color='black'><b>Ajouter</b></span>"));
  gtk_widget_show (labeladdresto);
  gtk_box_pack_start (GTK_BOX (hbox1), labeladdresto, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (labeladdresto), TRUE);

  radioepuise = gtk_radio_button_new_with_mnemonic (NULL, _("Epuise"));
  gtk_widget_show (radioepuise);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), radioepuise, 32, 288);
  gtk_widget_set_size_request (radioepuise, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radioepuise), radioepuise_group);
  radioepuise_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radioepuise));

  radioenstock = gtk_radio_button_new_with_mnemonic (NULL, _("En stock"));
  gtk_widget_show (radioenstock);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), radioenstock, 184, 288);
  gtk_widget_set_size_request (radioenstock, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radioenstock), radioepuise_group);
  radioepuise_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radioenstock));

  labelnomadd = gtk_label_new (_("<span color='black'><b>Nom du produit</b></span>"));
  gtk_widget_show (labelnomadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), labelnomadd, 24, 72);
  gtk_widget_set_size_request (labelnomadd, 128, 25);
  gtk_label_set_use_markup (GTK_LABEL (labelnomadd), TRUE);

  labelrefadd = gtk_label_new (_("<span color='black'><b>Reference</b></span>"));
  gtk_widget_show (labelrefadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), labelrefadd, 32, 112);
  gtk_widget_set_size_request (labelrefadd, 88, 25);
  gtk_label_set_use_markup (GTK_LABEL (labelrefadd), TRUE);

  labeltypeadd = gtk_label_new (_("<span color='black'><b>Type</b></span>"));
  gtk_widget_show (labeltypeadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), labeltypeadd, 32, 160);
  gtk_widget_set_size_request (labeltypeadd, 49, 17);
  gtk_label_set_use_markup (GTK_LABEL (labeltypeadd), TRUE);

  labelquantadd = gtk_label_new (_("<span color='black'><b>Quantit\303\251 en KG</b></span>"));
  gtk_widget_show (labelquantadd);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), labelquantadd, 24, 200);
  gtk_widget_set_size_request (labelquantadd, 120, 16);
  gtk_label_set_use_markup (GTK_LABEL (labelquantadd), TRUE);

  checkbuttonresto = gtk_check_button_new_with_mnemonic (_("VALIDER"));
  gtk_widget_show (checkbuttonresto);
  gtk_fixed_put (GTK_FIXED (fixedaddresto), checkbuttonresto, 32, 248);
  gtk_widget_set_size_request (checkbuttonresto, 118, 24);

  addresto = gtk_label_new (_("<span color='black'><b>Ajouter</b></span>"));
  gtk_widget_show (addresto);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookresto), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookresto), 1), addresto);
  gtk_label_set_use_markup (GTK_LABEL (addresto), TRUE);

  fixeddeleteresto = gtk_fixed_new ();
  gtk_widget_show (fixeddeleteresto);
  gtk_container_add (GTK_CONTAINER (notebookresto), fixeddeleteresto);

  buttonhistory = gtk_button_new ();
  gtk_widget_show (buttonhistory);
  gtk_fixed_put (GTK_FIXED (fixeddeleteresto), buttonhistory, 256, 16);
  gtk_widget_set_size_request (buttonhistory, 96, 37);

  alignment579797 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment579797);
  gtk_container_add (GTK_CONTAINER (buttonhistory), alignment579797);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment579797), hbox5);

  image577777 = gtk_image_new_from_stock ("gtk-justify-fill", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image577777);
  gtk_box_pack_start (GTK_BOX (hbox5), image577777, FALSE, FALSE, 0);

  label678889 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Afficher</b></span>"));
  gtk_widget_show (label678889);
  gtk_box_pack_start (GTK_BOX (hbox5), label678889, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label678889), TRUE);

  scrolledwindow222 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow222);
  gtk_fixed_put (GTK_FIXED (fixeddeleteresto), scrolledwindow222, 0, 64);
  gtk_widget_set_size_request (scrolledwindow222, 1104, 752);

  treeview500 = gtk_tree_view_new ();
  gtk_widget_show (treeview500);
  gtk_container_add (GTK_CONTAINER (scrolledwindow222), treeview500);
  gtk_widget_set_size_request (treeview500, 1120, 776);

  labeldisplayhistory = gtk_label_new (_("<span color='black'><b>HISTORIQUE DE GESTION</b></span>"));
  gtk_widget_show (labeldisplayhistory);
  gtk_fixed_put (GTK_FIXED (fixeddeleteresto), labeldisplayhistory, 8, 16);
  gtk_widget_set_size_request (labeldisplayhistory, 256, 40);
  gtk_label_set_use_markup (GTK_LABEL (labeldisplayhistory), TRUE);

  historyresto = gtk_label_new (_("<span color='black'><b>Historique</b></span>"));
  gtk_widget_show (historyresto);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookresto), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookresto), 2), historyresto);
  gtk_label_set_use_markup (GTK_LABEL (historyresto), TRUE);

  fixedsearchresto = gtk_fixed_new ();
  gtk_widget_show (fixedsearchresto);
  gtk_container_add (GTK_CONTAINER (notebookresto), fixedsearchresto);

  searchrestoentry = gtk_entry_new ();
  gtk_widget_show (searchrestoentry);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), searchrestoentry, 120, 96);
  gtk_widget_set_size_request (searchrestoentry, 176, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (searchrestoentry), 8226);

  entryeditref = gtk_entry_new ();
  gtk_widget_show (entryeditref);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), entryeditref, 120, 176);
  gtk_widget_set_size_request (entryeditref, 176, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryeditref), 8226);

  spinbuttoneditquant_adj = gtk_adjustment_new (1, 0, 50000, 1, 10, 10);
  spinbuttoneditquant = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttoneditquant_adj), 1, 3);
  gtk_widget_show (spinbuttoneditquant);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), spinbuttoneditquant, 120, 296);
  gtk_widget_set_size_request (spinbuttoneditquant, 176, 32);

  comboboxedittype = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxedittype);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), comboboxedittype, 120, 232);
  gtk_widget_set_size_request (comboboxedittype, 248, 33);
  GTK_WIDGET_SET_FLAGS (comboboxedittype, GTK_CAN_DEFAULT);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxedittype), _("viandesrouges"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxedittype), _("legumes"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxedittype), _("fruits"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxedittype), _("viandesblanches"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxedittype), _("produitlaitier"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxedittype), _("pates"));

  buttoneditresto = gtk_button_new ();
  gtk_widget_show (buttoneditresto);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), buttoneditresto, 376, 352);
  gtk_widget_set_size_request (buttoneditresto, 112, 37);

  alignment797879 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment797879);
  gtk_container_add (GTK_CONTAINER (buttoneditresto), alignment797879);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment797879), hbox7);

  image7766 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7766);
  gtk_box_pack_start (GTK_BOX (hbox7), image7766, FALSE, FALSE, 0);

  label97777 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Modifier</b></span>"));
  gtk_widget_show (label97777);
  gtk_box_pack_start (GTK_BOX (hbox7), label97777, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label97777), TRUE);

  test = gtk_label_new (_(" "));
  gtk_widget_show (test);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), test, 504, 88);
  gtk_widget_set_size_request (test, 616, 64);

  labelwarning = gtk_label_new ("");
  gtk_widget_show (labelwarning);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), labelwarning, 584, 344);
  gtk_widget_set_size_request (labelwarning, 424, 72);

  labelsearchpro = gtk_label_new (_("<span color='black'><b>Donner le nom du produit</b></span>"));
  gtk_widget_show (labelsearchpro);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), labelsearchpro, 96, 56);
  gtk_widget_set_size_request (labelsearchpro, 264, 31);
  gtk_label_set_use_markup (GTK_LABEL (labelsearchpro), TRUE);

  buttonsearchresto = gtk_button_new ();
  gtk_widget_show (buttonsearchresto);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), buttonsearchresto, 328, 96);
  gtk_widget_set_size_request (buttonsearchresto, 120, 37);

  alignment89898 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment89898);
  gtk_container_add (GTK_CONTAINER (buttonsearchresto), alignment89898);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment89898), hbox4);

  image47777 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image47777);
  gtk_box_pack_start (GTK_BOX (hbox4), image47777, FALSE, FALSE, 0);

  label4777 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Chercher</b></span>"));
  gtk_widget_show (label4777);
  gtk_box_pack_start (GTK_BOX (hbox4), label4777, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label4777), TRUE);

  labeleditref = gtk_label_new (_("<span color='black'><b>Reference</b></span>"));
  gtk_widget_show (labeleditref);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), labeleditref, 8, 184);
  gtk_widget_set_size_request (labeleditref, 72, 24);
  gtk_label_set_use_markup (GTK_LABEL (labeleditref), TRUE);

  labeledittype = gtk_label_new (_("<span color='black'><b>Type</b></span>"));
  gtk_widget_show (labeledittype);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), labeledittype, 0, 232);
  gtk_widget_set_size_request (labeledittype, 88, 33);
  gtk_label_set_use_markup (GTK_LABEL (labeledittype), TRUE);

  labeleditquant = gtk_label_new (_("<span color='black'><b>Quantit\303\251</b></span>"));
  gtk_widget_show (labeleditquant);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), labeleditquant, 16, 296);
  gtk_widget_set_size_request (labeleditquant, 72, 25);
  gtk_label_set_use_markup (GTK_LABEL (labeleditquant), TRUE);

  labeleditetat = gtk_label_new (_("<span color='black'><b>Etat</b></span>"));
  gtk_widget_show (labeleditetat);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), labeleditetat, 8, 360);
  gtk_widget_set_size_request (labeleditetat, 80, 25);
  gtk_label_set_use_markup (GTK_LABEL (labeleditetat), TRUE);

  radiobuttoneditepuise = gtk_radio_button_new_with_mnemonic (NULL, _("Epuis\303\251"));
  gtk_widget_show (radiobuttoneditepuise);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), radiobuttoneditepuise, 112, 360);
  gtk_widget_set_size_request (radiobuttoneditepuise, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobuttoneditepuise), radiobuttoneditepuise_group);
  radiobuttoneditepuise_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobuttoneditepuise));

  radiobuttoneditenstock = gtk_radio_button_new_with_mnemonic (NULL, _("En Stock"));
  gtk_widget_show (radiobuttoneditenstock);
  gtk_fixed_put (GTK_FIXED (fixedsearchresto), radiobuttoneditenstock, 248, 360);
  gtk_widget_set_size_request (radiobuttoneditenstock, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobuttoneditenstock), radiobuttoneditepuise_group);
  radiobuttoneditepuise_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobuttoneditenstock));

  searchresto = gtk_label_new (_("<span color='black'><b>Chercher/modifier</b></span>"));
  gtk_widget_show (searchresto);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookresto), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookresto), 3), searchresto);
  gtk_label_set_use_markup (GTK_LABEL (searchresto), TRUE);

  fixedcommand = gtk_fixed_new ();
  gtk_widget_show (fixedcommand);
  gtk_container_add (GTK_CONTAINER (notebookresto), fixedcommand);

  buttonepuise = gtk_button_new ();
  gtk_widget_show (buttonepuise);
  gtk_fixed_put (GTK_FIXED (fixedcommand), buttonepuise, 64, 8);
  gtk_widget_set_size_request (buttonepuise, 224, 61);

  alignment797882 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment797882);
  gtk_container_add (GTK_CONTAINER (buttonepuise), alignment797882);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment797882), hbox10);

  image577780 = gtk_image_new_from_stock ("gtk-go-down", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image577780);
  gtk_box_pack_start (GTK_BOX (hbox10), image577780, FALSE, FALSE, 0);

  label7998992 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Afficher le stock epuis\303\251 </b></span>"));
  gtk_widget_show (label7998992);
  gtk_box_pack_start (GTK_BOX (hbox10), label7998992, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label7998992), TRUE);

  buttoncommand = gtk_button_new ();
  gtk_widget_show (buttoncommand);
  gtk_fixed_put (GTK_FIXED (fixedcommand), buttoncommand, 824, 192);
  gtk_widget_set_size_request (buttoncommand, 208, 77);

  alignment797884 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment797884);
  gtk_container_add (GTK_CONTAINER (buttoncommand), alignment797884);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment797884), hbox12);

  image577782 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image577782);
  gtk_box_pack_start (GTK_BOX (hbox12), image577782, FALSE, FALSE, 0);

  label7998994 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Commander</b></span>"));
  gtk_widget_show (label7998994);
  gtk_box_pack_start (GTK_BOX (hbox12), label7998994, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label7998994), TRUE);

  scrolledwindow111 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow111);
  gtk_fixed_put (GTK_FIXED (fixedcommand), scrolledwindow111, 24, 104);
  gtk_widget_set_size_request (scrolledwindow111, 776, 608);

  treeview501 = gtk_tree_view_new ();
  gtk_widget_show (treeview501);
  gtk_container_add (GTK_CONTAINER (scrolledwindow111), treeview501);
  gtk_widget_set_size_request (treeview501, 664, 472);

  command = gtk_label_new (_("<span color='black'><b>Commander</b></span>"));
  gtk_widget_show (command);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookresto), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookresto), 4), command);
  gtk_label_set_use_markup (GTK_LABEL (command), TRUE);

  refreshstock = gtk_button_new ();
  gtk_widget_show (refreshstock);
  gtk_fixed_put (GTK_FIXED (fixedresto), refreshstock, 1120, 128);
  gtk_widget_set_size_request (refreshstock, 112, 45);

  alignment3888 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3888);
  gtk_container_add (GTK_CONTAINER (refreshstock), alignment3888);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3888), hbox3);

  image344 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image344);
  gtk_box_pack_start (GTK_BOX (hbox3), image344, FALSE, FALSE, 0);

  label17777 = gtk_label_new_with_mnemonic (_("<span color='black'><b>Actualiser</b></span>"));
  gtk_widget_show (label17777);
  gtk_box_pack_start (GTK_BOX (hbox3), label17777, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label17777), TRUE);

  g_signal_connect ((gpointer) buttondisplayresto, "clicked",
                    G_CALLBACK (on_buttondisplayresto_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonsuppresto, "clicked",
                    G_CALLBACK (on_buttonsuppresto_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview99, "row_activated",
                    G_CALLBACK (on_treeview99_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonaddresto, "clicked",
                    G_CALLBACK (on_buttonaddresto_clicked),
                    NULL);
  g_signal_connect ((gpointer) radioepuise, "toggled",
                    G_CALLBACK (on_radioepuise_toggled),
                    NULL);
  g_signal_connect ((gpointer) radioenstock, "toggled",
                    G_CALLBACK (on_radioenstock_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbuttonresto, "toggled",
                    G_CALLBACK (on_checkbuttonresto_toggled),
                    NULL);
  g_signal_connect ((gpointer) buttonhistory, "clicked",
                    G_CALLBACK (on_buttonhistory_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttoneditresto, "clicked",
                    G_CALLBACK (on_buttoneditresto_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonsearchresto, "clicked",
                    G_CALLBACK (on_buttonsearchresto_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobuttoneditepuise, "toggled",
                    G_CALLBACK (on_radiobuttoneditepuise_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobuttoneditenstock, "toggled",
                    G_CALLBACK (on_radiobuttoneditenstock_toggled),
                    NULL);
  g_signal_connect ((gpointer) buttonepuise, "clicked",
                    G_CALLBACK (on_buttonepuise_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttoncommand, "clicked",
                    G_CALLBACK (on_buttoncommand_clicked),
                    NULL);
  g_signal_connect ((gpointer) refreshstock, "clicked",
                    G_CALLBACK (on_refreshstock_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (agentresto, agentresto, "agentresto");
  GLADE_HOOKUP_OBJECT (agentresto, fixedresto, "fixedresto");
  GLADE_HOOKUP_OBJECT (agentresto, logoutresto, "logoutresto");
  GLADE_HOOKUP_OBJECT (agentresto, alignment797881, "alignment797881");
  GLADE_HOOKUP_OBJECT (agentresto, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (agentresto, image577779, "image577779");
  GLADE_HOOKUP_OBJECT (agentresto, label7998991, "label7998991");
  GLADE_HOOKUP_OBJECT (agentresto, image577783, "image577783");
  GLADE_HOOKUP_OBJECT (agentresto, label7998995, "label7998995");
  GLADE_HOOKUP_OBJECT (agentresto, notebookresto, "notebookresto");
  GLADE_HOOKUP_OBJECT (agentresto, fixeddisplayresto, "fixeddisplayresto");
  GLADE_HOOKUP_OBJECT (agentresto, buttondisplayresto, "buttondisplayresto");
  GLADE_HOOKUP_OBJECT (agentresto, alignment244, "alignment244");
  GLADE_HOOKUP_OBJECT (agentresto, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (agentresto, image2787, "image2787");
  GLADE_HOOKUP_OBJECT (agentresto, labelafficherresto, "labelafficherresto");
  GLADE_HOOKUP_OBJECT (agentresto, labeldonnerrefsupp, "labeldonnerrefsupp");
  GLADE_HOOKUP_OBJECT (agentresto, buttonsuppresto, "buttonsuppresto");
  GLADE_HOOKUP_OBJECT (agentresto, alignment797880, "alignment797880");
  GLADE_HOOKUP_OBJECT (agentresto, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (agentresto, image577778, "image577778");
  GLADE_HOOKUP_OBJECT (agentresto, label7998990, "label7998990");
  GLADE_HOOKUP_OBJECT (agentresto, scrolledwindow223, "scrolledwindow223");
  GLADE_HOOKUP_OBJECT (agentresto, treeview99, "treeview99");
  GLADE_HOOKUP_OBJECT (agentresto, labelafficherquoi, "labelafficherquoi");
  GLADE_HOOKUP_OBJECT (agentresto, displayresto, "displayresto");
  GLADE_HOOKUP_OBJECT (agentresto, fixedaddresto, "fixedaddresto");
  GLADE_HOOKUP_OBJECT (agentresto, entrynomadd, "entrynomadd");
  GLADE_HOOKUP_OBJECT (agentresto, entryrefadd, "entryrefadd");
  GLADE_HOOKUP_OBJECT (agentresto, spinquantadd, "spinquantadd");
  GLADE_HOOKUP_OBJECT (agentresto, msgadd, "msgadd");
  GLADE_HOOKUP_OBJECT (agentresto, comboboxtypeadd, "comboboxtypeadd");
  GLADE_HOOKUP_OBJECT (agentresto, buttonaddresto, "buttonaddresto");
  GLADE_HOOKUP_OBJECT (agentresto, alignment133333, "alignment133333");
  GLADE_HOOKUP_OBJECT (agentresto, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (agentresto, image1723, "image1723");
  GLADE_HOOKUP_OBJECT (agentresto, labeladdresto, "labeladdresto");
  GLADE_HOOKUP_OBJECT (agentresto, radioepuise, "radioepuise");
  GLADE_HOOKUP_OBJECT (agentresto, radioenstock, "radioenstock");
  GLADE_HOOKUP_OBJECT (agentresto, labelnomadd, "labelnomadd");
  GLADE_HOOKUP_OBJECT (agentresto, labelrefadd, "labelrefadd");
  GLADE_HOOKUP_OBJECT (agentresto, labeltypeadd, "labeltypeadd");
  GLADE_HOOKUP_OBJECT (agentresto, labelquantadd, "labelquantadd");
  GLADE_HOOKUP_OBJECT (agentresto, checkbuttonresto, "checkbuttonresto");
  GLADE_HOOKUP_OBJECT (agentresto, addresto, "addresto");
  GLADE_HOOKUP_OBJECT (agentresto, fixeddeleteresto, "fixeddeleteresto");
  GLADE_HOOKUP_OBJECT (agentresto, buttonhistory, "buttonhistory");
  GLADE_HOOKUP_OBJECT (agentresto, alignment579797, "alignment579797");
  GLADE_HOOKUP_OBJECT (agentresto, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (agentresto, image577777, "image577777");
  GLADE_HOOKUP_OBJECT (agentresto, label678889, "label678889");
  GLADE_HOOKUP_OBJECT (agentresto, scrolledwindow222, "scrolledwindow222");
  GLADE_HOOKUP_OBJECT (agentresto, treeview500, "treeview500");
  GLADE_HOOKUP_OBJECT (agentresto, labeldisplayhistory, "labeldisplayhistory");
  GLADE_HOOKUP_OBJECT (agentresto, historyresto, "historyresto");
  GLADE_HOOKUP_OBJECT (agentresto, fixedsearchresto, "fixedsearchresto");
  GLADE_HOOKUP_OBJECT (agentresto, searchrestoentry, "searchrestoentry");
  GLADE_HOOKUP_OBJECT (agentresto, entryeditref, "entryeditref");
  GLADE_HOOKUP_OBJECT (agentresto, spinbuttoneditquant, "spinbuttoneditquant");
  GLADE_HOOKUP_OBJECT (agentresto, comboboxedittype, "comboboxedittype");
  GLADE_HOOKUP_OBJECT (agentresto, buttoneditresto, "buttoneditresto");
  GLADE_HOOKUP_OBJECT (agentresto, alignment797879, "alignment797879");
  GLADE_HOOKUP_OBJECT (agentresto, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (agentresto, image7766, "image7766");
  GLADE_HOOKUP_OBJECT (agentresto, label97777, "label97777");
  GLADE_HOOKUP_OBJECT (agentresto, test, "test");
  GLADE_HOOKUP_OBJECT (agentresto, labelwarning, "labelwarning");
  GLADE_HOOKUP_OBJECT (agentresto, labelsearchpro, "labelsearchpro");
  GLADE_HOOKUP_OBJECT (agentresto, buttonsearchresto, "buttonsearchresto");
  GLADE_HOOKUP_OBJECT (agentresto, alignment89898, "alignment89898");
  GLADE_HOOKUP_OBJECT (agentresto, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (agentresto, image47777, "image47777");
  GLADE_HOOKUP_OBJECT (agentresto, label4777, "label4777");
  GLADE_HOOKUP_OBJECT (agentresto, labeleditref, "labeleditref");
  GLADE_HOOKUP_OBJECT (agentresto, labeledittype, "labeledittype");
  GLADE_HOOKUP_OBJECT (agentresto, labeleditquant, "labeleditquant");
  GLADE_HOOKUP_OBJECT (agentresto, labeleditetat, "labeleditetat");
  GLADE_HOOKUP_OBJECT (agentresto, radiobuttoneditepuise, "radiobuttoneditepuise");
  GLADE_HOOKUP_OBJECT (agentresto, radiobuttoneditenstock, "radiobuttoneditenstock");
  GLADE_HOOKUP_OBJECT (agentresto, searchresto, "searchresto");
  GLADE_HOOKUP_OBJECT (agentresto, fixedcommand, "fixedcommand");
  GLADE_HOOKUP_OBJECT (agentresto, buttonepuise, "buttonepuise");
  GLADE_HOOKUP_OBJECT (agentresto, alignment797882, "alignment797882");
  GLADE_HOOKUP_OBJECT (agentresto, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (agentresto, image577780, "image577780");
  GLADE_HOOKUP_OBJECT (agentresto, label7998992, "label7998992");
  GLADE_HOOKUP_OBJECT (agentresto, buttoncommand, "buttoncommand");
  GLADE_HOOKUP_OBJECT (agentresto, alignment797884, "alignment797884");
  GLADE_HOOKUP_OBJECT (agentresto, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (agentresto, image577782, "image577782");
  GLADE_HOOKUP_OBJECT (agentresto, label7998994, "label7998994");
  GLADE_HOOKUP_OBJECT (agentresto, scrolledwindow111, "scrolledwindow111");
  GLADE_HOOKUP_OBJECT (agentresto, treeview501, "treeview501");
  GLADE_HOOKUP_OBJECT (agentresto, command, "command");
  GLADE_HOOKUP_OBJECT (agentresto, refreshstock, "refreshstock");
  GLADE_HOOKUP_OBJECT (agentresto, alignment3888, "alignment3888");
  GLADE_HOOKUP_OBJECT (agentresto, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (agentresto, image344, "image344");
  GLADE_HOOKUP_OBJECT (agentresto, label17777, "label17777");

  return agentresto;
}

