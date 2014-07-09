#include <hxcpp.h>

#ifndef INCLUDED_Helpers
#include <Helpers.h>
#endif

Void Helpers_obj::__construct()
{
	return null();
}

//Helpers_obj::~Helpers_obj() { }

Dynamic Helpers_obj::__CreateEmpty() { return  new Helpers_obj; }
hx::ObjectPtr< Helpers_obj > Helpers_obj::__new()
{  hx::ObjectPtr< Helpers_obj > result = new Helpers_obj();
	result->__construct();
	return result;}

Dynamic Helpers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Helpers_obj > result = new Helpers_obj();
	result->__construct();
	return result;}

Float Helpers_obj::clamp( Float value,Float min,Float max){
	HX_STACK_FRAME("Helpers","clamp",0x19afe0f2,"Helpers.clamp","Helpers.hx",7,0xf2bc9cb9)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(7)
	if (((value < min))){
		HX_STACK_LINE(8)
		return min;
	}
	else{
		HX_STACK_LINE(9)
		if (((value > max))){
			HX_STACK_LINE(10)
			return max;
		}
		else{
			HX_STACK_LINE(12)
			return value;
		}
	}
	HX_STACK_LINE(7)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Helpers_obj,clamp,return )


Helpers_obj::Helpers_obj()
{
}

Dynamic Helpers_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Helpers_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Helpers_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clamp"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Helpers_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Helpers_obj::__mClass,"__mClass");
};

#endif

Class Helpers_obj::__mClass;

void Helpers_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Helpers"), hx::TCanCast< Helpers_obj> ,sStaticFields,sMemberFields,
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

void Helpers_obj::__boot()
{
}

