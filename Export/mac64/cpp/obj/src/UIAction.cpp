#include <hxcpp.h>

#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIActionType
#include <UIActionType.h>
#endif

Void UIAction_obj::__construct()
{
	return null();
}

//UIAction_obj::~UIAction_obj() { }

Dynamic UIAction_obj::__CreateEmpty() { return  new UIAction_obj; }
hx::ObjectPtr< UIAction_obj > UIAction_obj::__new()
{  hx::ObjectPtr< UIAction_obj > result = new UIAction_obj();
	result->__construct();
	return result;}

Dynamic UIAction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIAction_obj > result = new UIAction_obj();
	result->__construct();
	return result;}


UIAction_obj::UIAction_obj()
{
}

void UIAction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIAction);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void UIAction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic UIAction_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIAction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::UIActionType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIAction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::UIActionType*/ ,(int)offsetof(UIAction_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIAction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIAction_obj::__mClass,"__mClass");
};

#endif

Class UIAction_obj::__mClass;

void UIAction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UIAction"), hx::TCanCast< UIAction_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void UIAction_obj::__boot()
{
}

