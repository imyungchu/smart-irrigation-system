/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_3(lv_ui *ui)
{
    //Write codes screen_3
    ui->screen_3 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_3, 480, 272);
    lv_obj_set_scrollbar_mode(ui->screen_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_tabview_1
    ui->screen_3_tabview_1 = lv_tabview_create(ui->screen_3, LV_DIR_LEFT, 50);
    lv_obj_set_pos(ui->screen_3_tabview_1, 0, 1);
    lv_obj_set_size(ui->screen_3_tabview_1, 486, 274);
    lv_obj_set_scrollbar_mode(ui->screen_3_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_3_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_tabview_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_3_tabview_1_extra_btnm_main_default
    static lv_style_t style_screen_3_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_screen_3_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_screen_3_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_screen_3_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_3_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_3_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_screen_3_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_3_tabview_1), &style_screen_3_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_3_tabview_1_extra_btnm_items_default
    static lv_style_t style_screen_3_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_screen_3_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_screen_3_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_screen_3_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_3_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_3_tabview_1), &style_screen_3_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_3_tabview_1_extra_btnm_items_checked
    static lv_style_t style_screen_3_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_screen_3_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_screen_3_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_screen_3_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_3_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_screen_3_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_screen_3_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_screen_3_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_3_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_3_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_screen_3_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_screen_3_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_screen_3_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_3_tabview_1), &style_screen_3_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes LAB1
    ui->screen_3_tabview_1_tab_1 = lv_tabview_add_tab(ui->screen_3_tabview_1,"LAB1");
    lv_obj_t * screen_3_tabview_1_tab_1_label = lv_label_create(ui->screen_3_tabview_1_tab_1);
    lv_label_set_text(screen_3_tabview_1_tab_1_label, "");

    //Write codes screen_3_label_18
    ui->screen_3_label_18 = lv_label_create(ui->screen_3_tabview_1_tab_1);
    lv_label_set_text(ui->screen_3_label_18, "WaterFlow");
    lv_label_set_long_mode(ui->screen_3_label_18, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_3_label_18, 105, 2);
    lv_obj_set_size(ui->screen_3_label_18, 165, 31);

    //Write style for screen_3_label_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_label_18, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_label_18, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_label_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_label_18, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_label_18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_chart_14
    ui->screen_3_chart_14 = lv_chart_create(ui->screen_3_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_3_chart_14, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_3_chart_14, 3, 5);
    lv_chart_set_point_count(ui->screen_3_chart_14, 5);
    lv_chart_set_range(ui->screen_3_chart_14, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_3_chart_14, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_3_chart_14, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_3_chart_14, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_3_chart_14, 256);
    lv_chart_set_zoom_y(ui->screen_3_chart_14, 256);
    lv_obj_set_pos(ui->screen_3_chart_14, 25, 42);
    lv_obj_set_size(ui->screen_3_chart_14, 202, 104);
    lv_obj_set_scrollbar_mode(ui->screen_3_chart_14, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_3_chart_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_chart_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_chart_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_chart_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_chart_14, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_3_chart_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_3_chart_14, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_3_chart_14, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_chart_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_3_chart_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_3_chart_14, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_3_chart_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_chart_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_3_chart_14, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_3_chart_14, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_chart_14, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_chart_14, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_3_chart_14, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_3_chart_14, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_3_chart_14, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_3_ta_2
    ui->screen_3_ta_2 = lv_textarea_create(ui->screen_3_tabview_1_tab_1);
    lv_textarea_set_text(ui->screen_3_ta_2, "Current use :  \nusage  :\nstate :  ");
    lv_textarea_set_placeholder_text(ui->screen_3_ta_2, "");
    lv_textarea_set_password_bullet(ui->screen_3_ta_2, "*");
    lv_textarea_set_password_mode(ui->screen_3_ta_2, false);
    lv_textarea_set_one_line(ui->screen_3_ta_2, false);
    lv_textarea_set_accepted_chars(ui->screen_3_ta_2, "");
    lv_textarea_set_max_length(ui->screen_3_ta_2, 32);
    lv_obj_set_pos(ui->screen_3_ta_2, 15, 167);
    lv_obj_set_size(ui->screen_3_ta_2, 220, 82);

    //Write style for screen_3_ta_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_3_ta_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_ta_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_ta_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_ta_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_ta_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_3_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_3_ta_2, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_3_ta_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_ta_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_3_ta_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_ta_2, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_ta_2, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_ta_2, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_ta_2, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_3_meter_4
    ui->screen_3_meter_4 = lv_meter_create(ui->screen_3_tabview_1_tab_1);
    // add scale ui->screen_3_meter_4_scale_0
    ui->screen_3_meter_4_scale_0 = lv_meter_add_scale(ui->screen_3_meter_4);
    lv_meter_set_scale_ticks(ui->screen_3_meter_4, ui->screen_3_meter_4_scale_0, 41, 2, 10, lv_color_hex(0x735656));
    lv_meter_set_scale_major_ticks(ui->screen_3_meter_4, ui->screen_3_meter_4_scale_0, 8, 5, 15, lv_color_hex(0x2f7f3c), 10);
    lv_meter_set_scale_range(ui->screen_3_meter_4, ui->screen_3_meter_4_scale_0, 0, 100, 300, 90);

    // add needle line for ui->screen_3_meter_4_scale_0.
    ui->screen_3_meter_4_scale_0_ndline_0 = lv_meter_add_needle_line(ui->screen_3_meter_4, ui->screen_3_meter_4_scale_0, 5, lv_color_hex(0x000000), -10);
    lv_meter_set_indicator_value(ui->screen_3_meter_4, ui->screen_3_meter_4_scale_0_ndline_0, 5);
    lv_obj_set_pos(ui->screen_3_meter_4, 245, 32);
    lv_obj_set_size(ui->screen_3_meter_4, 158, 158);

    //Write style for screen_3_meter_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_meter_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_meter_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_meter_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_meter_4, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_meter_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_meter_4, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_meter_4, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_meter_4, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_meter_4, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_meter_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_3_meter_4, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_3_meter_4, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_meter_4, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_meter_4, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for screen_3_meter_4, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_meter_4, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_meter_4, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_meter_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes LAB2
    ui->screen_3_tabview_1_tab_2 = lv_tabview_add_tab(ui->screen_3_tabview_1,"LAB2");
    lv_obj_t * screen_3_tabview_1_tab_2_label = lv_label_create(ui->screen_3_tabview_1_tab_2);
    lv_label_set_text(screen_3_tabview_1_tab_2_label, "");

    //Write codes screen_3_label_19
    ui->screen_3_label_19 = lv_label_create(ui->screen_3_tabview_1_tab_2);
    lv_label_set_text(ui->screen_3_label_19, "WaterFlow");
    lv_label_set_long_mode(ui->screen_3_label_19, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_3_label_19, 105, 2);
    lv_obj_set_size(ui->screen_3_label_19, 165, 31);

    //Write style for screen_3_label_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_label_19, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_label_19, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_label_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_label_19, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_label_19, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_chart_15
    ui->screen_3_chart_15 = lv_chart_create(ui->screen_3_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_3_chart_15, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_3_chart_15, 3, 5);
    lv_chart_set_point_count(ui->screen_3_chart_15, 5);
    lv_chart_set_range(ui->screen_3_chart_15, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_3_chart_15, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_3_chart_15, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_3_chart_15, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_3_chart_15, 256);
    lv_chart_set_zoom_y(ui->screen_3_chart_15, 256);
    ui->screen_3_chart_15_0 = lv_chart_add_series(ui->screen_3_chart_15, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_3_chart_15, ui->screen_3_chart_15_0, 1);
    lv_chart_set_next_value(ui->screen_3_chart_15, ui->screen_3_chart_15_0, 20);
    lv_chart_set_next_value(ui->screen_3_chart_15, ui->screen_3_chart_15_0, 30);
    lv_chart_set_next_value(ui->screen_3_chart_15, ui->screen_3_chart_15_0, 40);
    lv_chart_set_next_value(ui->screen_3_chart_15, ui->screen_3_chart_15_0, 5);
#endif
    lv_obj_set_pos(ui->screen_3_chart_15, 25, 42);
    lv_obj_set_size(ui->screen_3_chart_15, 202, 104);
    lv_obj_set_scrollbar_mode(ui->screen_3_chart_15, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_3_chart_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_chart_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_chart_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_chart_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_chart_15, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_3_chart_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_3_chart_15, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_3_chart_15, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_chart_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_3_chart_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_3_chart_15, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_3_chart_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_chart_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_3_chart_15, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_3_chart_15, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_chart_15, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_chart_15, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_3_chart_15, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_3_chart_15, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_3_chart_15, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_3_meter_5
    ui->screen_3_meter_5 = lv_meter_create(ui->screen_3_tabview_1_tab_2);
    // add scale ui->screen_3_meter_5_scale_0
    ui->screen_3_meter_5_scale_0 = lv_meter_add_scale(ui->screen_3_meter_5);
    lv_meter_set_scale_ticks(ui->screen_3_meter_5, ui->screen_3_meter_5_scale_0, 41, 2, 10, lv_color_hex(0x735656));
    lv_meter_set_scale_major_ticks(ui->screen_3_meter_5, ui->screen_3_meter_5_scale_0, 8, 5, 15, lv_color_hex(0x2f7f3c), 10);
    lv_meter_set_scale_range(ui->screen_3_meter_5, ui->screen_3_meter_5_scale_0, 0, 100, 300, 90);

    // add needle line for ui->screen_3_meter_5_scale_0.
    ui->screen_3_meter_5_scale_0_ndline_0 = lv_meter_add_needle_line(ui->screen_3_meter_5, ui->screen_3_meter_5_scale_0, 5, lv_color_hex(0x000000), -10);
    lv_meter_set_indicator_value(ui->screen_3_meter_5, ui->screen_3_meter_5_scale_0_ndline_0, 5);
    lv_obj_set_pos(ui->screen_3_meter_5, 245, 32);
    lv_obj_set_size(ui->screen_3_meter_5, 158, 158);

    //Write style for screen_3_meter_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_meter_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_meter_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_meter_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_meter_5, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_meter_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_meter_5, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_meter_5, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_meter_5, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_meter_5, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_meter_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_3_meter_5, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_3_meter_5, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_meter_5, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_meter_5, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for screen_3_meter_5, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_meter_5, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_meter_5, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_meter_5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_3_ta_3
    ui->screen_3_ta_3 = lv_textarea_create(ui->screen_3_tabview_1_tab_2);
    lv_textarea_set_text(ui->screen_3_ta_3, "Current use :  Yes\nusage  : 5 (m^2/s)\nstate :  Normally");
    lv_textarea_set_placeholder_text(ui->screen_3_ta_3, "");
    lv_textarea_set_password_bullet(ui->screen_3_ta_3, "*");
    lv_textarea_set_password_mode(ui->screen_3_ta_3, false);
    lv_textarea_set_one_line(ui->screen_3_ta_3, false);
    lv_textarea_set_accepted_chars(ui->screen_3_ta_3, "");
    lv_textarea_set_max_length(ui->screen_3_ta_3, 1000);
    lv_obj_set_pos(ui->screen_3_ta_3, 15, 167);
    lv_obj_set_size(ui->screen_3_ta_3, 220, 82);

    //Write style for screen_3_ta_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_3_ta_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_ta_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_ta_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_ta_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_ta_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_ta_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_ta_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_3_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_3_ta_3, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_3_ta_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_ta_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_3_ta_3, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_ta_3, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_ta_3, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_ta_3, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_ta_3, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_3_next
    ui->screen_3_next = lv_btn_create(ui->screen_3);
    ui->screen_3_next_label = lv_label_create(ui->screen_3_next);
    lv_label_set_text(ui->screen_3_next_label, "->");
    lv_label_set_long_mode(ui->screen_3_next_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_3_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_3_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_3_next_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_3_next, 422, 206);
    lv_obj_set_size(ui->screen_3_next, 56, 29);

    //Write style for screen_3_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_3_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_3_next, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_3_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_3_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_next, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_next, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_3_alarmlabel
    ui->screen_3_alarmlabel = lv_label_create(ui->screen_3);
    lv_label_set_text(ui->screen_3_alarmlabel, "No Alarm");
    lv_label_set_long_mode(ui->screen_3_alarmlabel, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_3_alarmlabel, 47, 6);
    lv_obj_set_size(ui->screen_3_alarmlabel, 106, 32);

    //Write style for screen_3_alarmlabel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_3_alarmlabel, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_3_alarmlabel, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_3_alarmlabel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_3_alarmlabel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_3_alarmlabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_3_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_3.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_3);

    //Init events for screen.
    events_init_screen_3(ui);
}
