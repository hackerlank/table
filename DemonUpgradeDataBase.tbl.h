﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 奇异兽强化表.xlsm SHEET: Sheet1 KEY: id

#pragma once
#pragma pack(1)
struct DemonUpgradeDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(id); }

	DWORD id; // 品阶
	DWORD materialnum; // 材料数量
	DWORD percent; // 成功率
	DWORD effect; // 强化效果
	DWORD downto; // 失败惩罚
	DWORD money; // 银币消耗
};
#pragma pack()

#if false
namespace table
{
	// 奇异兽强化表
	struct zDemonUpgradeDataBaseEntry : public zEntry
	{
		DWORD id; // 品阶
		DWORD materialnum; // 材料数量
		DWORD percent; // 成功率
		DWORD effect; // 强化效果
		DWORD downto; // 失败惩罚
		DWORD money; // 银币消耗

		virtual const char* getClassName() const { return "奇异兽强化表"; }
		static const char* getFileName() { return "DemonUpgradeDataBase.tbl"; }
		void fill(const DemonUpgradeDataBase& base)
		{
			this->id = base.getUniqueID();

			this->id = base.id;
			this->materialnum = base.materialnum;
			this->percent = base.percent;
			this->effect = base.effect;
			this->downto = base.downto;
			this->money = base.money;
		}
		void reset()
		{
			this->id = 0;
			this->materialnum = 0;
			this->percent = 0;
			this->effect = 0;
			this->downto = 0;
			this->money = 0;
		}
	};
	typedef zDataBM<zDemonUpgradeDataBaseEntry, DemonUpgradeDataBase> DemonUpgradeDataBaseManager;
}
#endif

