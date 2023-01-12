/***************************************************************
 * Name:      EcranConnexionGerantMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranConnexionGerantMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranConnexionGerantFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(EcranConnexionGerantFrame)
const long EcranConnexionGerantFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranConnexionGerantFrame::ID_STATICBOX1 = wxNewId();
const long EcranConnexionGerantFrame::ID_STATICTEXT1 = wxNewId();
const long EcranConnexionGerantFrame::ID_STATICTEXT2 = wxNewId();
const long EcranConnexionGerantFrame::ID_STATICTEXT3 = wxNewId();
const long EcranConnexionGerantFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranConnexionGerantFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranConnexionGerantFrame::ID_TEXTCTRL3 = wxNewId();
const long EcranConnexionGerantFrame::ID_STATICTEXT4 = wxNewId();
const long EcranConnexionGerantFrame::ID_TEXTCTRL4 = wxNewId();
const long EcranConnexionGerantFrame::idMenuQuit = wxNewId();
const long EcranConnexionGerantFrame::idMenuAbout = wxNewId();
const long EcranConnexionGerantFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranConnexionGerantFrame,wxFrame)
    //(*EventTable(EcranConnexionGerantFrame)
    //*)
END_EVENT_TABLE()

EcranConnexionGerantFrame::EcranConnexionGerantFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranConnexionGerantFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(288,152), wxSize(600,300), 0, _T("ID_STATICBITMAP1"));
    StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("  S\'inscrire en tant que Gérant    "), wxPoint(16,136), wxSize(376,288), 0, _T("ID_STATICBOX1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Nom : "), wxPoint(32,216), wxSize(104,32), 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Prénoms :"), wxPoint(32,264), wxSize(96,32), 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Mot de passe :"), wxPoint(32,312), wxSize(96,32), 0, _T("ID_STATICTEXT3"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(144,208), wxSize(184,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(144,256), wxSize(184,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(144,304), wxSize(184,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Confirmer mot de passe :"), wxPoint(32,352), wxSize(96,40), 0, _T("ID_STATICTEXT4"));
    TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(144,352), wxSize(184,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranConnexionGerantFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranConnexionGerantFrame::OnAbout);
    //*)
}

EcranConnexionGerantFrame::~EcranConnexionGerantFrame()
{
    //(*Destroy(EcranConnexionGerantFrame)
    //*)
}

void EcranConnexionGerantFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranConnexionGerantFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
