/*
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *        * Redistributions of source code must retain the above copyright
 *            notice, this list of conditions and the following disclaimer.
 *        * Redistributions in binary form must reproduce the above copyright
 *            notice, this list of conditions and the following disclaimer in the
 *            documentation and/or other materials provided with the distribution.
 *        * Neither the name of The Linux Foundation nor
 *            the names of its contributors may be used to endorse or promote
 *            products derived from this software without specific prior written
 *            permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NON-INFRINGEMENT ARE DISCLAIMED.    IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "FmPerformanceParams.h"
#include "FmIoctlsInterface.h"

#include <cstdio>
#include <linux/videodev2.h>
#include <utils/Log.h>

signed char FmPerformanceParams :: SetAfRmssiTh
(
   UINT fd, unsigned short th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_AF_RMSSI_TH, th);

   return ret;
}

signed char FmPerformanceParams :: SetAfRmssiSamplesCnt
(
   UINT fd, unsigned char cnt
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_AF_RMSSI_SAMPLES, cnt);

   return ret;
}

signed char FmPerformanceParams :: SetGoodChannelRmssiTh
(
   UINT fd, signed char th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_GOOD_CH_RMSSI_TH, th);

   return ret;
}

signed char FmPerformanceParams :: SetSrchAlgoType
(
   UINT fd, unsigned char algo
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_SRCHALGOTYPE, algo);

   return ret;
}

signed char FmPerformanceParams :: SetSinrFirstStage
(
   UINT fd, signed char th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_SINRFIRSTSTAGE, th);

   return ret;
}

signed char FmPerformanceParams :: SetRmssiFirstStage
(
   UINT fd, signed char th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_RMSSIFIRSTSTAGE, th);

   return ret;
}

signed char FmPerformanceParams :: SetCf0Th12
(
   UINT fd, int th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_CF0TH12, th);
   return ret;
}

signed char FmPerformanceParams :: SetSinrSamplesCnt
(
   UINT fd, unsigned char cnt
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_SINR_SAMPLES, cnt);

   return ret;
}

signed char FmPerformanceParams :: SetIntfLowTh
(
   UINT fd, unsigned char th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_ON_CHANNEL_THRESHOLD, th);

   return ret;
}

signed char FmPerformanceParams :: SetIntfHighTh
(
   UINT fd, unsigned char th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_OFF_CHANNEL_THRESHOLD, th);
   return ret;
}

signed char FmPerformanceParams :: SetSinrFinalStage
(
   UINT fd, signed char th
)
{
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::set_control(fd,
                V4L2_CID_PRV_SINR_THRESHOLD, th);

   return ret;
}

signed char FmPerformanceParams :: GetAfRmssiTh
(
   UINT fd, unsigned short &th
)
{
   long int af_rmssi_th;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_AF_RMSSI_TH, af_rmssi_th);
   if(ret == FM_SUCCESS) {
      th = af_rmssi_th;
   }
   return ret;
}

signed char FmPerformanceParams :: GetAfRmssiSamplesCnt
(
   UINT fd, unsigned char &cnt
)
{
   long int af_samples_cnt;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_AF_RMSSI_SAMPLES, af_samples_cnt);
   if(ret == FM_SUCCESS) {
      cnt = af_samples_cnt;
   }
   return ret;
}

signed char FmPerformanceParams :: GetGoodChannelRmssiTh
(
   UINT fd, signed char &th
)
{
   long int gd_chan_rmssi_th;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_GOOD_CH_RMSSI_TH, gd_chan_rmssi_th);
   if(ret == FM_SUCCESS) {
      th = gd_chan_rmssi_th;
   }
   return ret;
}

signed char FmPerformanceParams :: GetSrchAlgoType
(
   UINT fd, unsigned char &algo
)
{
   long int srch_algo_type;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_SRCHALGOTYPE, srch_algo_type);
   if(ret == FM_SUCCESS) {
      algo = srch_algo_type;
   }
   return ret;
}

signed char FmPerformanceParams :: GetSinrFirstStage
(
   UINT fd, signed char &th
)
{
   long int sinr_first_stage;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_SINRFIRSTSTAGE, sinr_first_stage);
   if(ret == FM_SUCCESS) {
      th = sinr_first_stage;
   }
   return ret;
}

signed char FmPerformanceParams :: GetRmssiFirstStage
(
   UINT fd, signed char &th
)
{
   long int rmssi_first_stage;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_RMSSIFIRSTSTAGE, rmssi_first_stage);
   if(ret == FM_SUCCESS) {
      th = rmssi_first_stage;
   }
   return ret;
}

signed char FmPerformanceParams :: GetCf0Th12
(
   UINT fd, int &th
)
{
   long int cf0th12;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_CF0TH12, cf0th12);
   if(ret == FM_SUCCESS) {
      th = cf0th12;
   }
   return ret;
}

signed char FmPerformanceParams :: GetSinrSamplesCnt
(
   UINT fd, unsigned char &cnt
)
{
   long int sinr_samples_cnt;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_SINR_SAMPLES, sinr_samples_cnt);
   if(ret == FM_SUCCESS) {
      cnt = sinr_samples_cnt;
   }
   return ret;
}

signed char FmPerformanceParams :: GetIntfLowTh
(
   UINT fd, unsigned char &th
)
{
   long int intf_low_th;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
               V4L2_CID_PRV_ON_CHANNEL_THRESHOLD, intf_low_th);
   if(ret == FM_SUCCESS) {
      th = intf_low_th;
   }
   return ret;
}

signed char FmPerformanceParams :: GetIntfHighTh
(
   UINT fd, unsigned char &th
)
{
   long int intf_high_th;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
               V4L2_CID_PRV_OFF_CHANNEL_THRESHOLD, intf_high_th);
   if(ret == FM_SUCCESS) {
      th = intf_high_th;
   }
   return ret;
}

signed char FmPerformanceParams :: GetIntfDet
(
   UINT fd, unsigned char &th
)
{
   long int int_det;
   signed char ret = FM_FAILURE;

   ret = FmIoctlsInterface::get_control(fd,
               V4L2_CID_PRV_INTDET, int_det);
   if(ret == FM_SUCCESS) {
      th = int_det;
   }
   return ret;
}
signed char FmPerformanceParams :: GetSinrFinalStage
(
   UINT fd, signed char &th
)
{
   signed char ret = FM_FAILURE;
   long int sinr;

   ret = FmIoctlsInterface::get_control(fd,
                V4L2_CID_PRV_SINR_THRESHOLD, sinr);

   if(ret == FM_SUCCESS) {
      th = sinr;
   }
   return ret;
}

signed char FmPerformanceParams :: SetHybridSrchList
(
   UINT fd,
   unsigned int *freqs,
   signed char *sinrs,
   unsigned int n
)
{
   struct v4l2_ext_control ext_ctl;
   struct v4l2_ext_controls v4l2_ctls;
   unsigned int freq;
   unsigned int size = 0;
   char *data = NULL;
   signed char ret = FM_FAILURE;

   if(n <= 0) {
      return ret;
   }
   data = new char[(n * 3 + 3)];

   if(data != NULL) {
      data[size++] = 0x40;
      data[size++] = ((n * 3) + 1);
      data[size++] = n;
      while((size < (n * 3 + 2)) && (freqs != NULL)
            && (sinrs != NULL)) {
            freq = (*freqs - 76000) / 50;
            data[size++] = (freq & 0xff);
            data[size++] = ((freq >> 8) & 0xff);
            data[size++] = *sinrs;
            freqs++;
            sinrs++;
      }
      if(size == (n * 3 + 3)) {
         ext_ctl.id = V4L2_CID_PRV_IRIS_WRITE_DEFAULT;
         ext_ctl.string = data;
         ext_ctl.size = size;
         v4l2_ctls.ctrl_class = V4L2_CTRL_CLASS_USER;
         v4l2_ctls.count = 1;
         v4l2_ctls.controls  = &ext_ctl;
         ret =  FmIoctlsInterface::set_ext_control(fd, &v4l2_ctls);
         if(ret == FM_SUCCESS) {
            ALOGE("hybrid srch list sent successfully\n");
         }else {
            ALOGE("hybrid srch list setting failed\n");
         }
      }
   }

   delete []data;

   return ret;
}

