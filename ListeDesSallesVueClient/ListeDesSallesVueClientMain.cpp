/***************************************************************
 * Name:      ListeDesSallesVueClientMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "ListeDesSallesVueClientMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(ListeDesSallesVueClientFrame)
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

//(*IdInit(ListeDesSallesVueClientFrame)
const long ListeDesSallesVueClientFrame::ID_STATICBITMAP1 = wxNewId();
const long ListeDesSallesVueClientFrame::ID_STATICTEXT1 = wxNewId();
const long ListeDesSallesVueClientFrame::ID_STATICTEXT2 = wxNewId();
const long ListeDesSallesVueClientFrame::ID_STATICTEXT3 = wxNewId();
const long ListeDesSallesVueClientFrame::ID_STATICTEXT4 = wxNewId();
const long ListeDesSallesVueClientFrame::idMenuQuit = wxNewId();
const long ListeDesSallesVueClientFrame::idMenuAbout = wxNewId();
const long ListeDesSallesVueClientFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ListeDesSallesVueClientFrame,wxFrame)
    //(*EventTable(ListeDesSallesVueClientFrame)
    //*)
END_EVENT_TABLE()

ListeDesSallesVueClientFrame::ListeDesSallesVueClientFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ListeDesSallesVueClientFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(288,184), wxSize(1100,1100), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Salles"), wxPoint(32,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Prix"), wxPoint(120,16), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Réservé"), wxPoint(216,16), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Par :"), wxPoint(320,16), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ListeDesSallesVueClientFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ListeDesSallesVueClientFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&ListeDesSallesVueClientFrame::OnClose);
    //*)
}

ListeDesSallesVueClientFrame::~ListeDesSallesVueClientFrame()
{
    //(*Destroy(ListeDesSallesVueClientFrame)
    //*)
}

void ListeDesSallesVueClientFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ListeDesSallesVueClientFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void ListeDesSallesVueClientFrame::OnClose(wxCloseEvent& event)
{
}
