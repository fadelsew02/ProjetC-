/***************************************************************
 * Name:      EcranConnexionGerantMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef ECRANCONNEXIONGERANTMAIN_H
#define ECRANCONNEXIONGERANTMAIN_H

//(*Headers(EcranConnexionGerantFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class EcranConnexionGerantFrame: public wxFrame
{
    public:

        EcranConnexionGerantFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~EcranConnexionGerantFrame();

    private:

        //(*Handlers(EcranConnexionGerantFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(EcranConnexionGerantFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_STATICBOX1;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL4;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(EcranConnexionGerantFrame)
        wxStaticBitmap* StaticBitmap1;
        wxStaticBox* StaticBox1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl3;
        wxTextCtrl* TextCtrl4;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ECRANCONNEXIONGERANTMAIN_H
