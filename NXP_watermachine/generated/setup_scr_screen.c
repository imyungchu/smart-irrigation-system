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



void setup_scr_screen(lv_ui *ui)
{
    //Write codes screen
    ui->screen = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen, 480, 272);
    lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_AUTO);

    //Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_tabview_1
    ui->screen_tabview_1 = lv_tabview_create(ui->screen, LV_DIR_LEFT, 50);
    lv_obj_set_pos(ui->screen_tabview_1, 0, 1);
    lv_obj_set_size(ui->screen_tabview_1, 486, 274);
    lv_obj_set_scrollbar_mode(ui->screen_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_tabview_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_tabview_1_extra_btnm_main_default
    static lv_style_t style_screen_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_screen_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_screen_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_screen_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_screen_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_tabview_1), &style_screen_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_tabview_1_extra_btnm_items_default
    static lv_style_t style_screen_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_screen_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_screen_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_screen_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_tabview_1), &style_screen_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_tabview_1_extra_btnm_items_checked
    static lv_style_t style_screen_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_screen_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_screen_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_screen_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_screen_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_screen_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_screen_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_tabview_1), &style_screen_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes LAB1
    ui->screen_tabview_1_tab_1 = lv_tabview_add_tab(ui->screen_tabview_1,"LAB1");
    lv_obj_t * screen_tabview_1_tab_1_label = lv_label_create(ui->screen_tabview_1_tab_1);
    lv_label_set_text(screen_tabview_1_tab_1_label, "");

    //Write codes screen_label1_4
    ui->screen_label1_4 = lv_label_create(ui->screen_tabview_1_tab_1);
    lv_label_set_text(ui->screen_label1_4, "Moist");
    lv_label_set_long_mode(ui->screen_label1_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label1_4, 255, 225);
    lv_obj_set_size(ui->screen_label1_4, 110, 31);

    //Write style for screen_label1_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label1_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label1_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label1_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label1_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label1_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chart1_4
    ui->screen_chart1_4 = lv_chart_create(ui->screen_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_chart1_4, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart1_4, 3, 5);
    lv_chart_set_point_count(ui->screen_chart1_4, 5);
    lv_chart_set_range(ui->screen_chart1_4, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart1_4, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart1_4, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart1_4, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart1_4, 256);
    lv_chart_set_zoom_y(ui->screen_chart1_4, 256);
    lv_obj_set_pos(ui->screen_chart1_4, 249, 129);
    lv_obj_set_size(ui->screen_chart1_4, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart1_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart1_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart1_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart1_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart1_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart1_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart1_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart1_4, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart1_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_4, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart1_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart1_4, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart1_4, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart1_4, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart1_4, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_4, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_4, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_4, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_label1_3
    ui->screen_label1_3 = lv_label_create(ui->screen_tabview_1_tab_1);
    lv_label_set_text(ui->screen_label1_3, "WaterFlow");
    lv_label_set_long_mode(ui->screen_label1_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label1_3, 66, 225);
    lv_obj_set_size(ui->screen_label1_3, 110, 23);

    //Write style for screen_label1_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label1_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label1_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label1_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label1_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label1_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chart1_3
    ui->screen_chart1_3 = lv_chart_create(ui->screen_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_chart1_3, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart1_3, 3, 5);
    lv_chart_set_point_count(ui->screen_chart1_3, 5);
    lv_chart_set_range(ui->screen_chart1_3, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart1_3, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart1_3, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart1_3, LV_CHART_AXIS_PRIMARY_X, 1, 1, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart1_3, 256);
    lv_chart_set_zoom_y(ui->screen_chart1_3, 256);
    lv_obj_set_pos(ui->screen_chart1_3, 59, 129);
    lv_obj_set_size(ui->screen_chart1_3, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart1_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart1_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart1_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart1_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart1_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart1_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart1_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart1_3, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart1_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_3, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart1_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart1_3, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart1_3, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart1_3, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart1_3, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_3, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_3, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_3, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_label1_2
    ui->screen_label1_2 = lv_label_create(ui->screen_tabview_1_tab_1);
    lv_label_set_text(ui->screen_label1_2, "Light");
    lv_label_set_long_mode(ui->screen_label1_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label1_2, 255, 110);
    lv_obj_set_size(ui->screen_label1_2, 110, 31);

    //Write style for screen_label1_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label1_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label1_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label1_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label1_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label1_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chart1_2
    ui->screen_chart1_2 = lv_chart_create(ui->screen_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_chart1_2, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart1_2, 3, 5);
    lv_chart_set_point_count(ui->screen_chart1_2, 5);
    lv_chart_set_range(ui->screen_chart1_2, LV_CHART_AXIS_PRIMARY_Y, 100, 600);
    lv_chart_set_axis_tick(ui->screen_chart1_2, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart1_2, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart1_2, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_axis_tick(ui->screen_chart1_2, LV_CHART_AXIS_SECONDARY_X, 1, 1, 5, 7, false, 40);
    lv_chart_set_zoom_x(ui->screen_chart1_2, 256);
    lv_chart_set_zoom_y(ui->screen_chart1_2, 256);
    lv_obj_set_pos(ui->screen_chart1_2, 248, 12);
    lv_obj_set_size(ui->screen_chart1_2, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart1_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart1_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart1_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart1_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart1_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart1_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart1_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart1_2, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart1_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_2, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart1_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart1_2, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart1_2, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart1_2, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart1_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_2, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_2, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_label1_1
    ui->screen_label1_1 = lv_label_create(ui->screen_tabview_1_tab_1);
    lv_label_set_text(ui->screen_label1_1, "Temp");
    lv_label_set_long_mode(ui->screen_label1_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label1_1, 66, 110);
    lv_obj_set_size(ui->screen_label1_1, 110, 23);

    //Write style for screen_label1_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label1_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label1_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label1_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label1_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label1_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chart1_1
    ui->screen_chart1_1 = lv_chart_create(ui->screen_tabview_1_tab_1);
    lv_chart_set_type(ui->screen_chart1_1, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart1_1, 3, 5);
    lv_chart_set_point_count(ui->screen_chart1_1, 5);
    lv_chart_set_range(ui->screen_chart1_1, LV_CHART_AXIS_PRIMARY_Y, -20, 60);
    lv_chart_set_axis_tick(ui->screen_chart1_1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart1_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart1_1, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart1_1, 256);
    lv_chart_set_zoom_y(ui->screen_chart1_1, 256);
    lv_obj_set_pos(ui->screen_chart1_1, 59, 13);
    lv_obj_set_size(ui->screen_chart1_1, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart1_1, LV_SCROLLBAR_MODE_AUTO);

    //Write style for screen_chart1_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart1_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart1_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart1_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart1_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart1_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart1_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart1_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart1_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart1_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart1_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart1_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart1_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart1_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart1_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes LAB2
    ui->screen_tabview_1_tab_2 = lv_tabview_add_tab(ui->screen_tabview_1,"LAB2");
    lv_obj_t * screen_tabview_1_tab_2_label = lv_label_create(ui->screen_tabview_1_tab_2);
    lv_label_set_text(screen_tabview_1_tab_2_label, "");

    //Write codes screen_label2_4
    ui->screen_label2_4 = lv_label_create(ui->screen_tabview_1_tab_2);
    lv_label_set_text(ui->screen_label2_4, "Moist");
    lv_label_set_long_mode(ui->screen_label2_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label2_4, 255, 225);
    lv_obj_set_size(ui->screen_label2_4, 110, 23);

    //Write style for screen_label2_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label2_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label2_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label2_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label2_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label2_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_label2_3
    ui->screen_label2_3 = lv_label_create(ui->screen_tabview_1_tab_2);
    lv_label_set_text(ui->screen_label2_3, "WaterFlow");
    lv_label_set_long_mode(ui->screen_label2_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label2_3, 66, 225);
    lv_obj_set_size(ui->screen_label2_3, 110, 23);

    //Write style for screen_label2_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label2_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label2_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label2_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label2_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label2_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_label2_2
    ui->screen_label2_2 = lv_label_create(ui->screen_tabview_1_tab_2);
    lv_label_set_text(ui->screen_label2_2, "Light");
    lv_label_set_long_mode(ui->screen_label2_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label2_2, 255, 110);
    lv_obj_set_size(ui->screen_label2_2, 110, 23);

    //Write style for screen_label2_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label2_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label2_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label2_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label2_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label2_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_label2_1
    ui->screen_label2_1 = lv_label_create(ui->screen_tabview_1_tab_2);
    lv_label_set_text(ui->screen_label2_1, "Temp");
    lv_label_set_long_mode(ui->screen_label2_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_label2_1, 66, 110);
    lv_obj_set_size(ui->screen_label2_1, 110, 23);

    //Write style for screen_label2_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_label2_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_label2_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_label2_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_label2_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_label2_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_label2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chart2_1
    ui->screen_chart2_1 = lv_chart_create(ui->screen_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_chart2_1, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart2_1, 3, 5);
    lv_chart_set_point_count(ui->screen_chart2_1, 5);
    lv_chart_set_range(ui->screen_chart2_1, LV_CHART_AXIS_PRIMARY_Y, -20, 60);
    lv_chart_set_axis_tick(ui->screen_chart2_1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart2_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart2_1, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart2_1, 256);
    lv_chart_set_zoom_y(ui->screen_chart2_1, 256);
    ui->screen_chart2_1_0 = lv_chart_add_series(ui->screen_chart2_1, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_chart2_1, ui->screen_chart2_1_0, 1);
    lv_chart_set_next_value(ui->screen_chart2_1, ui->screen_chart2_1_0, 20);
    lv_chart_set_next_value(ui->screen_chart2_1, ui->screen_chart2_1_0, 30);
    lv_chart_set_next_value(ui->screen_chart2_1, ui->screen_chart2_1_0, 40);
    lv_chart_set_next_value(ui->screen_chart2_1, ui->screen_chart2_1_0, 5);
#endif
    lv_obj_set_pos(ui->screen_chart2_1, 59, 13);
    lv_obj_set_size(ui->screen_chart2_1, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart2_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart2_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart2_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart2_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart2_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart2_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart2_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart2_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart2_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart2_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart2_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart2_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart2_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_chart2_2
    ui->screen_chart2_2 = lv_chart_create(ui->screen_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_chart2_2, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart2_2, 3, 5);
    lv_chart_set_point_count(ui->screen_chart2_2, 5);
    lv_chart_set_range(ui->screen_chart2_2, LV_CHART_AXIS_PRIMARY_Y, 100, 600);
    lv_chart_set_axis_tick(ui->screen_chart2_2, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart2_2, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart2_2, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart2_2, 256);
    lv_chart_set_zoom_y(ui->screen_chart2_2, 256);
    ui->screen_chart2_2_0 = lv_chart_add_series(ui->screen_chart2_2, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_chart2_2, ui->screen_chart2_2_0, 400);
    lv_chart_set_next_value(ui->screen_chart2_2, ui->screen_chart2_2_0, 450);
    lv_chart_set_next_value(ui->screen_chart2_2, ui->screen_chart2_2_0, 420);
    lv_chart_set_next_value(ui->screen_chart2_2, ui->screen_chart2_2_0, 410);
    lv_chart_set_next_value(ui->screen_chart2_2, ui->screen_chart2_2_0, 100);
#endif
    lv_obj_set_pos(ui->screen_chart2_2, 249, 13);
    lv_obj_set_size(ui->screen_chart2_2, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart2_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart2_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart2_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart2_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart2_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart2_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart2_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart2_2, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart2_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_2, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart2_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart2_2, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart2_2, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart2_2, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart2_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_2, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_2, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_2, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_chart2_3
    ui->screen_chart2_3 = lv_chart_create(ui->screen_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_chart2_3, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart2_3, 3, 5);
    lv_chart_set_point_count(ui->screen_chart2_3, 5);
    lv_chart_set_range(ui->screen_chart2_3, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart2_3, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart2_3, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart2_3, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart2_3, 256);
    lv_chart_set_zoom_y(ui->screen_chart2_3, 256);
    ui->screen_chart2_3_0 = lv_chart_add_series(ui->screen_chart2_3, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_chart2_3, ui->screen_chart2_3_0, 1);
    lv_chart_set_next_value(ui->screen_chart2_3, ui->screen_chart2_3_0, 20);
    lv_chart_set_next_value(ui->screen_chart2_3, ui->screen_chart2_3_0, 30);
    lv_chart_set_next_value(ui->screen_chart2_3, ui->screen_chart2_3_0, 40);
    lv_chart_set_next_value(ui->screen_chart2_3, ui->screen_chart2_3_0, 5);
#endif
    lv_obj_set_pos(ui->screen_chart2_3, 59, 129);
    lv_obj_set_size(ui->screen_chart2_3, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart2_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart2_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart2_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart2_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart2_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart2_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart2_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart2_3, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart2_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_3, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart2_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart2_3, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart2_3, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart2_3, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart2_3, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_3, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_3, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_3, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_chart2_4
    ui->screen_chart2_4 = lv_chart_create(ui->screen_tabview_1_tab_2);
    lv_chart_set_type(ui->screen_chart2_4, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_chart2_4, 3, 5);
    lv_chart_set_point_count(ui->screen_chart2_4, 5);
    lv_chart_set_range(ui->screen_chart2_4, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart2_4, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 40);
    lv_chart_set_range(ui->screen_chart2_4, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_chart2_4, LV_CHART_AXIS_PRIMARY_X, 1, 5, 5, 4, true, 40);
    lv_chart_set_zoom_x(ui->screen_chart2_4, 256);
    lv_chart_set_zoom_y(ui->screen_chart2_4, 256);
    ui->screen_chart2_4_0 = lv_chart_add_series(ui->screen_chart2_4, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_chart2_4, ui->screen_chart2_4_0, 1);
    lv_chart_set_next_value(ui->screen_chart2_4, ui->screen_chart2_4_0, 20);
    lv_chart_set_next_value(ui->screen_chart2_4, ui->screen_chart2_4_0, 30);
    lv_chart_set_next_value(ui->screen_chart2_4, ui->screen_chart2_4_0, 40);
    lv_chart_set_next_value(ui->screen_chart2_4, ui->screen_chart2_4_0, 5);
#endif
    lv_obj_set_pos(ui->screen_chart2_4, 249, 129);
    lv_obj_set_size(ui->screen_chart2_4, 116, 78);
    lv_obj_set_scrollbar_mode(ui->screen_chart2_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chart2_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chart2_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chart2_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chart2_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chart2_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chart2_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chart2_4, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chart2_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chart2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_4, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chart2_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chart2_4, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_chart2_4, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chart2_4, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chart2_4, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_chart2_4, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_chart2_4, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_chart2_4, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_btn_1
    ui->screen_btn_1 = lv_btn_create(ui->screen);
    ui->screen_btn_1_label = lv_label_create(ui->screen_btn_1);
    lv_label_set_text(ui->screen_btn_1_label, "->");
    lv_label_set_long_mode(ui->screen_btn_1_label, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_align(ui->screen_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_btn_1, 443, 120);
    lv_obj_set_size(ui->screen_btn_1, 35, 20);

    //Write style for screen_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmlabel
    ui->screen_alarmlabel = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_alarmlabel, "No Alarm");
    lv_label_set_long_mode(ui->screen_alarmlabel, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmlabel, 47, 6);
    lv_obj_set_size(ui->screen_alarmlabel, 106, 32);

    //Write style for screen_alarmlabel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmlabel, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmlabel, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmlabel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmlabel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmlabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmlabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen);

    //Init events for screen.
    events_init_screen(ui);
}
