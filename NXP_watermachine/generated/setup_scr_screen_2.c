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



void setup_scr_screen_2(lv_ui *ui)
{
    //Write codes screen_2
    ui->screen_2 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_2, 480, 272);
    lv_obj_set_scrollbar_mode(ui->screen_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_tabview_1
    ui->screen_2_tabview_1 = lv_tabview_create(ui->screen_2, LV_DIR_LEFT, 50);
    lv_obj_set_pos(ui->screen_2_tabview_1, 0, 1);
    lv_obj_set_size(ui->screen_2_tabview_1, 486, 274);
    lv_obj_set_scrollbar_mode(ui->screen_2_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_2_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_tabview_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_2_tabview_1_extra_btnm_main_default
    static lv_style_t style_screen_2_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_screen_2_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_screen_2_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_screen_2_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_2_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_2_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_screen_2_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_2_tabview_1), &style_screen_2_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_2_tabview_1_extra_btnm_items_default
    static lv_style_t style_screen_2_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_screen_2_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_screen_2_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_screen_2_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_2_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_2_tabview_1), &style_screen_2_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_2_tabview_1_extra_btnm_items_checked
    static lv_style_t style_screen_2_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_screen_2_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_screen_2_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_screen_2_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_2_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_screen_2_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_screen_2_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_screen_2_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_2_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_2_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_screen_2_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_screen_2_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_screen_2_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_2_tabview_1), &style_screen_2_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes LAB1
    ui->screen_2_tabview_1_tab_1 = lv_tabview_add_tab(ui->screen_2_tabview_1,"LAB1");
    lv_obj_t * screen_2_tabview_1_tab_1_label = lv_label_create(ui->screen_2_tabview_1_tab_1);
    lv_label_set_text(screen_2_tabview_1_tab_1_label, "");

    //Write codes screen_2_chart_2
    ui->screen_2_chart_2 = lv_chart_create(ui->screen_2_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_2_chart_2, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_2_chart_2, 3, 5);
    lv_chart_set_point_count(ui->screen_2_chart_2, 5);
    lv_chart_set_range(ui->screen_2_chart_2, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_2_chart_2, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_2_chart_2, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_2_chart_2, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_axis_tick(ui->screen_2_chart_2, LV_CHART_AXIS_SECONDARY_X, 1, 1, 5, 7, false, 40);
    lv_chart_set_zoom_x(ui->screen_2_chart_2, 256);
    lv_chart_set_zoom_y(ui->screen_2_chart_2, 256);
    lv_obj_set_pos(ui->screen_2_chart_2, 25, 42);
    lv_obj_set_size(ui->screen_2_chart_2, 202, 104);
    lv_obj_set_scrollbar_mode(ui->screen_2_chart_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_2_chart_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_chart_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_chart_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_chart_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_chart_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_2_chart_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_2_chart_2, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_2_chart_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_chart_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_2_chart_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_2_chart_2, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_2_chart_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_chart_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_chart_2, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_chart_2, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_chart_2, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_chart_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_2_chart_2, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_2_chart_2, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_2_chart_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_2_ta_1
    ui->screen_2_ta_1 = lv_textarea_create(ui->screen_2_tabview_1_tab_1);
    lv_textarea_set_text(ui->screen_2_ta_1, "Current cd : \nstate : ");
    lv_textarea_set_placeholder_text(ui->screen_2_ta_1, "");
    lv_textarea_set_password_bullet(ui->screen_2_ta_1, "*");
    lv_textarea_set_password_mode(ui->screen_2_ta_1, false);
    lv_textarea_set_one_line(ui->screen_2_ta_1, false);
    lv_textarea_set_accepted_chars(ui->screen_2_ta_1, "");
    lv_textarea_set_max_length(ui->screen_2_ta_1, 32);
    lv_obj_set_pos(ui->screen_2_ta_1, 7, 164);
    lv_obj_set_size(ui->screen_2_ta_1, 220, 82);

    //Write style for screen_2_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_ta_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_ta_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_2_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_2_ta_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_2_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_ta_1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_ta_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_2_label_7
    ui->screen_2_label_7 = lv_label_create(ui->screen_2_tabview_1_tab_1);
    lv_label_set_text(ui->screen_2_label_7, "Light");
    lv_label_set_long_mode(ui->screen_2_label_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_2_label_7, 105, 2);
    lv_obj_set_size(ui->screen_2_label_7, 165, 31);

    //Write style for screen_2_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_label_7, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_meter_3
    ui->screen_2_meter_3 = lv_meter_create(ui->screen_2_tabview_1_tab_1);
    // add scale ui->screen_2_meter_3_scale_0
    ui->screen_2_meter_3_scale_0 = lv_meter_add_scale(ui->screen_2_meter_3);
    lv_meter_set_scale_ticks(ui->screen_2_meter_3, ui->screen_2_meter_3_scale_0, 41, 2, 10, lv_color_hex(0x735656));
    lv_meter_set_scale_major_ticks(ui->screen_2_meter_3, ui->screen_2_meter_3_scale_0, 8, 5, 15, lv_color_hex(0x2f7f3c), 10);
    lv_meter_set_scale_range(ui->screen_2_meter_3, ui->screen_2_meter_3_scale_0, 0, 100, 300, 90);

    // add needle line for ui->screen_2_meter_3_scale_0.
    ui->screen_2_meter_3_scale_0_ndline_0 = lv_meter_add_needle_line(ui->screen_2_meter_3, ui->screen_2_meter_3_scale_0, 5, lv_color_hex(0x000000), -10);
    lv_meter_set_indicator_value(ui->screen_2_meter_3, ui->screen_2_meter_3_scale_0_ndline_0, 5);
    lv_obj_set_pos(ui->screen_2_meter_3, 243, 23);
    lv_obj_set_size(ui->screen_2_meter_3, 158, 158);

    //Write style for screen_2_meter_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_meter_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_meter_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_meter_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_meter_3, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_meter_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_meter_3, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_meter_3, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_meter_3, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_meter_3, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_meter_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_meter_3, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_meter_3, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_meter_3, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_meter_3, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for screen_2_meter_3, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_meter_3, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_meter_3, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_meter_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes LAB2
    ui->screen_2_tabview_1_tab_2 = lv_tabview_add_tab(ui->screen_2_tabview_1,"LAB2");
    lv_obj_t * screen_2_tabview_1_tab_2_label = lv_label_create(ui->screen_2_tabview_1_tab_2);
    lv_label_set_text(screen_2_tabview_1_tab_2_label, "");

    //Write codes screen_2_label_6
    ui->screen_2_label_6 = lv_label_create(ui->screen_2_tabview_1_tab_2);
    lv_label_set_text(ui->screen_2_label_6, "Light");
    lv_label_set_long_mode(ui->screen_2_label_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_2_label_6, 105, 2);
    lv_obj_set_size(ui->screen_2_label_6, 110, 23);

    //Write style for screen_2_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_label_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_chart_7
    ui->screen_2_chart_7 = lv_chart_create(ui->screen_2_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_2_chart_7, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_2_chart_7, 3, 5);
    lv_chart_set_point_count(ui->screen_2_chart_7, 5);
    lv_chart_set_range(ui->screen_2_chart_7, LV_CHART_AXIS_PRIMARY_Y, 100, 600);
    lv_chart_set_axis_tick(ui->screen_2_chart_7, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_2_chart_7, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_2_chart_7, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_2_chart_7, 256);
    lv_chart_set_zoom_y(ui->screen_2_chart_7, 256);
    ui->screen_2_chart_7_0 = lv_chart_add_series(ui->screen_2_chart_7, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_2_chart_7, ui->screen_2_chart_7_0, 100);
    lv_chart_set_next_value(ui->screen_2_chart_7, ui->screen_2_chart_7_0, 300);
    lv_chart_set_next_value(ui->screen_2_chart_7, ui->screen_2_chart_7_0, 400);
    lv_chart_set_next_value(ui->screen_2_chart_7, ui->screen_2_chart_7_0, 500);
    lv_chart_set_next_value(ui->screen_2_chart_7, ui->screen_2_chart_7_0, 100);
#endif
    lv_obj_set_pos(ui->screen_2_chart_7, 25, 42);
    lv_obj_set_size(ui->screen_2_chart_7, 202, 104);
    lv_obj_set_scrollbar_mode(ui->screen_2_chart_7, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_2_chart_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_chart_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_chart_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_chart_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_chart_7, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_2_chart_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_2_chart_7, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_2_chart_7, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_chart_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_2_chart_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_2_chart_7, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_2_chart_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_chart_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_chart_7, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_chart_7, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_chart_7, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_chart_7, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_2_chart_7, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_2_chart_7, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_2_chart_7, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_2_ta_2
    ui->screen_2_ta_2 = lv_textarea_create(ui->screen_2_tabview_1_tab_2);
    lv_textarea_set_text(ui->screen_2_ta_2, "Current light :  100 lux\nstate : Normally");
    lv_textarea_set_placeholder_text(ui->screen_2_ta_2, "");
    lv_textarea_set_password_bullet(ui->screen_2_ta_2, "*");
    lv_textarea_set_password_mode(ui->screen_2_ta_2, false);
    lv_textarea_set_one_line(ui->screen_2_ta_2, false);
    lv_textarea_set_accepted_chars(ui->screen_2_ta_2, "");
    lv_textarea_set_max_length(ui->screen_2_ta_2, 32);
    lv_obj_set_pos(ui->screen_2_ta_2, 15, 167);
    lv_obj_set_size(ui->screen_2_ta_2, 220, 82);

    //Write style for screen_2_ta_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_ta_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_ta_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_ta_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_ta_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_ta_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_2_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_2_ta_2, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_2_ta_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_ta_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_ta_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_ta_2, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_ta_2, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_ta_2, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_ta_2, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_2_meter_2
    ui->screen_2_meter_2 = lv_meter_create(ui->screen_2_tabview_1_tab_2);
    // add scale ui->screen_2_meter_2_scale_0
    ui->screen_2_meter_2_scale_0 = lv_meter_add_scale(ui->screen_2_meter_2);
    lv_meter_set_scale_ticks(ui->screen_2_meter_2, ui->screen_2_meter_2_scale_0, 41, 2, 10, lv_color_hex(0x735656));
    lv_meter_set_scale_major_ticks(ui->screen_2_meter_2, ui->screen_2_meter_2_scale_0, 8, 5, 15, lv_color_hex(0x2f7f3c), 10);
    lv_meter_set_scale_range(ui->screen_2_meter_2, ui->screen_2_meter_2_scale_0, 100, 500, 300, 90);

    // add needle line for ui->screen_2_meter_2_scale_0.
    ui->screen_2_meter_2_scale_0_ndline_0 = lv_meter_add_needle_line(ui->screen_2_meter_2, ui->screen_2_meter_2_scale_0, 5, lv_color_hex(0x000000), -10);
    lv_meter_set_indicator_value(ui->screen_2_meter_2, ui->screen_2_meter_2_scale_0_ndline_0, 5);
    lv_obj_set_pos(ui->screen_2_meter_2, 245, 32);
    lv_obj_set_size(ui->screen_2_meter_2, 158, 158);

    //Write style for screen_2_meter_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_meter_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_meter_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_meter_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_meter_2, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_meter_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_meter_2, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_meter_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_meter_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_meter_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_meter_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_2_meter_2, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_2_meter_2, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_meter_2, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_meter_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for screen_2_meter_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_meter_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_meter_2, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_meter_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_2_btn_1
    ui->screen_2_btn_1 = lv_btn_create(ui->screen_2);
    ui->screen_2_btn_1_label = lv_label_create(ui->screen_2_btn_1);
    lv_label_set_text(ui->screen_2_btn_1_label, "->");
    lv_label_set_long_mode(ui->screen_2_btn_1_label, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_align(ui->screen_2_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_2_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_2_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_2_btn_1, 421, 205);
    lv_obj_set_size(ui->screen_2_btn_1, 56, 29);

    //Write style for screen_2_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_2_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_2_alarmlabel
    ui->screen_2_alarmlabel = lv_label_create(ui->screen_2);
    lv_label_set_text(ui->screen_2_alarmlabel, "No Alarm");
    lv_label_set_long_mode(ui->screen_2_alarmlabel, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_2_alarmlabel, 47, 6);
    lv_obj_set_size(ui->screen_2_alarmlabel, 106, 32);

    //Write style for screen_2_alarmlabel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_2_alarmlabel, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_2_alarmlabel, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_2_alarmlabel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_2_alarmlabel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_2_alarmlabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_2_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_2.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_2);

    //Init events for screen.
    events_init_screen_2(ui);
}
