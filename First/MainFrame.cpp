#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
	wxCheckBox* CheckBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55));
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Static text. You cannot touch", wxPoint(120, 20));
	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "You can edit this one", wxPoint(100, 145), wxSize(200, -1));
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1));
	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 255), wxSize(200, -1));
	gauge->SetValue(50);

	wxArrayString choices;
	choices.Add("Item A");
	choices.Add("Item B");
	choices.Add("Item C");

	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices);
	choice->Select(0);

	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Radiobox", wxPoint(485, 475), wxDefaultSize, choices);

}

