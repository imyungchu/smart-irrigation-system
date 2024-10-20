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



void setup_scr_screen_1(lv_ui *ui)
{
    //Write codes screen_1
    ui->screen_1 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_1, 480, 272);
    lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_ON);
    lv_obj_add_flag(ui->screen_1, LV_OBJ_FLAG_SCROLL_CHAIN_VER);

    //Write style for screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_tabview_1
    ui->screen_1_tabview_1 = lv_tabview_create(ui->screen_1, LV_DIR_LEFT, 50);
    lv_obj_set_pos(ui->screen_1_tabview_1, 0, 0);
    lv_obj_set_size(ui->screen_1_tabview_1, 486, 274);
    lv_obj_set_scrollbar_mode(ui->screen_1_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_tabview_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_tabview_1_extra_btnm_main_default
    static lv_style_t style_screen_1_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_screen_1_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_screen_1_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_screen_1_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_1_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_1_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_screen_1_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_1_tabview_1), &style_screen_1_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_tabview_1_extra_btnm_items_default
    static lv_style_t style_screen_1_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_screen_1_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_screen_1_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_screen_1_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_1_tabview_1), &style_screen_1_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_1_tabview_1_extra_btnm_items_checked
    static lv_style_t style_screen_1_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_screen_1_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_screen_1_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_screen_1_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_screen_1_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_screen_1_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_screen_1_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_1_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_1_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_screen_1_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_screen_1_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_screen_1_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_1_tabview_1), &style_screen_1_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes LAB1
    ui->screen_1_tabview_1_tab_1 = lv_tabview_add_tab(ui->screen_1_tabview_1,"LAB1");
    lv_obj_t * screen_1_tabview_1_tab_1_label = lv_label_create(ui->screen_1_tabview_1_tab_1);
    lv_label_set_text(screen_1_tabview_1_tab_1_label, "");

    //Write codes screen_1_label_1
    ui->screen_1_label_1 = lv_label_create(ui->screen_1_tabview_1_tab_1);
    lv_label_set_text(ui->screen_1_label_1, "Environment \nTemperature");
    lv_label_set_long_mode(ui->screen_1_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_1, 105, 2);
    lv_obj_set_size(ui->screen_1_label_1, 165, 31);

    //Write style for screen_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_chart_1
    ui->screen_1_chart_1 = lv_chart_create(ui->screen_1_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_1_chart_1, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_1_chart_1, 3, 5);
    lv_chart_set_point_count(ui->screen_1_chart_1, 5);
    lv_chart_set_range(ui->screen_1_chart_1, LV_CHART_AXIS_PRIMARY_Y, -20, 60);
    lv_chart_set_axis_tick(ui->screen_1_chart_1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_1_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_1_chart_1, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_1_chart_1, 256);
    lv_chart_set_zoom_y(ui->screen_1_chart_1, 256);
    lv_obj_set_pos(ui->screen_1_chart_1, 25, 42);
    lv_obj_set_size(ui->screen_1_chart_1, 202, 104);
    lv_obj_set_scrollbar_mode(ui->screen_1_chart_1, LV_SCROLLBAR_MODE_AUTO);

    //Write style for screen_1_chart_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_chart_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_chart_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_1_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_1_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_1_chart_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_1_chart_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_1_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_1_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_chart_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_chart_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_chart_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_1_chart_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_1_chart_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_1_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_1_ta_1
    ui->screen_1_ta_1 = lv_textarea_create(ui->screen_1_tabview_1_tab_1);
    lv_textarea_set_text(ui->screen_1_ta_1, "Current temp : \nstate : ");
    lv_textarea_set_placeholder_text(ui->screen_1_ta_1, "");
    lv_textarea_set_password_bullet(ui->screen_1_ta_1, "*");
    lv_textarea_set_password_mode(ui->screen_1_ta_1, false);
    lv_textarea_set_one_line(ui->screen_1_ta_1, false);
    lv_textarea_set_accepted_chars(ui->screen_1_ta_1, "");
    lv_textarea_set_max_length(ui->screen_1_ta_1, 32);
    lv_obj_set_pos(ui->screen_1_ta_1, 7, 164);
    lv_obj_set_size(ui->screen_1_ta_1, 220, 82);

    //Write style for screen_1_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_ta_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_ta_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_1_ta_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_1_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_ta_1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_ta_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_1_meter_1
    ui->screen_1_meter_1 = lv_meter_create(ui->screen_1_tabview_1_tab_1);
    // add scale ui->screen_1_meter_1_scale_0
    ui->screen_1_meter_1_scale_0 = lv_meter_add_scale(ui->screen_1_meter_1);
    lv_meter_set_scale_ticks(ui->screen_1_meter_1, ui->screen_1_meter_1_scale_0, 41, 2, 10, lv_color_hex(0x735656));
    lv_meter_set_scale_major_ticks(ui->screen_1_meter_1, ui->screen_1_meter_1_scale_0, 8, 5, 15, lv_color_hex(0x2f7f3c), 10);
    lv_meter_set_scale_range(ui->screen_1_meter_1, ui->screen_1_meter_1_scale_0, 0, 100, 300, 90);

    // add needle line for ui->screen_1_meter_1_scale_0.
    ui->screen_1_meter_1_scale_0_ndline_0 = lv_meter_add_needle_line(ui->screen_1_meter_1, ui->screen_1_meter_1_scale_0, 5, lv_color_hex(0x000000), -10);
    lv_meter_set_indicator_value(ui->screen_1_meter_1, ui->screen_1_meter_1_scale_0_ndline_0, 5);
    lv_obj_set_pos(ui->screen_1_meter_1, 243, 23);
    lv_obj_set_size(ui->screen_1_meter_1, 158, 158);

    //Write style for screen_1_meter_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_meter_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_meter_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_meter_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_meter_1, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_meter_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_meter_1, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_meter_1, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_meter_1, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_meter_1, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_meter_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_meter_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_meter_1, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_meter_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_meter_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for screen_1_meter_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_meter_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_meter_1, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_meter_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes LAB2
    ui->screen_1_tabview_1_tab_2 = lv_tabview_add_tab(ui->screen_1_tabview_1,"LAB2");
    lv_obj_t * screen_1_tabview_1_tab_2_label = lv_label_create(ui->screen_1_tabview_1_tab_2);
    lv_label_set_text(screen_1_tabview_1_tab_2_label, "");

    //Write codes screen_1_chart_8
    ui->screen_1_chart_8 = lv_chart_create(ui->screen_1_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_1_chart_8, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_1_chart_8, 3, 5);
    lv_chart_set_point_count(ui->screen_1_chart_8, 5);
    lv_chart_set_range(ui->screen_1_chart_8, LV_CHART_AXIS_PRIMARY_Y, -20, 60);
    lv_chart_set_axis_tick(ui->screen_1_chart_8, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_1_chart_8, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_1_chart_8, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_1_chart_8, 256);
    lv_chart_set_zoom_y(ui->screen_1_chart_8, 256);
    ui->screen_1_chart_8_0 = lv_chart_add_series(ui->screen_1_chart_8, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_1_chart_8, ui->screen_1_chart_8_0, 1);
    lv_chart_set_next_value(ui->screen_1_chart_8, ui->screen_1_chart_8_0, 20);
    lv_chart_set_next_value(ui->screen_1_chart_8, ui->screen_1_chart_8_0, 30);
    lv_chart_set_next_value(ui->screen_1_chart_8, ui->screen_1_chart_8_0, 40);
    lv_chart_set_next_value(ui->screen_1_chart_8, ui->screen_1_chart_8_0, 5);
