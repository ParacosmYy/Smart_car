/*********************************************************************************************************************
* TC264 Opensourec Library 即（TC264 开源库）是一个基于官方 SDK 接口的第三方开源库
* Copyright (c) 2022 SEEKFREE 逐飞科技
*
* 本文件是 TC264 开源库的一部分
*
* TC264 开源库 是免费软件
* 您可以根据自由软件基金会发布的 GPL（GNU General Public License，即 GNU通用公共许可证）的条款
* 即 GPL 的第3版（即 GPL3.0）或（您选择的）任何后来的版本，重新发布和/或修改它
*
* 本开源库的发布是希望它能发挥作用，但并未对其作任何的保证
* 甚至没有隐含的适销性或适合特定用途的保证
* 更多细节请参见 GPL
*
* 您应该在收到本开源库的同时收到一份 GPL 的副本
* 如果没有，请参阅<https://www.gnu.org/licenses/>
*
* 额外注明：
* 本开源库使用 GPL3.0 开源许可证协议 以上许可申明为译文版本
* 许可申明英文版在 libraries/doc 文件夹下的 GPL3_permission_statement.txt 文件中
* 许可证副本在 libraries 文件夹下 即该文件夹下的 LICENSE 文件
* 欢迎各位使用并传播本程序 但修改内容时必须保留逐飞科技的版权声明（即本声明）
*
* 文件名称          cpu0_main
* 公司名称          成都逐飞科技有限公司
* 版本信息          查看 libraries/doc 文件夹内 version 文件 版本说明
* 开发环境          ADS v1.10.2
* 适用平台          TC264D
* 店铺链接          https://seekfree.taobao.com/
*
* 修改记录
* 日期              作者                备注
* 2022-09-15       pudding            first version
********************************************************************************************************************/
#include "zf_common_headfile.h"
#pragma section all "cpu0_dsram"
// 将本语句与#pragma section all restore语句之间的全局变量都放在CPU0的RAM中



// 本例程是开源库空工程 可用作移植或者测试各类内外设
// 本例程是开源库空工程 可用作移植或者测试各类内外设
// 本例程是开源库空工程 可用作移植或者测试各类内外设

// **************************** 代码区域 ****************************
int core0_main(void)
{
    clock_init();                   // 获取时钟频率<务必保留>
    debug_init();                   // 初始化默认调试串口

    init_all();

    pit_init_all();
    // 此处编写用户代码 例如外设初始化代码等
    cpu_wait_event_ready();         // 等待所有核心初始化完毕



    while (TRUE)
    {


//        count1 = encoder_get_count(TIM2_ENCODER);
//        count2 = encoder_get_count(TIM4_ENCODER);

//        tft180_show_int(0,0,key_flag[0],3);
//        tft180_show_int(0,10,key_flag[1],3);
//        tft180_show_int(0,20,key_flag[2],3);
//        tft180_show_int(0,30,key_flag[3],3);


//        tft180_show_int(60,0,dip_switch_flag[0],1);
//        tft180_show_int(70,0,dip_switch_flag[1],1);
//        tft180_show_int(80,0,dip_switch_flag[2],1);
//        tft180_show_int(90,0,dip_switch_flag[3],1);

        //key_check_all();
        //key_init(10);
        //dip_switch_check_all();




//        if(flag == 1)
//        {
//            ble6a20_send_string("HI ...");
//            flag = 0;
//        }


        if(mt9v03x_finish_flag == 1)
        {
            task_calculte();
        }
        tft180_show_gray_image(0, 0, mt9v03x_image_bandw_zip[0], 94, 60, MT9V03X_W / 2, MT9V03X_H / 2, 0);

        //tft180_show_int(0 , 60 ,image_threshold , 4 );

       // tft180_show_float(0,100,z_angle,3,3);

        tft180_show_string(0 , 80 , "left:");
        tft180_show_int(50 , 80 , left_encoder_speed , 4 );

        tft180_show_string(0 , 60 , "right:");
        tft180_show_int(50 , 60 , right_encoder_speed , 4 );

//        tft180_show_string(0 , 100 , "out:");
//        tft180_show_int(50 , 100 , (int)servo_pid_output , 4 );


//        tft180_show_string(0 , 120 , "mid:");
//        tft180_show_int(50 , 120 , mid_line , 4 );



        tft180_show_string(0,100,"l_spd:");
        tft180_show_string(0,120,"r_spd:");

        tft180_show_int(50 , 100 , (int32)left_motor_pid_output , 6 );
        tft180_show_int(50 , 120 , (int32)right_motor_pid_output , 6 );

        tft180_show_string(0 , 140 , "err:");
        tft180_show_int(50 , 140 ,calculate_error , 4 );




//        float dara1 = icm20602_gyro_transition(icm20602_gyro_x);
//        float dara2 = icm20602_gyro_transition(icm20602_gyro_y);
//        float dara3 = icm20602_gyro_transition(icm20602_gyro_z);
        //float z_angle_speed = icm20602_gyro_transition(icm20602_gyro_z);

        // z_angle_speed 就是 z 轴的角速度（单位：度/秒）



    }
}

#pragma section all restore
// **************************** 代码区域 ****************************
