﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 羽翼品质表.xlsm SHEET: Sheet1 KEY: quality

#pragma once
#pragma pack(1)
struct WingQualityBase
{
	DWORD getUniqueID() const { return usage_id_hash(quality); }

	DWORD quality; // 羽翼品质
	DWORD spiritlimit; // 总魂点上限
	DWORD onepropertylimit; // 单项属性上限
	DWORD recastmaterialnum; // 重铸材料数量
	DWORD slotnum; // 暗槽数量
	DWORD needrefinelevel; // 升级需求炼化等级
	DWORD needspirit; // 升级需求总魂点
};
#pragma pack()

#if false
namespace table
{
	// 羽翼品质表
	struct zWingQualityBaseEntry : public zEntry
	{
		DWORD quality; // 羽翼品质
		DWORD spiritlimit; // 总魂点上限
		DWORD onepropertylimit; // 单项属性上限
		DWORD recastmaterialnum; // 重铸材料数量
		DWORD slotnum; // 暗槽数量
		DWORD needrefinelevel; // 升级需求炼化等级
		DWORD needspirit; // 升级需求总魂点

		virtual const char* getClassName() const { return "羽翼品质表"; }
		static const char* getFileName() { return "WingQualityBase.tbl"; }
		void fill(const WingQualityBase& base)
		{
			this->id = base.getUniqueID();

			this->quality = base.quality;
			this->spiritlimit = base.spiritlimit;
			this->onepropertylimit = base.onepropertylimit;
			this->recastmaterialnum = base.recastmaterialnum;
			this->slotnum = base.slotnum;
			this->needrefinelevel = base.needrefinelevel;
			this->needspirit = base.needspirit;
		}
		void reset()
		{
			this->quality = 0;
			this->spiritlimit = 0;
			this->onepropertylimit = 0;
			this->recastmaterialnum = 0;
			this->slotnum = 0;
			this->needrefinelevel = 0;
			this->needspirit = 0;
		}
	};
	typedef zDataBM<zWingQualityBaseEntry, WingQualityBase> WingQualityBaseManager;
}
#endif

