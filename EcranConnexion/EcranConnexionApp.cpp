/***************************************************************
 * Name:      EcranConnexionApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-11
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranConnexionApp.h"

//(*AppHeaders
#include "EcranConnexionMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranConnexionApp);

bool EcranConnexionApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranConnexionFrame* Frame = new EcranConnexionFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
