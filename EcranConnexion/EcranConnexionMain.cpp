/***************************************************************
 * Name:      EcranConnexionMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-11
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranConnexionMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranConnexionFrame)
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

//(*IdInit(EcranConnexionFrame)
const long EcranConnexionFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranConnexionFrame::ID_STATICTEXT1 = wxNewId();
const long EcranConnexionFrame::ID_STATICTEXT2 = wxNewId();
const long EcranConnexionFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranConnexionFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranConnexionFrame::ID_STATICTEXT3 = wxNewId();
const long EcranConnexionFrame::ID_BUTTON1 = wxNewId();
const long EcranConnexionFrame::idMenuQuit = wxNewId();
const long EcranConnexionFrame::idMenuAbout = wxNewId();
const long EcranConnexionFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranConnexionFrame,wxFrame)
    //(*EventTable(EcranConnexionFrame)
    //*)
END_EVENT_TABLE()

EcranConnexionFrame::EcranConnexionFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranConnexionFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(500,600));
    Move(wxPoint(-1,-1));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(392,120), wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Username :"), wxPoint(80,344), wxSize(120,30), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("TeX Gyre Pagella Math"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password :"), wxPoint(80,400), wxSize(120,30), 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("TeX Gyre Pagella Math"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(216,336), wxSize(215,38), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(216,392), wxSize(216,36), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Vous n\'avez pas de compte \?"), wxPoint(56,480), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Créez un compte "), wxPoint(256,472), wxSize(152,36), 0, wxDefaultValidator, _T("ID_BUTTON1"));
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranConnexionFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranConnexionFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranConnexionFrame::OnAbout);
    //*)
}

EcranConnexionFrame::~EcranConnexionFrame()
{
    //(*Destroy(EcranConnexionFrame)
    //*)
}

void EcranConnexionFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranConnexionFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void EcranConnexionFrame::OnButton1Click(wxCommandEvent& event)
{
}
