﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 物品兑换表.xlsm SHEET: Sheet1 KEY: id

#pragma once
#pragma pack(1)
struct ItemExchangeDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(id); }

	DWORD id; // 道具编号
	DWORD num; // 战争勋章数量
};
#pragma pack()

#if false
namespace table
{
	// 物品兑换表
	struct zItemExchangeDataBaseEntry : public zEntry
	{
		DWORD id; // 道具编号
		DWORD num; // 战争勋章数量

		virtual const char* getClassName() const { return "物品兑换表"; }
		static const char* getFileName() { return "ItemExchangeDataBase.tbl"; }
		void fill(const ItemExchangeDataBase& base)
		{
			this->id = base.getUniqueID();

			this->id = base.id;
			this->num = base.num;
		}
		void reset()
		{
			this->id = 0;
			this->num = 0;
		}
	};
	typedef zDataBM<zItemExchangeDataBaseEntry, ItemExchangeDataBase> ItemExchangeDataBaseManager;
}
#endif

