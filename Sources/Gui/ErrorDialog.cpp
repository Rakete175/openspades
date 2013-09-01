// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "ErrorDialog.h"

void ErrorDialog::cb_OK_i(Fl_Return_Button*, void*) {
  this->result = 1;
hide();
}
void ErrorDialog::cb_OK(Fl_Return_Button* o, void* v) {
  ((ErrorDialog*)(o->parent()))->cb_OK_i(o,v);
}

void ErrorDialog::cb_Quit_i(Fl_Button*, void*) {
  this->result = 0;
hide();
}
void ErrorDialog::cb_Quit(Fl_Button* o, void* v) {
  ((ErrorDialog*)(o->parent()))->cb_Quit_i(o,v);
}
ErrorDialog::ErrorDialog(int X, int Y, int W, int H, const char *L)
  : Fl_Window(X, Y, W, H, L) {
  _ErrorDialog();
}

ErrorDialog::ErrorDialog(int W, int H, const char *L)
  : Fl_Window(0, 0, W, H, L) {
  clear_flag(16);
  _ErrorDialog();
}

ErrorDialog::ErrorDialog()
  : Fl_Window(0, 0, 595, 171, "OpenSpades Error") {
  clear_flag(16);
  _ErrorDialog();
}

void ErrorDialog::_ErrorDialog() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
this->when(FL_WHEN_RELEASE);
{ infoView = new Fl_Text_Display(25, 40, 550, 70, "An error caused OpenSpades to stop working:");
  infoView->align(Fl_Align(FL_ALIGN_TOP_LEFT));
} // Fl_Text_Display* infoView
{ Fl_Return_Button* o = new Fl_Return_Button(365, 125, 100, 25, "OK");
  o->callback((Fl_Callback*)cb_OK);
} // Fl_Return_Button* o
{ Fl_Button* o = new Fl_Button(475, 125, 100, 25, "Quit");
  o->callback((Fl_Callback*)cb_Quit);
} // Fl_Button* o
{ helpView = new Fl_Output(25, 125, 330, 25);
  helpView->box(FL_FLAT_BOX);
  helpView->color(FL_BACKGROUND_COLOR);
  helpView->textsize(12);
} // Fl_Output* helpView
end();
}
