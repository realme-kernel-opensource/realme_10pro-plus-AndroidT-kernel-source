/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */
#ifndef __FBT_USEDEXT_H__
#define __FBT_USEDEXT_H__


extern int prefer_idle_for_perf_idx(int idx, int prefer_idle);
extern unsigned int mt_ppm_userlimit_freq_limit_by_others(
		unsigned int cluster);
extern unsigned long get_cpu_orig_capacity(unsigned int cpu);
extern int upower_get_turn_point(void);
#if defined(OPLUS_FEATURE_SCHEDUTIL_USE_TL) && defined(CONFIG_SCHEDUTIL_USE_TL)
extern void set_capacity_margin_dvfs(unsigned int margin);
extern void set_capacity_margin_dvfs_changed(bool changed);
extern unsigned int get_capacity_margin_dvfs(void);
#else
extern void set_capacity_margin(unsigned int margin);
extern unsigned int get_capacity_margin(void);
#endif
extern void set_user_nice(struct task_struct *p, long nice);

extern int fpsgo_fbt2minitop_start(int count, struct fpsgo_loading *fl);
extern int fpsgo_fbt2minitop_query(int count, struct fpsgo_loading *fl);
extern int fpsgo_fbt2minitop_end(void);
extern int fpsgo_fbt2minitop_query_single(pid_t pid);

extern struct workqueue_struct *g_psNotifyWorkQueue;

#endif
