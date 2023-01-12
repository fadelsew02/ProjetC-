/***************************************************************
 * Name:      EcranConnexionGerantApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranConnexionGerantApp.h"

//(*AppHeaders
#include "EcranConnexionGerantMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranConnexionGerantApp);

bool EcranConnexionGerantApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranConnexionGerantFrame* Frame = new EcranConnexionGerantFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
