//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("main_code.cpp", main_form);
USEFORM("_help_form.cpp", help_form);
USEFORM("_exit_form.cpp", exit_form);
USEFORM("_fixed_assets.cpp", fixed_assets);
USEFORM("_theory_form.cpp", theory_form);
USEFORM("_settings_form.cpp", settings);
USEFORM("works\4\main_code4.cpp", econ4_form);
USEFORM("_human_form.cpp", human_form);
USEFORM("works\1\main.cpp", act);
USEFORM("works\10\_performance_form.cpp", performance_work);
USEFORM("_firm_form.cpp", firm_form);
USEFORM("results_form.cpp", result_form);
USEFORM("works\9\middle_performance_form.cpp", middle_performance);
USEFORM("works\5\new_tech_form.cpp", new_tech);
USEFORM("works\5\helpa.cpp", Help);
USEFORM("works\11\_salary_form.cpp", salary_form);
USEFORM("works\8\_product_quality_form.cpp", product_quality);
USEFORM("works\3\_fixed_assets_form.cpp", fixed_assets_form);
USEFORM("works\7\_manufactoring_form.cpp", manufactoring_form);
USEFORM("works\2\_working_form.cpp", working_form);
USEFORM("works\6\_rotating_form.cpp", rotating_form);
USEFORM("_user_guide_form.cpp", user_guide_form);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(Tmain_form), &main_form);
                 Application->CreateForm(__classid(Thelp_form), &help_form);
                 Application->CreateForm(__classid(Texit_form), &exit_form);
                 Application->CreateForm(__classid(Tsettings), &settings);
                 Application->CreateForm(__classid(Tfixed_assets), &fixed_assets);
                 Application->CreateForm(__classid(Thuman_form), &human_form);
                 Application->CreateForm(__classid(Tfirm_form), &firm_form);
                 Application->CreateForm(__classid(Tresult_form), &result_form);
                 Application->CreateForm(__classid(THelp), &Help);
                 Application->CreateForm(__classid(Tuser_guide_form), &user_guide_form);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
