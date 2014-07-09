#include <hxcpp.h>

#ifndef INCLUDED_ShipEnd
#include <ShipEnd.h>
#endif

::ShipEnd ShipEnd_obj::Bow;

::ShipEnd ShipEnd_obj::Stern;

HX_DEFINE_CREATE_ENUM(ShipEnd_obj)

int ShipEnd_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Bow")) return 1;
	if (inName==HX_CSTRING("Stern")) return 0;
	return super::__FindIndex(inName);
}

int ShipEnd_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Bow")) return 0;
	if (inName==HX_CSTRING("Stern")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ShipEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Bow")) return Bow;
	if (inName==HX_CSTRING("Stern")) return Stern;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Stern"),
	HX_CSTRING("Bow"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShipEnd_obj::Bow,"Bow");
	HX_MARK_MEMBER_NAME(ShipEnd_obj::Stern,"Stern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShipEnd_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShipEnd_obj::Bow,"Bow");
	HX_VISIT_MEMBER_NAME(ShipEnd_obj::Stern,"Stern");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ShipEnd_obj::__mClass;

Dynamic __Create_ShipEnd_obj() { return new ShipEnd_obj; }

void ShipEnd_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ShipEnd"), hx::TCanCast< ShipEnd_obj >,sStaticFields,sMemberFields,
	&__Create_ShipEnd_obj, &__Create,
	&super::__SGetClass(), &CreateShipEnd_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ShipEnd_obj::__boot()
{
hx::Static(Bow) = hx::CreateEnum< ShipEnd_obj >(HX_CSTRING("Bow"),1);
hx::Static(Stern) = hx::CreateEnum< ShipEnd_obj >(HX_CSTRING("Stern"),0);
}