#endif
    lv_obj_set_pos(ui->screen_1_chart_8, 25, 42);
    lv_obj_set_size(ui->screen_1_chart_8, 202, 104);
    lv_obj_set_scrollbar_mode(ui->screen_1_chart_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1_chart_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_chart_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_chart_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_chart_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_chart_8, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_1_chart_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_1_chart_8, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_1_chart_8, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_chart_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_1_chart_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_1_chart_8, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_1_chart_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_chart_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_chart_8, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_chart_8, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_chart_8, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_chart_8, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_1_chart_8, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_1_chart_8, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_1_chart_8, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_1_meter_2
    ui->screen_1_meter_2 = lv_meter_create(ui->screen_1_tabview_1_tab_2);
    // add scale ui->screen_1_meter_2_scale_0
    ui->screen_1_meter_2_scale_0 = lv_meter_add_scale(ui->screen_1_meter_2);
    lv_meter_set_scale_ticks(ui->screen_1_meter_2, ui->screen_1_meter_2_scale_0, 41, 2, 10, lv_color_hex(0x735656));
    lv_meter_set_scale_major_ticks(ui->screen_1_meter_2, ui->screen_1_meter_2_scale_0, 8, 5, 15, lv_color_hex(0x2f7f3c), 10);
    lv_meter_set_scale_range(ui->screen_1_meter_2, ui->screen_1_meter_2_scale_0, 0, 100, 300, 90);

    // add needle line for ui->screen_1_meter_2_scale_0.
    ui->screen_1_meter_2_scale_0_ndline_0 = lv_meter_add_needle_line(ui->screen_1_meter_2, ui->screen_1_meter_2_scale_0, 5, lv_color_hex(0x000000), -10);
    lv_meter_set_indicator_value(ui->screen_1_meter_2, ui->screen_1_meter_2_scale_0_ndline_0, 5);
    lv_obj_set_pos(ui->screen_1_meter_2, 243, 23);
    lv_obj_set_size(ui->screen_1_meter_2, 158, 158);

    //Write style for screen_1_meter_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_meter_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_meter_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_meter_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_meter_2, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_meter_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_meter_2, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_meter_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_meter_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_meter_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_meter_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_meter_2, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_meter_2, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_meter_2, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_meter_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for screen_1_meter_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_meter_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_meter_2, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_meter_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_1_ta_2
    ui->screen_1_ta_2 = lv_textarea_create(ui->screen_1_tabview_1_tab_2);
    lv_textarea_set_text(ui->screen_1_ta_2, "Current temp :  5 °C\nstate :  Normally");
    lv_textarea_set_placeholder_text(ui->screen_1_ta_2, "");
    lv_textarea_set_password_bullet(ui->screen_1_ta_2, "*");
    lv_textarea_set_password_mode(ui->screen_1_ta_2, false);
    lv_textarea_set_one_line(ui->screen_1_ta_2, false);
    lv_textarea_set_accepted_chars(ui->screen_1_ta_2, "");
    lv_textarea_set_max_length(ui->screen_1_ta_2, 32);
    lv_obj_set_pos(ui->screen_1_ta_2, 7, 164);
    lv_obj_set_size(ui->screen_1_ta_2, 220, 82);

    //Write style for screen_1_ta_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_1_ta_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_ta_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_ta_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_ta_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_1_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_1_ta_2, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_1_ta_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_ta_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_ta_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_ta_2, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_ta_2, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_2, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_ta_2, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_1_label_2
    ui->screen_1_label_2 = lv_label_create(ui->screen_1_tabview_1_tab_2);
    lv_label_set_text(ui->screen_1_label_2, "Environment \nTemperature");
    lv_label_set_long_mode(ui->screen_1_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_label_2, 105, 2);
    lv_obj_set_size(ui->screen_1_label_2, 165, 31);

    //Write style for screen_1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_label_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_alarmlabel
    ui->screen_1_alarmlabel = lv_label_create(ui->screen_1);
    lv_label_set_text(ui->screen_1_alarmlabel, "No Alarm");
    lv_label_set_long_mode(ui->screen_1_alarmlabel, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_1_alarmlabel, 47, 6);
    lv_obj_set_size(ui->screen_1_alarmlabel, 106, 32);

    //Write style for screen_1_alarmlabel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_alarmlabel, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_alarmlabel, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_alarmlabel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_alarmlabel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_alarmlabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_btn_1
    ui->screen_1_btn_1 = lv_btn_create(ui->screen_1);
    ui->screen_1_btn_1_label = lv_label_create(ui->screen_1_btn_1);
    lv_label_set_text(ui->screen_1_btn_1_label, "->");
    lv_label_set_long_mode(ui->screen_1_btn_1_label, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_align(ui->screen_1_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_1_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_1_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_1_btn_1, 422, 206);
    lv_obj_set_size(ui->screen_1_btn_1, 56, 29);

    //Write style for screen_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_1_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_1.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_1);

    //Init events for screen.
    events_init_screen_1(ui);
}
