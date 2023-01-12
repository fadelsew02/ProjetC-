/***************************************************************
 * Name:      ListeDesSallesVueClientApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "ListeDesSallesVueClientApp.h"

//(*AppHeaders
#include "ListeDesSallesVueClientMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ListeDesSallesVueClientApp);

bool ListeDesSallesVueClientApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ListeDesSallesVueClientFrame* Frame = new ListeDesSallesVueClientFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
