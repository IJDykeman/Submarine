#ifndef INCLUDED_UIActionType
#define INCLUDED_UIActionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(UIActionType)


class UIActionType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef UIActionType_obj OBJ_;

	public:
		UIActionType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("UIActionType"); }
		::String __ToString() const { return HX_CSTRING("UIActionType.") + tag; }

		static ::UIActionType UIActionNone;
		static inline ::UIActionType UIActionNone_dyn() { return UIActionNone; }
		static ::UIActionType UIActionSetBalastTankLevel;
		static inline ::UIActionType UIActionSetBalastTankLevel_dyn() { return UIActionSetBalastTankLevel; }
		static ::UIActionType UIActionSetEnginePower;
		static inline ::UIActionType UIActionSetEnginePower_dyn() { return UIActionSetEnginePower; }
};


#endif /* INCLUDED_UIActionType */ 
