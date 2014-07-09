#include <hxcpp.h>

#ifndef INCLUDED_UIActionType
#include <UIActionType.h>
#endif

::UIActionType UIActionType_obj::UIActionNone;

::UIActionType UIActionType_obj::UIActionSetBalastTankLevel;

::UIActionType UIActionType_obj::UIActionSetEnginePower;

HX_DEFINE_CREATE_ENUM(UIActionType_obj)

int UIActionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("UIActionNone")) return 0;
	if (inName==HX_CSTRING("UIActionSetBalastTankLevel")) return 2;
	if (inName==HX_CSTRING("UIActionSetEnginePower")) return 1;
	return super::__FindIndex(inName);
}

int UIActionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("UIActionNone")) return 0;
	if (inName==HX_CSTRING("UIActionSetBalastTankLevel")) return 0;
	if (inName==HX_CSTRING("UIActionSetEnginePower")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic UIActionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("UIActionNone")) return UIActionNone;
	if (inName==HX_CSTRING("UIActionSetBalastTankLevel")) return UIActionSetBalastTankLevel;
	if (inName==HX_CSTRING("UIActionSetEnginePower")) return UIActionSetEnginePower;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("UIActionNone"),
	HX_CSTRING("UIActionSetEnginePower"),
	HX_CSTRING("UIActionSetBalastTankLevel"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIActionType_obj::UIActionNone,"UIActionNone");
	HX_MARK_MEMBER_NAME(UIActionType_obj::UIActionSetBalastTankLevel,"UIActionSetBalastTankLevel");
	HX_MARK_MEMBER_NAME(UIActionType_obj::UIActionSetEnginePower,"UIActionSetEnginePower");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIActionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIActionType_obj::UIActionNone,"UIActionNone");
	HX_VISIT_MEMBER_NAME(UIActionType_obj::UIActionSetBalastTankLevel,"UIActionSetBalastTankLevel");
	HX_VISIT_MEMBER_NAME(UIActionType_obj::UIActionSetEnginePower,"UIActionSetEnginePower");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class UIActionType_obj::__mClass;

Dynamic __Create_UIActionType_obj() { return new UIActionType_obj; }

void UIActionType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UIActionType"), hx::TCanCast< UIActionType_obj >,sStaticFields,sMemberFields,
	&__Create_UIActionType_obj, &__Create,
	&super::__SGetClass(), &CreateUIActionType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void UIActionType_obj::__boot()
{
hx::Static(UIActionNone) = hx::CreateEnum< UIActionType_obj >(HX_CSTRING("UIActionNone"),0);
hx::Static(UIActionSetBalastTankLevel) = hx::CreateEnum< UIActionType_obj >(HX_CSTRING("UIActionSetBalastTankLevel"),2);
hx::Static(UIActionSetEnginePower) = hx::CreateEnum< UIActionType_obj >(HX_CSTRING("UIActionSetEnginePower"),1);
}


