/***************************************************************
 * Name:      PopUpdeValidationReservationMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "PopUpdeValidationReservationMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(PopUpdeValidationReservationFrame)
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

//(*IdInit(PopUpdeValidationReservationFrame)
const long PopUpdeValidationReservationFrame::ID_STATICBITMAP1 = wxNewId();
const long PopUpdeValidationReservationFrame::ID_TOGGLEBUTTON1 = wxNewId();
const long PopUpdeValidationReservationFrame::ID_TOGGLEBUTTON2 = wxNewId();
const long PopUpdeValidationReservationFrame::ID_STATICTEXT1 = wxNewId();
const long PopUpdeValidationReservationFrame::idMenuQuit = wxNewId();
const long PopUpdeValidationReservationFrame::idMenuAbout = wxNewId();
const long PopUpdeValidationReservationFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PopUpdeValidationReservationFrame,wxFrame)
    //(*EventTable(PopUpdeValidationReservationFrame)
    //*)
END_EVENT_TABLE()

PopUpdeValidationReservationFrame::PopUpdeValidationReservationFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(PopUpdeValidationReservationFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(478,258));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(240,136), wxSize(700,250), 0, _T("ID_STATICBITMAP1"));
    ToggleButton1 = new wxToggleButton(this, ID_TOGGLEBUTTON1, _("Oui"), wxPoint(96,136), wxSize(104,48), 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
    ToggleButton2 = new wxToggleButton(this, ID_TOGGLEBUTTON2, _("Non"), wxPoint(256,136), wxSize(96,48), 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON2"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("\n\n\n  Confirmez-vous cette réservation \?"), wxPoint(56,24), wxSize(336,56), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(13,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("URW Bookman"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&PopUpdeValidationReservationFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&PopUpdeValidationReservationFrame::OnAbout);
    //*)
}

PopUpdeValidationReservationFrame::~PopUpdeValidationReservationFrame()
{
    //(*Destroy(PopUpdeValidationReservationFrame)
    //*)
}

void PopUpdeValidationReservationFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void PopUpdeValidationReservationFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
