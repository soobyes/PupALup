#ifndef PUPALUPAPP_H
#define PUPALUPAPP_H

#include "MooseApp.h"

class PupalupApp;

template<>
InputParameters validParams<PupalupApp>();

class PupalupApp : public MooseApp
{
public:
  PupalupApp(const std::string & name, InputParameters parameters);
  virtual ~PupalupApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* PUPALUPAPP_H */
