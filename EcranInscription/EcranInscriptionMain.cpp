/***************************************************************
 * Name:      EcranInscriptionMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-11
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranInscriptionMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranInscriptionFrame)
#include <wx/font.h>
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

//(*IdInit(EcranInscriptionFrame)
const long EcranInscriptionFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT1 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT2 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT3 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT4 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT5 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT6 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL3 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL4 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL5 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL6 = wxNewId();
const long EcranInscriptionFrame::ID_STATICBOX1 = wxNewId();
const long EcranInscriptionFrame::idMenuQuit = wxNewId();
const long EcranInscriptionFrame::idMenuAbout = wxNewId();
const long EcranInscriptionFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranInscriptionFrame,wxFrame)
    //(*EventTable(EcranInscriptionFrame)
    //*)
END_EVENT_TABLE()

EcranInscriptionFrame::EcranInscriptionFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranInscriptionFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(538,-1));
    Move(wxPoint(-1,-1));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(376,360), wxSize(538,580), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Date de Naissance :"), wxPoint(32,232), wxSize(176,19), 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Mot de Passe :"), wxPoint(32,264), wxSize(176,19), 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("UserName :"), wxPoint(32,200), wxSize(160,19), 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Confirmer Mot de Passe :"), wxPoint(32,296), wxSize(176,32), 0, _T("ID_STATICTEXT4"));
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Prénoms :"), wxPoint(32,168), wxSize(168,32), 0, _T("ID_STATICTEXT5"));
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Nom :"), wxPoint(32,136), wxSize(160,19), 0, _T("ID_STATICTEXT6"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(208,288), wxSize(180,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(208,256), wxSize(180,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(208,224), wxSize(180,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(208,192), wxSize(180,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(208,160), wxSize(180,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxPoint(208,128), wxSize(180,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("INSCRIPTION      "), wxPoint(16,88), wxSize(376,248), 0, _T("ID_STATICBOX1"));
    wxFont StaticBox1Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Quicksand Light"),wxFONTENCODING_DEFAULT);
    StaticBox1->SetFont(StaticBox1Font);
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranInscriptionFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranInscriptionFrame::OnAbout);
    //*)
}

EcranInscriptionFrame::~EcranInscriptionFrame()
{
    //(*Destroy(EcranInscriptionFrame)
    //*)
}

void EcranInscriptionFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranInscriptionFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
