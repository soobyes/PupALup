#include "PupalupApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"

template<>
InputParameters validParams<PupalupApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

PupalupApp::PupalupApp(InputParameters parameters) :
    MooseApp(parameters)
{

  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  PupalupApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  PupalupApp::associateSyntax(_syntax, _action_factory);
}

PupalupApp::~PupalupApp()
{
}

void
PupalupApp::registerApps()
{
  registerApp(PupalupApp);
}

void
PupalupApp::registerObjects(Factory & factory)
{
}

void
PupalupApp::associateSyntax(Syntax & syntax, ActionFactory & action_factory)
{
}
