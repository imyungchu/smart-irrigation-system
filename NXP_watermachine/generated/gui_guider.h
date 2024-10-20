/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_tabview_1;
	lv_obj_t *screen_tabview_1_tab_1;
	lv_obj_t *screen_tabview_1_tab_2;
	lv_obj_t *screen_label1_4;
	lv_obj_t *screen_chart1_4;
	lv_obj_t *screen_label1_3;
	lv_obj_t *screen_chart1_3;
	lv_obj_t *screen_label1_2;
	lv_obj_t *screen_chart1_2;
	lv_obj_t *screen_label1_1;
	lv_obj_t *screen_chart1_1;
	lv_obj_t *screen_label2_4;
	lv_obj_t *screen_label2_3;
	lv_obj_t *screen_label2_2;
	lv_obj_t *screen_label2_1;
	lv_obj_t *screen_chart2_1;
	lv_chart_series_t *screen_chart2_1_0;
	lv_obj_t *screen_chart2_2;
	lv_chart_series_t *screen_chart2_2_0;
	lv_obj_t *screen_chart2_3;
	lv_chart_series_t *screen_chart2_3_0;
	lv_obj_t *screen_chart2_4;
	lv_chart_series_t *screen_chart2_4_0;
	lv_obj_t *screen_btn_1;
	lv_obj_t *screen_btn_1_label;
	lv_obj_t *screen_alarmlabel;
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *screen_1_tabview_1;
	lv_obj_t *screen_1_tabview_1_tab_1;
	lv_obj_t *screen_1_tabview_1_tab_2;
	lv_obj_t *screen_1_label_1;
	lv_obj_t *screen_1_chart_1;
	lv_obj_t *screen_1_ta_1;
	lv_obj_t *screen_1_meter_1;
	lv_meter_scale_t *screen_1_meter_1_scale_0;
	lv_meter_indicator_t *screen_1_meter_1_scale_0_ndline_0;
	lv_obj_t *screen_1_chart_8;
	lv_chart_series_t *screen_1_chart_8_0;
	lv_obj_t *screen_1_meter_2;
	lv_meter_scale_t *screen_1_meter_2_scale_0;
	lv_meter_indicator_t *screen_1_meter_2_scale_0_ndline_0;
	lv_obj_t *screen_1_ta_2;
	lv_obj_t *screen_1_label_2;
	lv_obj_t *screen_1_alarmlabel;
	lv_obj_t *screen_1_btn_1;
	lv_obj_t *screen_1_btn_1_label;
	lv_obj_t *screen_2;
	bool screen_2_del;
	lv_obj_t *screen_2_tabview_1;
	lv_obj_t *screen_2_tabview_1_tab_1;
	lv_obj_t *screen_2_tabview_1_tab_2;
	lv_obj_t *screen_2_chart_2;
	lv_obj_t *screen_2_ta_1;
	lv_obj_t *screen_2_label_7;
	lv_obj_t *screen_2_meter_3;
	lv_meter_scale_t *screen_2_meter_3_scale_0;
	lv_meter_indicator_t *screen_2_meter_3_scale_0_ndline_0;
	lv_obj_t *screen_2_label_6;
	lv_obj_t *screen_2_chart_7;
	lv_chart_series_t *screen_2_chart_7_0;
	lv_obj_t *screen_2_ta_2;
	lv_obj_t *screen_2_meter_2;
	lv_meter_scale_t *screen_2_meter_2_scale_0;
	lv_meter_indicator_t *screen_2_meter_2_scale_0_ndline_0;
	lv_obj_t *screen_2_btn_1;
	lv_obj_t *screen_2_btn_1_label;
	lv_obj_t *screen_2_alarmlabel;
	lv_obj_t *screen_3;
	bool screen_3_del;
	lv_obj_t *screen_3_tabview_1;
	lv_obj_t *screen_3_tabview_1_tab_1;
	lv_obj_t *screen_3_tabview_1_tab_2;
	lv_obj_t *screen_3_label_18;
	lv_obj_t *screen_3_chart_14;
	lv_obj_t *screen_3_ta_2;
	lv_obj_t *screen_3_meter_4;
	lv_meter_scale_t *screen_3_meter_4_scale_0;
	lv_meter_indicator_t *screen_3_meter_4_scale_0_ndline_0;
	lv_obj_t *screen_3_label_19;
	lv_obj_t *screen_3_chart_15;
	lv_chart_series_t *screen_3_chart_15_0;
	lv_obj_t *screen_3_meter_5;
	lv_meter_scale_t *screen_3_meter_5_scale_0;
	lv_meter_indicator_t *screen_3_meter_5_scale_0_ndline_0;
	lv_obj_t *screen_3_ta_3;
	lv_obj_t *screen_3_next;
	lv_obj_t *screen_3_next_label;
	lv_obj_t *screen_3_alarmlabel;
	lv_obj_t *screen_4;
	bool screen_4_del;
	lv_obj_t *screen_4_tabview_1;
	lv_obj_t *screen_4_tabview_1_tab_1;
	lv_obj_t *screen_4_tabview_1_tab_2;
	lv_obj_t *screen_4_label_13;
	lv_obj_t *screen_4_chart_12;
	lv_obj_t *screen_4_ta_1;
	lv_obj_t *screen_4_meter_3;
	lv_meter_scale_t *screen_4_meter_3_scale_0;
	lv_meter_indicator_t *screen_4_meter_3_scale_0_ndline_0;
	lv_obj_t *screen_4_label_17;
	lv_obj_t *screen_4_chart_13;
	lv_chart_series_t *screen_4_chart_13_0;
	lv_obj_t *screen_4_meter_2;
	lv_meter_scale_t *screen_4_meter_2_scale_0;
	lv_meter_indicator_t *screen_4_meter_2_scale_0_ndline_0;
	lv_obj_t *screen_4_ta_2;
	lv_obj_t *screen_4_home;
	lv_obj_t *screen_4_home_label;
	lv_obj_t *screen_4_alarmlabel;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_1(lv_ui *ui);
void setup_scr_screen_2(lv_ui *ui);
void setup_scr_screen_3(lv_ui *ui);
void setup_scr_screen_4(lv_ui *ui);

LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_16)


#ifdef __cplusplus
}
#endif
#endif
