/***************************************************************
 * Name:      ListeDesSallesVueClientMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef LISTEDESSALLESVUECLIENTMAIN_H
#define LISTEDESSALLESVUECLIENTMAIN_H

//(*Headers(ListeDesSallesVueClientFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class ListeDesSallesVueClientFrame: public wxFrame
{
    public:

        ListeDesSallesVueClientFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ListeDesSallesVueClientFrame();

    private:

        //(*Handlers(ListeDesSallesVueClientFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(ListeDesSallesVueClientFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(ListeDesSallesVueClientFrame)
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // LISTEDESSALLESVUECLIENTMAIN_H
