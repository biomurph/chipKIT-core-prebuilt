/*-------------------------------------------------------------------------
 * PIC32MX370F512L processor header
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 *-------------------------------------------------------------------------*/

#ifndef __32MX370F512L_H
#define __32MX370F512L_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#ifdef __cplusplus
extern "C" {
#endif

extern volatile unsigned int        WDTCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WDTCLR:1;
    unsigned WDTWINEN:1;
    unsigned SWDTPS:5;
    unsigned :8;
    unsigned ON:1;
  };
  struct {
    unsigned :2;
    unsigned SWDTPS0:1;
    unsigned SWDTPS1:1;
    unsigned SWDTPS2:1;
    unsigned SWDTPS3:1;
    unsigned SWDTPS4:1;
  };
  struct {
    unsigned :2;
    unsigned WDTPSTA:5;
  };
  struct {
    unsigned :2;
    unsigned WDTPS:5;
  };
  struct {
    unsigned w:32;
  };
} __WDTCONbits_t;
extern volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON") __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        WDTCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RTCOE:1;
    unsigned HALFSEC:1;
    unsigned RTCSYNC:1;
    unsigned RTCWREN:1;
    unsigned :2;
    unsigned RTCCLKON:1;
    unsigned RTSECSEL:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned CAL:10;
  };
  struct {
    unsigned w:32;
  };
} __RTCCONbits_t;
extern volatile __RTCCONbits_t RTCCONbits __asm__ ("RTCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCALRM __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ARPT:8;
    unsigned AMASK:4;
    unsigned ALRMSYNC:1;
    unsigned PIV:1;
    unsigned CHIME:1;
    unsigned ALRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __RTCALRMbits_t;
extern volatile __RTCALRMbits_t RTCALRMbits __asm__ ("RTCALRM") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCALRMCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCALRMSET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCALRMINV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIME __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :8;
    unsigned SEC01:4;
    unsigned SEC10:4;
    unsigned MIN01:4;
    unsigned MIN10:4;
    unsigned HR01:4;
    unsigned HR10:4;
  };
  struct {
    unsigned w:32;
  };
} __RTCTIMEbits_t;
extern volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIMECLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIMESET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCTIMEINV __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WDAY01:4;
    unsigned :4;
    unsigned DAY01:4;
    unsigned DAY10:4;
    unsigned MONTH01:4;
    unsigned MONTH10:4;
    unsigned YEAR01:4;
    unsigned YEAR10:4;
  };
  struct {
    unsigned w:32;
  };
} __RTCDATEbits_t;
extern volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE") __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATECLR __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATESET __attribute__((section("sfrs")));
extern volatile unsigned int        RTCDATEINV __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMTIME __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :8;
    unsigned SEC01:4;
    unsigned SEC10:4;
    unsigned MIN01:4;
    unsigned MIN10:4;
    unsigned HR01:4;
    unsigned HR10:4;
  };
  struct {
    unsigned w:32;
  };
} __ALRMTIMEbits_t;
extern volatile __ALRMTIMEbits_t ALRMTIMEbits __asm__ ("ALRMTIME") __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMTIMECLR __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMTIMESET __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMTIMEINV __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMDATE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WDAY01:4;
    unsigned :4;
    unsigned DAY01:4;
    unsigned DAY10:4;
    unsigned MONTH01:4;
    unsigned MONTH10:4;
  };
  struct {
    unsigned w:32;
  };
} __ALRMDATEbits_t;
extern volatile __ALRMDATEbits_t ALRMDATEbits __asm__ ("ALRMDATE") __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMDATECLR __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMDATESET __attribute__((section("sfrs")));
extern volatile unsigned int        ALRMDATEINV __attribute__((section("sfrs")));
extern volatile unsigned int        T1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned TSYNC:1;
    unsigned :1;
    unsigned TCKPS:2;
    unsigned :1;
    unsigned TGATE:1;
    unsigned :3;
    unsigned TWIP:1;
    unsigned TWDIS:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t T1CONbits __asm__ ("T1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR1INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR1 __attribute__((section("sfrs")));
extern volatile unsigned int        PR1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR1SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR1INV __attribute__((section("sfrs")));
extern volatile unsigned int        T2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T2CONbits_t;
extern volatile __T2CONbits_t T2CONbits __asm__ ("T2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR2INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR2 __attribute__((section("sfrs")));
extern volatile unsigned int        PR2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR2SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR2INV __attribute__((section("sfrs")));
extern volatile unsigned int        T3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T3CONbits_t;
extern volatile __T3CONbits_t T3CONbits __asm__ ("T3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR3INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR3 __attribute__((section("sfrs")));
extern volatile unsigned int        PR3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR3SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR3INV __attribute__((section("sfrs")));
extern volatile unsigned int        T4CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T4CONbits_t;
extern volatile __T4CONbits_t T4CONbits __asm__ ("T4CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T4CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T4CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T4CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR4INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR4 __attribute__((section("sfrs")));
extern volatile unsigned int        PR4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR4SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR4INV __attribute__((section("sfrs")));
extern volatile unsigned int        T5CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T5CONbits_t;
extern volatile __T5CONbits_t T5CONbits __asm__ ("T5CON") __attribute__((section("sfrs")));
extern volatile unsigned int        T5CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        T5CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        T5CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5 __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5SET __attribute__((section("sfrs")));
extern volatile unsigned int        TMR5INV __attribute__((section("sfrs")));
extern volatile unsigned int        PR5 __attribute__((section("sfrs")));
extern volatile unsigned int        PR5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PR5SET __attribute__((section("sfrs")));
extern volatile unsigned int        PR5INV __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC1CONbits_t;
extern volatile __IC1CONbits_t IC1CONbits __asm__ ("IC1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC1BUF __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC2CONbits_t;
extern volatile __IC2CONbits_t IC2CONbits __asm__ ("IC2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC2BUF __attribute__((section("sfrs")));
extern volatile unsigned int        IC3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC3CONbits_t;
extern volatile __IC3CONbits_t IC3CONbits __asm__ ("IC3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC3BUF __attribute__((section("sfrs")));
extern volatile unsigned int        IC4CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC4CONbits_t;
extern volatile __IC4CONbits_t IC4CONbits __asm__ ("IC4CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC4CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC4CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC4CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC4BUF __attribute__((section("sfrs")));
extern volatile unsigned int        IC5CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC5CONbits_t;
extern volatile __IC5CONbits_t IC5CONbits __asm__ ("IC5CON") __attribute__((section("sfrs")));
extern volatile unsigned int        IC5CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IC5CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        IC5CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        IC5BUF __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC1CONbits_t;
extern volatile __OC1CONbits_t OC1CONbits __asm__ ("OC1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC1R __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC1RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC2CONbits_t;
extern volatile __OC2CONbits_t OC2CONbits __asm__ ("OC2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC2R __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC2RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC3CONbits_t;
extern volatile __OC3CONbits_t OC3CONbits __asm__ ("OC3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC3R __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC3RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC4CONbits_t;
extern volatile __OC4CONbits_t OC4CONbits __asm__ ("OC4CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC4CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC4R __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC4RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC5CONbits_t;
extern volatile __OC5CONbits_t OC5CONbits __asm__ ("OC5CON") __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC5CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC5R __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RINV __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RS __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSSET __attribute__((section("sfrs")));
extern volatile unsigned int        OC5RSINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1111CONbits_t;
extern volatile __I2C1111CONbits_t I2C1111CONbits __asm__ ("I2C1111CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1CONbits_t;
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1111STATbits_t;
extern volatile __I2C1111STATbits_t I2C1111STATbits __asm__ ("I2C1111STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1STATbits_t;
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111ADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111MSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111BRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111TRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1111RCV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C1RCV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2CONbits_t;
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2CABCONbits_t;
extern volatile __I2CABCONbits_t I2CABCONbits __asm__ ("I2CABCON") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2STATbits_t;
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABSTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2CABSTATbits_t;
extern volatile __I2CABSTATbits_t I2CABSTATbits __asm__ ("I2CABSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABADD __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABADDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABADDSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2ADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABADDINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABMSK __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABMSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABMSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2MSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABMSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABBRG __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABBRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABBRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABBRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABTRN __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABTRNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABTRNSET __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2TRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABTRNINV __attribute__((section("sfrs")));
extern volatile unsigned int        I2C2RCV __attribute__((section("sfrs")));
extern volatile unsigned int        I2CABRCV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CONbits_t;
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BUF __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRG __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CON2bits_t;
extern volatile __SPI1CON2bits_t SPI1CON2bits __asm__ ("SPI1CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI1CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CONbits_t;
extern volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STATSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2STATINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BUF __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRG __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CON2bits_t;
extern volatile __SPI2CON2bits_t SPI2CON2bits __asm__ ("SPI2CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        SPI2CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U1MODEbits_t;
extern volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        UDCMODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __UDCMODEbits_t;
extern volatile __UDCMODEbits_t UDCMODEbits __asm__ ("UDCMODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        UDCMODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        UDCMODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U1MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        UDCMODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U1STAbits_t;
extern volatile __U1STAbits_t U1STAbits __asm__ ("U1STA") __attribute__((section("sfrs")));
extern volatile unsigned int        UDCSTA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __UDCSTAbits_t;
extern volatile __UDCSTAbits_t UDCSTAbits __asm__ ("UDCSTA") __attribute__((section("sfrs")));
extern volatile unsigned int        U1STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        UDCSTACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1STASET __attribute__((section("sfrs")));
extern volatile unsigned int        UDCSTASET __attribute__((section("sfrs")));
extern volatile unsigned int        U1STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        UDCSTAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U1TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        UDCTXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        UDCRXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRG __attribute__((section("sfrs")));
extern volatile unsigned int        UDCBRG __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        UDCBRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        UDCBRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U1BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        UDCBRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U2MODEbits_t;
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U8932MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U8932MODEbits_t;
extern volatile __U8932MODEbits_t U8932MODEbits __asm__ ("U8932MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U8932MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U8932MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U2MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U8932MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U2STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U2STAbits_t;
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs")));
extern volatile unsigned int        U8932STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U8932STAbits_t;
extern volatile __U8932STAbits_t U8932STAbits __asm__ ("U8932STA") __attribute__((section("sfrs")));
extern volatile unsigned int        U2STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U8932STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U2STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U8932STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U2STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U8932STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U2TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U8932TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U2RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U8932RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRG __attribute__((section("sfrs")));
extern volatile unsigned int        U8932BRG __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U8932BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U8932BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U2BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U8932BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U39MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U39MODEbits_t;
extern volatile __U39MODEbits_t U39MODEbits __asm__ ("U39MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U3MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U3MODEbits_t;
extern volatile __U3MODEbits_t U3MODEbits __asm__ ("U3MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U39MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U3MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U39MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U3MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U39MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U3MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U39STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U39STAbits_t;
extern volatile __U39STAbits_t U39STAbits __asm__ ("U39STA") __attribute__((section("sfrs")));
extern volatile unsigned int        U3STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U3STAbits_t;
extern volatile __U3STAbits_t U3STAbits __asm__ ("U3STA") __attribute__((section("sfrs")));
extern volatile unsigned int        U39STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U3STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U39STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U3STASET __attribute__((section("sfrs")));
extern volatile unsigned int        U39STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U3STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U39TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U3TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U39RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U3RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U39BRG __attribute__((section("sfrs")));
extern volatile unsigned int        U3BRG __attribute__((section("sfrs")));
extern volatile unsigned int        U39BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U3BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U39BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U3BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U39BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U3BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U4MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U4MODEbits_t;
extern volatile __U4MODEbits_t U4MODEbits __asm__ ("U4MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        UodMODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __UodMODEbits_t;
extern volatile __UodMODEbits_t UodMODEbits __asm__ ("UodMODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U4MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        UodMODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U4MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        UodMODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U4MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        UodMODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U4STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U4STAbits_t;
extern volatile __U4STAbits_t U4STAbits __asm__ ("U4STA") __attribute__((section("sfrs")));
extern volatile unsigned int        UodSTA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __UodSTAbits_t;
extern volatile __UodSTAbits_t UodSTAbits __asm__ ("UodSTA") __attribute__((section("sfrs")));
extern volatile unsigned int        U4STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        UodSTACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U4STASET __attribute__((section("sfrs")));
extern volatile unsigned int        UodSTASET __attribute__((section("sfrs")));
extern volatile unsigned int        U4STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        UodSTAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U4TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        UodTXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U4RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        UodRXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U4BRG __attribute__((section("sfrs")));
extern volatile unsigned int        UodBRG __attribute__((section("sfrs")));
extern volatile unsigned int        U4BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        UodBRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U4BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        UodBRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U4BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        UodBRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        U5MODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U5MODEbits_t;
extern volatile __U5MODEbits_t U5MODEbits __asm__ ("U5MODE") __attribute__((section("sfrs")));
extern volatile unsigned int        UabMODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __UabMODEbits_t;
extern volatile __UabMODEbits_t UabMODEbits __asm__ ("UabMODE") __attribute__((section("sfrs")));
extern volatile unsigned int        U5MODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        UabMODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        U5MODESET __attribute__((section("sfrs")));
extern volatile unsigned int        UabMODESET __attribute__((section("sfrs")));
extern volatile unsigned int        U5MODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        UabMODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        U5STA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U5STAbits_t;
extern volatile __U5STAbits_t U5STAbits __asm__ ("U5STA") __attribute__((section("sfrs")));
extern volatile unsigned int        UabSTA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __UabSTAbits_t;
extern volatile __UabSTAbits_t UabSTAbits __asm__ ("UabSTA") __attribute__((section("sfrs")));
extern volatile unsigned int        U5STACLR __attribute__((section("sfrs")));
extern volatile unsigned int        UabSTACLR __attribute__((section("sfrs")));
extern volatile unsigned int        U5STASET __attribute__((section("sfrs")));
extern volatile unsigned int        UabSTASET __attribute__((section("sfrs")));
extern volatile unsigned int        U5STAINV __attribute__((section("sfrs")));
extern volatile unsigned int        UabSTAINV __attribute__((section("sfrs")));
extern volatile unsigned int        U5TXREG __attribute__((section("sfrs")));
extern volatile unsigned int        UabTXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U5RXREG __attribute__((section("sfrs")));
extern volatile unsigned int        UabRXREG __attribute__((section("sfrs")));
extern volatile unsigned int        U5BRG __attribute__((section("sfrs")));
extern volatile unsigned int        UabBRG __attribute__((section("sfrs")));
extern volatile unsigned int        U5BRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        UabBRGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        U5BRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        UabBRGSET __attribute__((section("sfrs")));
extern volatile unsigned int        U5BRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        UabBRGINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RDSP:1;
    unsigned WRSP:1;
    unsigned :1;
    unsigned CS1P:1;
    unsigned CS2P:1;
    unsigned ALP:1;
    unsigned CSF:2;
    unsigned PTRDEN:1;
    unsigned PTWREN:1;
    unsigned PMPTTL:1;
    unsigned ADRMUX:2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :6;
    unsigned CSF0:1;
    unsigned CSF1:1;
    unsigned :3;
    unsigned ADRMUX0:1;
    unsigned ADRMUX1:1;
  };
  struct {
    unsigned :13;
    unsigned PSIDL:1;
    unsigned :1;
    unsigned PMPEN:1;
  };
  struct {
    unsigned w:32;
  };
} __PMCONbits_t;
extern volatile __PMCONbits_t PMCONbits __asm__ ("PMCON") __attribute__((section("sfrs")));
extern volatile unsigned int        PMCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMMODE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned WAITE:2;
    unsigned WAITM:4;
    unsigned WAITB:2;
    unsigned MODE:2;
    unsigned MODE16:1;
    unsigned INCM:2;
    unsigned IRQM:2;
    unsigned BUSY:1;
  };
  struct {
    unsigned WAITE0:1;
    unsigned WAITE1:1;
    unsigned WAITM0:1;
    unsigned WAITM1:1;
    unsigned WAITM2:1;
    unsigned WAITM3:1;
    unsigned WAITB0:1;
    unsigned WAITB1:1;
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :1;
    unsigned INCM0:1;
    unsigned INCM1:1;
    unsigned IRQM0:1;
    unsigned IRQM1:1;
  };
  struct {
    unsigned w:32;
  };
} __PMMODEbits_t;
extern volatile __PMMODEbits_t PMMODEbits __asm__ ("PMMODE") __attribute__((section("sfrs")));
extern volatile unsigned int        PMMODECLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMMODESET __attribute__((section("sfrs")));
extern volatile unsigned int        PMMODEINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMADDR __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ADDR:14;
    unsigned CS:2;
  };
  struct {
    unsigned PADDR:14;
  };
  struct {
    unsigned :14;
    unsigned CS1:1;
    unsigned CS2:1;
  };
  struct {
    unsigned w:32;
  };
} __PMADDRbits_t;
extern volatile __PMADDRbits_t PMADDRbits __asm__ ("PMADDR") __attribute__((section("sfrs")));
extern volatile unsigned int        PMADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMDOUT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DATAOUT:32;
  };
  struct {
    unsigned w:32;
  };
} __PMDOUTbits_t;
extern volatile __PMDOUTbits_t PMDOUTbits __asm__ ("PMDOUT") __attribute__((section("sfrs")));
extern volatile unsigned int        PMDOUTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMDOUTSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMDOUTINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMDIN __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DATAIN:32;
  };
  struct {
    unsigned w:32;
  };
} __PMDINbits_t;
extern volatile __PMDINbits_t PMDINbits __asm__ ("PMDIN") __attribute__((section("sfrs")));
extern volatile unsigned int        PMDINCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMDINSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMDININV __attribute__((section("sfrs")));
extern volatile unsigned int        PMAEN __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PTEN:16;
  };
  struct {
    unsigned PTEN0:1;
    unsigned PTEN1:1;
    unsigned PTEN2:1;
    unsigned PTEN3:1;
    unsigned PTEN4:1;
    unsigned PTEN5:1;
    unsigned PTEN6:1;
    unsigned PTEN7:1;
    unsigned PTEN8:1;
    unsigned PTEN9:1;
    unsigned PTEN10:1;
    unsigned PTEN11:1;
    unsigned PTEN12:1;
    unsigned PTEN13:1;
    unsigned PTEN14:1;
    unsigned PTEN15:1;
  };
  struct {
    unsigned w:32;
  };
} __PMAENbits_t;
extern volatile __PMAENbits_t PMAENbits __asm__ ("PMAEN") __attribute__((section("sfrs")));
extern volatile unsigned int        PMAENCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMAENSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMAENINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMSTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OB0E:1;
    unsigned OB1E:1;
    unsigned OB2E:1;
    unsigned OB3E:1;
    unsigned :2;
    unsigned OBUF:1;
    unsigned OBE:1;
    unsigned IB0F:1;
    unsigned IB1F:1;
    unsigned IB2F:1;
    unsigned IB3F:1;
    unsigned :2;
    unsigned IBOV:1;
    unsigned IBF:1;
  };
  struct {
    unsigned w:32;
  };
} __PMSTATbits_t;
extern volatile __PMSTATbits_t PMSTATbits __asm__ ("PMSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        PMSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        PMSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned :1;
    unsigned CLRASAM:1;
    unsigned SSRC:3;
    unsigned FORM:3;
    unsigned :2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :5;
    unsigned SSRC0:1;
    unsigned SSRC1:1;
    unsigned SSRC2:1;
    unsigned FORM0:1;
    unsigned FORM1:1;
    unsigned FORM2:1;
  };
  struct {
    unsigned :13;
    unsigned ADSIDL:1;
    unsigned :1;
    unsigned ADON:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON1INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ALTS:1;
    unsigned BUFM:1;
    unsigned SMPI:4;
    unsigned :1;
    unsigned BUFS:1;
    unsigned :2;
    unsigned CSCNA:1;
    unsigned :1;
    unsigned OFFCAL:1;
    unsigned VCFG:3;
  };
  struct {
    unsigned :2;
    unsigned SMPI0:1;
    unsigned SMPI1:1;
    unsigned SMPI2:1;
    unsigned SMPI3:1;
    unsigned :7;
    unsigned VCFG0:1;
    unsigned VCFG1:1;
    unsigned VCFG2:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON2bits_t;
extern volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON2INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ADCS:8;
    unsigned SAMC:5;
    unsigned :2;
    unsigned ADRC:1;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ADCS3:1;
    unsigned ADCS4:1;
    unsigned ADCS5:1;
    unsigned ADCS6:1;
    unsigned ADCS7:1;
    unsigned SAMC0:1;
    unsigned SAMC1:1;
    unsigned SAMC2:1;
    unsigned SAMC3:1;
    unsigned SAMC4:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON3bits_t;
extern volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3SET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CON3INV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHS __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :16;
    unsigned CH0SA:4;
    unsigned :3;
    unsigned CH0NA:1;
    unsigned CH0SB:4;
    unsigned :3;
    unsigned CH0NB:1;
  };
  struct {
    unsigned :16;
    unsigned CH0SA0:1;
    unsigned CH0SA1:1;
    unsigned CH0SA2:1;
    unsigned CH0SA3:1;
    unsigned :4;
    unsigned CH0SB0:1;
    unsigned CH0SB1:1;
    unsigned CH0SB2:1;
    unsigned CH0SB3:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CHSbits_t;
extern volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHSCLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHSSET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CHSINV __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSL __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CSSL:31;
  };
  struct {
    unsigned CSSL0:1;
    unsigned CSSL1:1;
    unsigned CSSL2:1;
    unsigned CSSL3:1;
    unsigned CSSL4:1;
    unsigned CSSL5:1;
    unsigned CSSL6:1;
    unsigned CSSL7:1;
    unsigned CSSL8:1;
    unsigned CSSL9:1;
    unsigned CSSL10:1;
    unsigned CSSL11:1;
    unsigned CSSL12:1;
    unsigned CSSL13:1;
    unsigned CSSL14:1;
    unsigned CSSL15:1;
    unsigned CSSL16:1;
    unsigned CSSL17:1;
    unsigned CSSL18:1;
    unsigned CSSL19:1;
    unsigned CSSL20:1;
    unsigned CSSL21:1;
    unsigned CSSL22:1;
    unsigned CSSL23:1;
    unsigned CSSL24:1;
    unsigned CSSL25:1;
    unsigned CSSL26:1;
    unsigned CSSL27:1;
    unsigned CSSL28:1;
    unsigned CSSL29:1;
    unsigned CSSL30:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CSSLbits_t;
extern volatile __AD1CSSLbits_t AD1CSSLbits __asm__ ("AD1CSSL") __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSLCLR __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSLSET __attribute__((section("sfrs")));
extern volatile unsigned int        AD1CSSLINV __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF0 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF1 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF2 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF3 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF4 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF5 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF6 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF7 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF8 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUF9 __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUFA __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUFB __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUFC __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUFD __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUFE __attribute__((section("sfrs")));
extern volatile unsigned int        ADC1BUFF __attribute__((section("sfrs")));
extern volatile unsigned int        CVRCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CVR:4;
    unsigned CVRSS:1;
    unsigned CVRR:1;
    unsigned CVROE:1;
    unsigned :1;
    unsigned BGSEL:2;
    unsigned VREFSEL:1;
    unsigned :4;
    unsigned ON:1;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
    unsigned :4;
    unsigned BGSEL0:1;
    unsigned BGSEL1:1;
  };
  struct {
    unsigned w:32;
  };
} __CVRCONbits_t;
extern volatile __CVRCONbits_t CVRCONbits __asm__ ("CVRCON") __attribute__((section("sfrs")));
extern volatile unsigned int        CVRCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CVRCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CVRCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :3;
    unsigned CLPWR:1;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
} __CM1CONbits_t;
extern volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CM1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :3;
    unsigned CLPWR:1;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
} __CM2CONbits_t;
extern volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CM2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned C1OUT:1;
    unsigned C2OUT:1;
    unsigned C3OUT:1;
    unsigned C4OUT:1;
    unsigned C5OUT:1;
    unsigned C6OUT:1;
    unsigned :7;
    unsigned SIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __CMSTATbits_t;
extern volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        CMSTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CTMUCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned IRNG:2;
    unsigned ITRIM:6;
    unsigned CTTRIG:1;
    unsigned IDISSEN:1;
    unsigned EDGSEQEN:1;
    unsigned EDGEN:1;
    unsigned TGEN:1;
    unsigned CTMUSIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :2;
    unsigned EDG2SEL:4;
    unsigned EDG2POL:1;
    unsigned EDG2MOD:1;
    unsigned EDG1STAT:1;
    unsigned EDG2STAT:1;
    unsigned EDG1SEL:4;
    unsigned EDG1POL:1;
    unsigned EDG1MOD:1;
  };
  struct {
    unsigned w:32;
  };
} __CTMUCONbits_t;
extern volatile __CTMUCONbits_t CTMUCONbits __asm__ ("CTMUCON") __attribute__((section("sfrs")));
extern volatile unsigned int        CTMUCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CTMUCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CTMUCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned OSWEN:1;
    unsigned SOSCEN:1;
    unsigned UFRCEN:1;
    unsigned CF:1;
    unsigned SLPEN:1;
    unsigned SLOCK:1;
    unsigned ULOCK:1;
    unsigned CLKLOCK:1;
    unsigned NOSC:3;
    unsigned :1;
    unsigned COSC:3;
    unsigned :1;
    unsigned PLLMULT:3;
    unsigned PBDIV:2;
    unsigned PBDIVRDY:1;
    unsigned SOSCRDY:1;
    unsigned :1;
    unsigned FRCDIV:3;
    unsigned PLLODIV:3;
  };
  struct {
    unsigned :8;
    unsigned NOSC0:1;
    unsigned NOSC1:1;
    unsigned NOSC2:1;
    unsigned :1;
    unsigned COSC0:1;
    unsigned COSC1:1;
    unsigned COSC2:1;
    unsigned :1;
    unsigned PLLMULT0:1;
    unsigned PLLMULT1:1;
    unsigned PLLMULT2:1;
    unsigned PBDIV0:1;
    unsigned PBDIV1:1;
    unsigned :3;
    unsigned FRCDIV0:1;
    unsigned FRCDIV1:1;
    unsigned FRCDIV2:1;
    unsigned PLLODIV0:1;
    unsigned PLLODIV1:1;
    unsigned PLLODIV2:1;
  };
  struct {
    unsigned w:32;
  };
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        OSCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUN __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TUN:6;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
  struct {
    unsigned w:32;
  };
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNCLR __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNSET __attribute__((section("sfrs")));
extern volatile unsigned int        OSCTUNINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ROSEL:4;
    unsigned :4;
    unsigned ACTIVE:1;
    unsigned DIVSWEN:1;
    unsigned :1;
    unsigned RSLP:1;
    unsigned OE:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned RODIV:15;
  };
  struct {
    unsigned w:32;
  };
} __REFOCONbits_t;
extern volatile __REFOCONbits_t REFOCONbits __asm__ ("REFOCON") __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFOCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIM __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :23;
    unsigned ROTRIM:9;
  };
  struct {
    unsigned w:32;
  };
} __REFOTRIMbits_t;
extern volatile __REFOTRIMbits_t REFOTRIMbits __asm__ ("REFOTRIM") __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIMCLR __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIMSET __attribute__((section("sfrs")));
extern volatile unsigned int        REFOTRIMINV __attribute__((section("sfrs")));
extern volatile unsigned int        CFGCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TDOEN:1;
  unsigned :1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
  unsigned :8;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DDPCON __attribute__((section("sfrs")));
typedef struct {
  unsigned TDOEN:1;
  unsigned :1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
  unsigned :8;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
} __DDPCONbits_t;
extern volatile __DDPCONbits_t DDPCONbits __asm__ ("DDPCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVID __attribute__((section("sfrs")));
typedef struct {
  unsigned DEVID:28;
  unsigned VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEY __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYCLR __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYSET __attribute__((section("sfrs")));
extern volatile unsigned int        SYSKEYINV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1 __attribute__((section("sfrs")));
typedef struct {
  unsigned AD1MD:1;
  unsigned :7;
  unsigned CTMUMD:1;
  unsigned :3;
  unsigned CVRMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD1INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2 __attribute__((section("sfrs")));
typedef struct {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD2INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3 __attribute__((section("sfrs")));
typedef struct {
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
  unsigned IC4MD:1;
  unsigned IC5MD:1;
  unsigned :11;
  unsigned OC1MD:1;
  unsigned OC2MD:1;
  unsigned OC3MD:1;
  unsigned OC4MD:1;
  unsigned OC5MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD3INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4 __attribute__((section("sfrs")));
typedef struct {
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
  unsigned T4MD:1;
  unsigned T5MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD4INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5 __attribute__((section("sfrs")));
typedef struct {
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned U3MD:1;
  unsigned U4MD:1;
  unsigned U5MD:1;
  unsigned :3;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned :6;
  unsigned I2C1MD:1;
  unsigned I2C2MD:1;
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD5INV __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6 __attribute__((section("sfrs")));
typedef struct {
  unsigned RTCCMD:1;
  unsigned REFOMD:1;
  unsigned :14;
  unsigned PMPMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6SET __attribute__((section("sfrs")));
extern volatile unsigned int        PMD6INV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned NVMOP:4;
    unsigned :7;
    unsigned LVDSTAT:1;
    unsigned LVDERR:1;
    unsigned WRERR:1;
    unsigned WREN:1;
    unsigned WR:1;
  };
  struct {
    unsigned NVMOP0:1;
    unsigned NVMOP1:1;
    unsigned NVMOP2:1;
    unsigned NVMOP3:1;
  };
  struct {
    unsigned PROGOP:4;
  };
  struct {
    unsigned PROGOP0:1;
    unsigned PROGOP1:1;
    unsigned PROGOP2:1;
    unsigned PROGOP3:1;
  };
  struct {
    unsigned w:32;
  };
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMKEY __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        NVMADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        NVMDATA __attribute__((section("sfrs")));
extern volatile unsigned int        NVMSRCADDR __attribute__((section("sfrs")));
extern volatile unsigned int        RCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned POR:1;
    unsigned BOR:1;
    unsigned IDLE:1;
    unsigned SLEEP:1;
    unsigned WDTO:1;
    unsigned :1;
    unsigned SWR:1;
    unsigned EXTR:1;
    unsigned VREGS:1;
    unsigned CMR:1;
    unsigned :19;
    unsigned HVDR:1;
  };
  struct {
    unsigned w:32;
  };
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs")));
extern volatile unsigned int        RCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        RCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRST __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned SWRST:1;
  };
  struct {
    unsigned w:32;
  };
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTSET __attribute__((section("sfrs")));
extern volatile unsigned int        RSWRSTINV __attribute__((section("sfrs")));
extern volatile unsigned int        INT1R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT1R:4;
} __INT1Rbits_t;
extern volatile __INT1Rbits_t INT1Rbits __asm__ ("INT1R") __attribute__((section("sfrs")));
extern volatile unsigned int        INT2R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT2R:4;
} __INT2Rbits_t;
extern volatile __INT2Rbits_t INT2Rbits __asm__ ("INT2R") __attribute__((section("sfrs")));
extern volatile unsigned int        INT3R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT3R:4;
} __INT3Rbits_t;
extern volatile __INT3Rbits_t INT3Rbits __asm__ ("INT3R") __attribute__((section("sfrs")));
extern volatile unsigned int        INT4R __attribute__((section("sfrs")));
typedef struct {
  unsigned INT4R:4;
} __INT4Rbits_t;
extern volatile __INT4Rbits_t INT4Rbits __asm__ ("INT4R") __attribute__((section("sfrs")));
extern volatile unsigned int        T2CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T2CKR:4;
} __T2CKRbits_t;
extern volatile __T2CKRbits_t T2CKRbits __asm__ ("T2CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        T3CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T3CKR:4;
} __T3CKRbits_t;
extern volatile __T3CKRbits_t T3CKRbits __asm__ ("T3CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        T4CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T4CKR:4;
} __T4CKRbits_t;
extern volatile __T4CKRbits_t T4CKRbits __asm__ ("T4CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        T5CKR __attribute__((section("sfrs")));
typedef struct {
  unsigned T5CKR:4;
} __T5CKRbits_t;
extern volatile __T5CKRbits_t T5CKRbits __asm__ ("T5CKR") __attribute__((section("sfrs")));
extern volatile unsigned int        IC1R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC1R:4;
} __IC1Rbits_t;
extern volatile __IC1Rbits_t IC1Rbits __asm__ ("IC1R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC2R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC2R:4;
} __IC2Rbits_t;
extern volatile __IC2Rbits_t IC2Rbits __asm__ ("IC2R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC3R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC3R:4;
} __IC3Rbits_t;
extern volatile __IC3Rbits_t IC3Rbits __asm__ ("IC3R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC4R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC4R:4;
} __IC4Rbits_t;
extern volatile __IC4Rbits_t IC4Rbits __asm__ ("IC4R") __attribute__((section("sfrs")));
extern volatile unsigned int        IC5R __attribute__((section("sfrs")));
typedef struct {
  unsigned IC5R:4;
} __IC5Rbits_t;
extern volatile __IC5Rbits_t IC5Rbits __asm__ ("IC5R") __attribute__((section("sfrs")));
extern volatile unsigned int        OCFAR __attribute__((section("sfrs")));
typedef struct {
  unsigned OCFAR:4;
} __OCFARbits_t;
extern volatile __OCFARbits_t OCFARbits __asm__ ("OCFAR") __attribute__((section("sfrs")));
extern volatile unsigned int        OCFBR __attribute__((section("sfrs")));
typedef struct {
  unsigned OCFBR:4;
} __OCFBRbits_t;
extern volatile __OCFBRbits_t OCFBRbits __asm__ ("OCFBR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1RXR __attribute__((section("sfrs")));
typedef struct {
  unsigned U1RXR:4;
} __U1RXRbits_t;
extern volatile __U1RXRbits_t U1RXRbits __asm__ ("U1RXR") __attribute__((section("sfrs")));
extern volatile unsigned int        U1CTSR __attribute__((section("sfrs")));
typedef struct {
  unsigned U1CTSR:4;
} __U1CTSRbits_t;
extern volatile __U1CTSRbits_t U1CTSRbits __asm__ ("U1CTSR") __attribute__((section("sfrs")));
extern volatile unsigned int        U2RXR __attribute__((section("sfrs")));
typedef struct {
  unsigned U2RXR:4;
} __U2RXRbits_t;
extern volatile __U2RXRbits_t U2RXRbits __asm__ ("U2RXR") __attribute__((section("sfrs")));
extern volatile unsigned int        U2CTSR __attribute__((section("sfrs")));
typedef struct {
  unsigned U2CTSR:4;
} __U2CTSRbits_t;
extern volatile __U2CTSRbits_t U2CTSRbits __asm__ ("U2CTSR") __attribute__((section("sfrs")));
extern volatile unsigned int        U3RXR __attribute__((section("sfrs")));
typedef struct {
  unsigned U3RXR:4;
} __U3RXRbits_t;
extern volatile __U3RXRbits_t U3RXRbits __asm__ ("U3RXR") __attribute__((section("sfrs")));
extern volatile unsigned int        U3CTSR __attribute__((section("sfrs")));
typedef struct {
  unsigned U3CTSR:4;
} __U3CTSRbits_t;
extern volatile __U3CTSRbits_t U3CTSRbits __asm__ ("U3CTSR") __attribute__((section("sfrs")));
extern volatile unsigned int        U4RXR __attribute__((section("sfrs")));
typedef struct {
  unsigned U4RXR:4;
} __U4RXRbits_t;
extern volatile __U4RXRbits_t U4RXRbits __asm__ ("U4RXR") __attribute__((section("sfrs")));
extern volatile unsigned int        U4CTSR __attribute__((section("sfrs")));
typedef struct {
  unsigned U4CTSR:4;
} __U4CTSRbits_t;
extern volatile __U4CTSRbits_t U4CTSRbits __asm__ ("U4CTSR") __attribute__((section("sfrs")));
extern volatile unsigned int        U5RXR __attribute__((section("sfrs")));
typedef struct {
  unsigned U5RXR:4;
} __U5RXRbits_t;
extern volatile __U5RXRbits_t U5RXRbits __asm__ ("U5RXR") __attribute__((section("sfrs")));
extern volatile unsigned int        U5CTSR __attribute__((section("sfrs")));
typedef struct {
  unsigned U5CTSR:4;
} __U5CTSRbits_t;
extern volatile __U5CTSRbits_t U5CTSRbits __asm__ ("U5CTSR") __attribute__((section("sfrs")));
extern volatile unsigned int        SDI1R __attribute__((section("sfrs")));
typedef struct {
  unsigned SDI1R:4;
} __SDI1Rbits_t;
extern volatile __SDI1Rbits_t SDI1Rbits __asm__ ("SDI1R") __attribute__((section("sfrs")));
extern volatile unsigned int        SS1R __attribute__((section("sfrs")));
typedef struct {
  unsigned SS1R:4;
} __SS1Rbits_t;
extern volatile __SS1Rbits_t SS1Rbits __asm__ ("SS1R") __attribute__((section("sfrs")));
extern volatile unsigned int        SDI2R __attribute__((section("sfrs")));
typedef struct {
  unsigned SDI2R:4;
} __SDI2Rbits_t;
extern volatile __SDI2Rbits_t SDI2Rbits __asm__ ("SDI2R") __attribute__((section("sfrs")));
extern volatile unsigned int        SS2R __attribute__((section("sfrs")));
typedef struct {
  unsigned SS2R:4;
} __SS2Rbits_t;
extern volatile __SS2Rbits_t SS2Rbits __asm__ ("SS2R") __attribute__((section("sfrs")));
extern volatile unsigned int        REFCLKIR __attribute__((section("sfrs")));
typedef struct {
  unsigned REFCLKIR:4;
} __REFCLKIRbits_t;
extern volatile __REFCLKIRbits_t REFCLKIRbits __asm__ ("REFCLKIR") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA14R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA14R:4;
} __RPA14Rbits_t;
extern volatile __RPA14Rbits_t RPA14Rbits __asm__ ("RPA14R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPA15R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPA15R:4;
} __RPA15Rbits_t;
extern volatile __RPA15Rbits_t RPA15Rbits __asm__ ("RPA15R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB0R:4;
} __RPB0Rbits_t;
extern volatile __RPB0Rbits_t RPB0Rbits __asm__ ("RPB0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB1R:4;
} __RPB1Rbits_t;
extern volatile __RPB1Rbits_t RPB1Rbits __asm__ ("RPB1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB2R:4;
} __RPB2Rbits_t;
extern volatile __RPB2Rbits_t RPB2Rbits __asm__ ("RPB2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB3R:4;
} __RPB3Rbits_t;
extern volatile __RPB3Rbits_t RPB3Rbits __asm__ ("RPB3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB4R:4;
} __RPB4Rbits_t;
extern volatile __RPB4Rbits_t RPB4Rbits __asm__ ("RPB4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB5R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB5R:4;
} __RPB5Rbits_t;
extern volatile __RPB5Rbits_t RPB5Rbits __asm__ ("RPB5R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB6R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB6R:4;
} __RPB6Rbits_t;
extern volatile __RPB6Rbits_t RPB6Rbits __asm__ ("RPB6R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB7R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB7R:4;
} __RPB7Rbits_t;
extern volatile __RPB7Rbits_t RPB7Rbits __asm__ ("RPB7R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB8R:4;
} __RPB8Rbits_t;
extern volatile __RPB8Rbits_t RPB8Rbits __asm__ ("RPB8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB9R:4;
} __RPB9Rbits_t;
extern volatile __RPB9Rbits_t RPB9Rbits __asm__ ("RPB9R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB10R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB10R:4;
} __RPB10Rbits_t;
extern volatile __RPB10Rbits_t RPB10Rbits __asm__ ("RPB10R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB11R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB11R:4;
} __RPB11Rbits_t;
extern volatile __RPB11Rbits_t RPB11Rbits __asm__ ("RPB11R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB12R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB12R:4;
} __RPB12Rbits_t;
extern volatile __RPB12Rbits_t RPB12Rbits __asm__ ("RPB12R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB13R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB13R:4;
} __RPB13Rbits_t;
extern volatile __RPB13Rbits_t RPB13Rbits __asm__ ("RPB13R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB14R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB14R:4;
} __RPB14Rbits_t;
extern volatile __RPB14Rbits_t RPB14Rbits __asm__ ("RPB14R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPB15R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPB15R:4;
} __RPB15Rbits_t;
extern volatile __RPB15Rbits_t RPB15Rbits __asm__ ("RPB15R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC1R:4;
} __RPC1Rbits_t;
extern volatile __RPC1Rbits_t RPC1Rbits __asm__ ("RPC1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC2R:4;
} __RPC2Rbits_t;
extern volatile __RPC2Rbits_t RPC2Rbits __asm__ ("RPC2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC3R:4;
} __RPC3Rbits_t;
extern volatile __RPC3Rbits_t RPC3Rbits __asm__ ("RPC3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC4R:4;
} __RPC4Rbits_t;
extern volatile __RPC4Rbits_t RPC4Rbits __asm__ ("RPC4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC13R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC13R:4;
} __RPC13Rbits_t;
extern volatile __RPC13Rbits_t RPC13Rbits __asm__ ("RPC13R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPC14R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPC14R:4;
} __RPC14Rbits_t;
extern volatile __RPC14Rbits_t RPC14Rbits __asm__ ("RPC14R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD0R:4;
} __RPD0Rbits_t;
extern volatile __RPD0Rbits_t RPD0Rbits __asm__ ("RPD0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD1R:4;
} __RPD1Rbits_t;
extern volatile __RPD1Rbits_t RPD1Rbits __asm__ ("RPD1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD2R:4;
} __RPD2Rbits_t;
extern volatile __RPD2Rbits_t RPD2Rbits __asm__ ("RPD2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD3R:4;
} __RPD3Rbits_t;
extern volatile __RPD3Rbits_t RPD3Rbits __asm__ ("RPD3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD4R:4;
} __RPD4Rbits_t;
extern volatile __RPD4Rbits_t RPD4Rbits __asm__ ("RPD4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD5R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD5R:4;
} __RPD5Rbits_t;
extern volatile __RPD5Rbits_t RPD5Rbits __asm__ ("RPD5R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD8R:4;
} __RPD8Rbits_t;
extern volatile __RPD8Rbits_t RPD8Rbits __asm__ ("RPD8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD9R:4;
} __RPD9Rbits_t;
extern volatile __RPD9Rbits_t RPD9Rbits __asm__ ("RPD9R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD10R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD10R:4;
} __RPD10Rbits_t;
extern volatile __RPD10Rbits_t RPD10Rbits __asm__ ("RPD10R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD11R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD11R:4;
} __RPD11Rbits_t;
extern volatile __RPD11Rbits_t RPD11Rbits __asm__ ("RPD11R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD12R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD12R:4;
} __RPD12Rbits_t;
extern volatile __RPD12Rbits_t RPD12Rbits __asm__ ("RPD12R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPD14R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPD14R:4;
} __RPD14Rbits_t;
extern volatile __RPD14Rbits_t RPD14Rbits __asm__ ("RPD14R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPE3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPE3R:4;
} __RPE3Rbits_t;
extern volatile __RPE3Rbits_t RPE3Rbits __asm__ ("RPE3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPE5R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPE5R:4;
} __RPE5Rbits_t;
extern volatile __RPE5Rbits_t RPE5Rbits __asm__ ("RPE5R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPE8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPE8R:4;
} __RPE8Rbits_t;
extern volatile __RPE8Rbits_t RPE8Rbits __asm__ ("RPE8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPE9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPE9R:4;
} __RPE9Rbits_t;
extern volatile __RPE9Rbits_t RPE9Rbits __asm__ ("RPE9R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF0R:4;
} __RPF0Rbits_t;
extern volatile __RPF0Rbits_t RPF0Rbits __asm__ ("RPF0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF1R:4;
} __RPF1Rbits_t;
extern volatile __RPF1Rbits_t RPF1Rbits __asm__ ("RPF1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF2R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF2R:4;
} __RPF2Rbits_t;
extern volatile __RPF2Rbits_t RPF2Rbits __asm__ ("RPF2R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF3R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF3R:4;
} __RPF3Rbits_t;
extern volatile __RPF3Rbits_t RPF3Rbits __asm__ ("RPF3R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF4R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF4R:4;
} __RPF4Rbits_t;
extern volatile __RPF4Rbits_t RPF4Rbits __asm__ ("RPF4R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF5R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF5R:4;
} __RPF5Rbits_t;
extern volatile __RPF5Rbits_t RPF5Rbits __asm__ ("RPF5R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF6R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF6R:4;
} __RPF6Rbits_t;
extern volatile __RPF6Rbits_t RPF6Rbits __asm__ ("RPF6R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF7R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF7R:4;
} __RPF7Rbits_t;
extern volatile __RPF7Rbits_t RPF7Rbits __asm__ ("RPF7R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF8R:4;
} __RPF8Rbits_t;
extern volatile __RPF8Rbits_t RPF8Rbits __asm__ ("RPF8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF12R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF12R:4;
} __RPF12Rbits_t;
extern volatile __RPF12Rbits_t RPF12Rbits __asm__ ("RPF12R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPF13R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPF13R:4;
} __RPF13Rbits_t;
extern volatile __RPF13Rbits_t RPF13Rbits __asm__ ("RPF13R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPG0R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPG0R:4;
} __RPG0Rbits_t;
extern volatile __RPG0Rbits_t RPG0Rbits __asm__ ("RPG0R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPG1R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPG1R:4;
} __RPG1Rbits_t;
extern volatile __RPG1Rbits_t RPG1Rbits __asm__ ("RPG1R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPG6R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPG6R:4;
} __RPG6Rbits_t;
extern volatile __RPG6Rbits_t RPG6Rbits __asm__ ("RPG6R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPG7R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPG7R:4;
} __RPG7Rbits_t;
extern volatile __RPG7Rbits_t RPG7Rbits __asm__ ("RPG7R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPG8R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPG8R:4;
} __RPG8Rbits_t;
extern volatile __RPG8Rbits_t RPG8Rbits __asm__ ("RPG8R") __attribute__((section("sfrs")));
extern volatile unsigned int        RPG9R __attribute__((section("sfrs")));
typedef struct {
  unsigned RPG9R:4;
} __RPG9Rbits_t;
extern volatile __RPG9Rbits_t RPG9Rbits __asm__ ("RPG9R") __attribute__((section("sfrs")));
extern volatile unsigned int        INTCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned INT0EP:1;
    unsigned INT1EP:1;
    unsigned INT2EP:1;
    unsigned INT3EP:1;
    unsigned INT4EP:1;
    unsigned :3;
    unsigned TPC:3;
    unsigned :1;
    unsigned MVEC:1;
    unsigned :3;
    unsigned SS0:1;
  };
  struct {
    unsigned w:32;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        INTCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        INTSTAT __attribute__((section("sfrs")));
typedef struct {
  unsigned VEC:6;
  unsigned :2;
  unsigned SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMR __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMRSET __attribute__((section("sfrs")));
extern volatile unsigned int        IPTMRINV __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CTIF:1;
    unsigned CS0IF:1;
    unsigned CS1IF:1;
    unsigned INT0IF:1;
    unsigned T1IF:1;
    unsigned IC1EIF:1;
    unsigned IC1IF:1;
    unsigned OC1IF:1;
    unsigned INT1IF:1;
    unsigned T2IF:1;
    unsigned IC2EIF:1;
    unsigned IC2IF:1;
    unsigned OC2IF:1;
    unsigned INT2IF:1;
    unsigned T3IF:1;
    unsigned IC3EIF:1;
    unsigned IC3IF:1;
    unsigned OC3IF:1;
    unsigned INT3IF:1;
    unsigned T4IF:1;
    unsigned IC4EIF:1;
    unsigned IC4IF:1;
    unsigned OC4IF:1;
    unsigned INT4IF:1;
    unsigned T5IF:1;
    unsigned IC5EIF:1;
    unsigned IC5IF:1;
    unsigned OC5IF:1;
    unsigned AD1IF:1;
    unsigned FSCMIF:1;
    unsigned RTCCIF:1;
    unsigned FCEIF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0SET __attribute__((section("sfrs")));
extern volatile unsigned int        IFS0INV __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CMP1IF:1;
    unsigned CMP2IF:1;
    unsigned :1;
    unsigned SPI1EIF:1;
    unsigned SPI1RXIF:1;
    unsigned SPI1TXIF:1;
    unsigned U1EIF:1;
    unsigned U1RXIF:1;
    unsigned U1TXIF:1;
    unsigned I2C1BIF:1;
    unsigned I2C1SIF:1;
    unsigned I2C1MIF:1;
    unsigned CNAIF:1;
    unsigned CNBIF:1;
    unsigned CNCIF:1;
    unsigned CNDIF:1;
    unsigned CNEIF:1;
    unsigned CNFIF:1;
    unsigned CNGIF:1;
    unsigned PMPIF:1;
    unsigned PMPEIF:1;
    unsigned SPI2EIF:1;
    unsigned SPI2RXIF:1;
    unsigned SPI2TXIF:1;
    unsigned U2EIF:1;
    unsigned U2RXIF:1;
    unsigned U2TXIF:1;
    unsigned I2C2BIF:1;
    unsigned I2C2SIF:1;
    unsigned I2C2MIF:1;
    unsigned U3EIF:1;
    unsigned U3RXIF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1SET __attribute__((section("sfrs")));
extern volatile unsigned int        IFS1INV __attribute__((section("sfrs")));
extern volatile unsigned int        IFS2 __attribute__((section("sfrs")));
typedef struct {
  unsigned U3TXIF:1;
  unsigned U4EIF:1;
  unsigned U4RXIF:1;
  unsigned U4TXIF:1;
  unsigned U5EIF:1;
  unsigned U5RXIF:1;
  unsigned U5TXIF:1;
  unsigned CTMUIF:1;
  unsigned DMA0IF:1;
  unsigned DMA1IF:1;
  unsigned DMA2IF:1;
  unsigned DMA3IF:1;
} __IFS2bits_t;
extern volatile __IFS2bits_t IFS2bits __asm__ ("IFS2") __attribute__((section("sfrs")));
extern volatile unsigned int        IFS2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IFS2SET __attribute__((section("sfrs")));
extern volatile unsigned int        IFS2INV __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CTIE:1;
    unsigned CS0IE:1;
    unsigned CS1IE:1;
    unsigned INT0IE:1;
    unsigned T1IE:1;
    unsigned IC1EIE:1;
    unsigned IC1IE:1;
    unsigned OC1IE:1;
    unsigned INT1IE:1;
    unsigned T2IE:1;
    unsigned IC2EIE:1;
    unsigned IC2IE:1;
    unsigned OC2IE:1;
    unsigned INT2IE:1;
    unsigned T3IE:1;
    unsigned IC3EIE:1;
    unsigned IC3IE:1;
    unsigned OC3IE:1;
    unsigned INT3IE:1;
    unsigned T4IE:1;
    unsigned IC4EIE:1;
    unsigned IC4IE:1;
    unsigned OC4IE:1;
    unsigned INT4IE:1;
    unsigned T5IE:1;
    unsigned IC5EIE:1;
    unsigned IC5IE:1;
    unsigned OC5IE:1;
    unsigned AD1IE:1;
    unsigned FSCMIE:1;
    unsigned RTCCIE:1;
    unsigned FCEIE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0SET __attribute__((section("sfrs")));
extern volatile unsigned int        IEC0INV __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CMP1IE:1;
    unsigned CMP2IE:1;
    unsigned :1;
    unsigned SPI1EIE:1;
    unsigned SPI1RXIE:1;
    unsigned SPI1TXIE:1;
    unsigned U1EIE:1;
    unsigned U1RXIE:1;
    unsigned U1TXIE:1;
    unsigned I2C1BIE:1;
    unsigned I2C1SIE:1;
    unsigned I2C1MIE:1;
    unsigned CNAIE:1;
    unsigned CNBIE:1;
    unsigned CNCIE:1;
    unsigned CNDIE:1;
    unsigned CNEIE:1;
    unsigned CNFIE:1;
    unsigned CNGIE:1;
    unsigned PMPIE:1;
    unsigned PMPEIE:1;
    unsigned SPI2EIE:1;
    unsigned SPI2RXIE:1;
    unsigned SPI2TXIE:1;
    unsigned U2EIE:1;
    unsigned U2RXIE:1;
    unsigned U2TXIE:1;
    unsigned I2C2BIE:1;
    unsigned I2C2SIE:1;
    unsigned I2CMIE:1;
    unsigned U3EIE:1;
    unsigned U3RXIE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1SET __attribute__((section("sfrs")));
extern volatile unsigned int        IEC1INV __attribute__((section("sfrs")));
extern volatile unsigned int        IEC2 __attribute__((section("sfrs")));
typedef struct {
  unsigned U3TXIE:1;
  unsigned U4EIE:1;
  unsigned U4RXIE:1;
  unsigned U4TXIE:1;
  unsigned U5EIE:1;
  unsigned U5RXIE:1;
  unsigned U5TXIE:1;
  unsigned CTMUIE:1;
  unsigned DMA0IE:1;
  unsigned DMA1IE:1;
  unsigned DMA2IE:1;
  unsigned DMA3IE:1;
} __IEC2bits_t;
extern volatile __IEC2bits_t IEC2bits __asm__ ("IEC2") __attribute__((section("sfrs")));
extern volatile unsigned int        IEC2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IEC2SET __attribute__((section("sfrs")));
extern volatile unsigned int        IEC2INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CTIS:2;
    unsigned CTIP:3;
    unsigned :3;
    unsigned CS0IS:2;
    unsigned CS0IP:3;
    unsigned :3;
    unsigned CS1IS:2;
    unsigned CS1IP:3;
    unsigned :3;
    unsigned INT0IS:2;
    unsigned INT0IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC0INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned T1IS:2;
    unsigned T1IP:3;
    unsigned :3;
    unsigned IC1IS:2;
    unsigned IC1IP:3;
    unsigned :3;
    unsigned OC1IS:2;
    unsigned OC1IP:3;
    unsigned :3;
    unsigned INT1IS:2;
    unsigned INT1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC1INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned T2IS:2;
    unsigned T2IP:3;
    unsigned :3;
    unsigned IC2IS:2;
    unsigned IC2IP:3;
    unsigned :3;
    unsigned OC2IS:2;
    unsigned OC2IP:3;
    unsigned :3;
    unsigned INT2IS:2;
    unsigned INT2IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC2INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned T3IS:2;
    unsigned T3IP:3;
    unsigned :3;
    unsigned IC3IS:2;
    unsigned IC3IP:3;
    unsigned :3;
    unsigned OC3IS:2;
    unsigned OC3IP:3;
    unsigned :3;
    unsigned INT3IS:2;
    unsigned INT3IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC3bits_t;
extern volatile __IPC3bits_t IPC3bits __asm__ ("IPC3") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC3INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned T4IS:2;
    unsigned T4IP:3;
    unsigned :3;
    unsigned IC4IS:2;
    unsigned IC4IP:3;
    unsigned :3;
    unsigned OC4IS:2;
    unsigned OC4IP:3;
    unsigned :3;
    unsigned INT4IS:2;
    unsigned INT4IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC4INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned T5IS:2;
    unsigned T5IP:3;
    unsigned :3;
    unsigned IC5IS:2;
    unsigned IC5IP:3;
    unsigned :3;
    unsigned OC5IS:2;
    unsigned OC5IP:3;
    unsigned :3;
    unsigned AD1IS:2;
    unsigned AD1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC5INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FSCMIS:2;
    unsigned FSCMIP:3;
    unsigned :3;
    unsigned RTCCIS:2;
    unsigned RTCCIP:3;
    unsigned :3;
    unsigned FCEIS:2;
    unsigned FCEIP:3;
    unsigned :3;
    unsigned CMP1IS:2;
    unsigned CMP1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC6INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CMP2IS:2;
    unsigned CMP2IP:3;
    unsigned :11;
    unsigned SPI1IS:2;
    unsigned SPI1IP:3;
    unsigned :3;
    unsigned U1IS:2;
    unsigned U1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC7INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned I2C1IS:2;
    unsigned I2C1IP:3;
    unsigned :3;
    unsigned CNIS:2;
    unsigned CNIP:3;
    unsigned :3;
    unsigned PMPIS:2;
    unsigned PMPIP:3;
    unsigned :3;
    unsigned SPI2IS:2;
    unsigned SPI2IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC8INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned U2IS:2;
    unsigned U2IP:3;
    unsigned :3;
    unsigned I2C2IS:2;
    unsigned I2C2IP:3;
    unsigned :3;
    unsigned U3IS:2;
    unsigned U3IP:3;
    unsigned :3;
    unsigned U4IS:2;
    unsigned U4IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC9INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned U5IS:2;
    unsigned U5IP:3;
    unsigned :3;
    unsigned CTMUIP:2;
    unsigned CTMUIS:3;
    unsigned :3;
    unsigned DMA0IS:2;
    unsigned DMA0IP:3;
    unsigned :3;
    unsigned DMA1IS:2;
    unsigned DMA1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC10INV __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DMA2IS:2;
    unsigned DMA2IP:3;
    unsigned :3;
    unsigned DMA3IS:2;
    unsigned DMA3IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11CLR __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11SET __attribute__((section("sfrs")));
extern volatile unsigned int        IPC11INV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned BMXARB:3;
    unsigned :3;
    unsigned BMXWSDRM:1;
    unsigned :9;
    unsigned BMXERRIS:1;
    unsigned BMXERRDS:1;
    unsigned BMXERRDMA:1;
    unsigned BMXERRICD:1;
    unsigned BMXERRIXI:1;
    unsigned :5;
    unsigned BMXCHEDMA:1;
  };
  struct {
    unsigned w:32;
  };
} __BMXCONbits_t;
extern volatile __BMXCONbits_t BMXCONbits __asm__ ("BMXCON") __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDKPBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUDBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDUPBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXDRMSZ __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBA __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBACLR __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBASET __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPUPBAINV __attribute__((section("sfrs")));
extern volatile unsigned int        BMXPFMSZ __attribute__((section("sfrs")));
extern volatile unsigned int        BMXBOOTSZ __attribute__((section("sfrs")));
extern volatile unsigned int        DMACON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :11;
    unsigned DMABUSY:1;
    unsigned SUSPEND:1;
    unsigned :2;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __DMACONbits_t;
extern volatile __DMACONbits_t DMACONbits __asm__ ("DMACON") __attribute__((section("sfrs")));
extern volatile unsigned int        DMACONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DMACONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DMACONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTAT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DMACH:3;
    unsigned RDWR:1;
  };
  struct {
    unsigned w:32;
  };
} __DMASTATbits_t;
extern volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT") __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DMASTATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDR __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DMAADDRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CRCCH:3;
    unsigned :2;
    unsigned CRCTYP:1;
    unsigned CRCAPP:1;
    unsigned CRCEN:1;
    unsigned PLEN:5;
    unsigned :11;
    unsigned BITO:1;
    unsigned :2;
    unsigned WBO:1;
    unsigned BYTO:2;
  };
  struct {
    unsigned w:32;
  };
} __DCRCCONbits_t;
extern volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCCONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATA __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCDATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXOR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXORCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXORSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCRCXORINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0CONbits_t;
extern volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH0ECONbits_t;
extern volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0INTbits_t;
extern volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH0DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1CONbits_t;
extern volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH1ECONbits_t;
extern volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1INTbits_t;
extern volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH1DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2CONbits_t;
extern volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH2ECONbits_t;
extern volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2INTbits_t;
extern volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH2DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3CONbits_t;
extern volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH3ECONbits_t;
extern volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3ECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INT __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3INTbits_t;
extern volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT") __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INTCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INTSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3INTINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSA __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSACLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSASET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSAINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3SPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZ __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CSIZINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTRCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTRSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3CPTRINV __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DAT __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DATCLR __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DATSET __attribute__((section("sfrs")));
extern volatile unsigned int        DCH3DATINV __attribute__((section("sfrs")));
extern volatile unsigned int        CHECON __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned PFMWS:3;
    unsigned :1;
    unsigned PREFEN:2;
    unsigned :2;
    unsigned DCSZ:2;
    unsigned :6;
    unsigned CHECOH:1;
  };
  struct {
    unsigned w:32;
  };
} __CHECONbits_t;
extern volatile __CHECONbits_t CHECONbits __asm__ ("CHECON") __attribute__((section("sfrs")));
extern volatile unsigned int        CHECONCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CHECONSET __attribute__((section("sfrs")));
extern volatile unsigned int        CHECONINV __attribute__((section("sfrs")));
extern volatile unsigned int        CHEACC __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEIDX:4;
  unsigned :27;
  unsigned CHEWEN:1;
} __CHEACCbits_t;
extern volatile __CHEACCbits_t CHEACCbits __asm__ ("CHEACC") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEACCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CHEACCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CHEACCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CHETAG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned LTYPE:1;
    unsigned LLOCK:1;
    unsigned LVALID:1;
    unsigned LTAG:20;
    unsigned :7;
    unsigned LTAGBOOT:1;
  };
  struct {
    unsigned w:32;
  };
} __CHETAGbits_t;
extern volatile __CHETAGbits_t CHETAGbits __asm__ ("CHETAG") __attribute__((section("sfrs")));
extern volatile unsigned int        CHETAGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CHETAGSET __attribute__((section("sfrs")));
extern volatile unsigned int        CHETAGINV __attribute__((section("sfrs")));
extern volatile unsigned int        CHEMSK __attribute__((section("sfrs")));
typedef struct {
  unsigned :5;
  unsigned LMASK:11;
} __CHEMSKbits_t;
extern volatile __CHEMSKbits_t CHEMSKbits __asm__ ("CHEMSK") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEMSKCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CHEMSKSET __attribute__((section("sfrs")));
extern volatile unsigned int        CHEMSKINV __attribute__((section("sfrs")));
extern volatile unsigned int        CHEW0 __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEW0:32;
} __CHEW0bits_t;
extern volatile __CHEW0bits_t CHEW0bits __asm__ ("CHEW0") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEW1 __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEW1:32;
} __CHEW1bits_t;
extern volatile __CHEW1bits_t CHEW1bits __asm__ ("CHEW1") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEW2 __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEW2:32;
} __CHEW2bits_t;
extern volatile __CHEW2bits_t CHEW2bits __asm__ ("CHEW2") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEW3 __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEW3:32;
} __CHEW3bits_t;
extern volatile __CHEW3bits_t CHEW3bits __asm__ ("CHEW3") __attribute__((section("sfrs")));
extern volatile unsigned int        CHELRU __attribute__((section("sfrs")));
typedef struct {
  unsigned CHELRU:25;
} __CHELRUbits_t;
extern volatile __CHELRUbits_t CHELRUbits __asm__ ("CHELRU") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEHIT __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEHIT:32;
} __CHEHITbits_t;
extern volatile __CHEHITbits_t CHEHITbits __asm__ ("CHEHIT") __attribute__((section("sfrs")));
extern volatile unsigned int        CHEMIS __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEMIS:32;
} __CHEMISbits_t;
extern volatile __CHEMISbits_t CHEMISbits __asm__ ("CHEMIS") __attribute__((section("sfrs")));
extern volatile unsigned int        RESERVED1 __attribute__((section("sfrs")));
extern volatile unsigned int        CHEPFABT __attribute__((section("sfrs")));
typedef struct {
  unsigned CHEPFABT:32;
} __CHEPFABTbits_t;
extern volatile __CHEPFABTbits_t CHEPFABTbits __asm__ ("CHEPFABT") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :9;
    unsigned ANSA9:1;
    unsigned ANSA10:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELAbits_t;
extern volatile __ANSELAbits_t ANSELAbits __asm__ ("ANSELA") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELACLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELASET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELAINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISA0:1;
    unsigned TRISA1:1;
    unsigned TRISA2:1;
    unsigned TRISA3:1;
    unsigned TRISA4:1;
    unsigned TRISA5:1;
    unsigned TRISA6:1;
    unsigned TRISA7:1;
    unsigned :1;
    unsigned TRISA9:1;
    unsigned TRISA10:1;
    unsigned :3;
    unsigned TRISA14:1;
    unsigned TRISA15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISACLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISASET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISAINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RA0:1;
    unsigned RA1:1;
    unsigned RA2:1;
    unsigned RA3:1;
    unsigned RA4:1;
    unsigned RA5:1;
    unsigned RA6:1;
    unsigned RA7:1;
    unsigned :1;
    unsigned RA9:1;
    unsigned RA10:1;
    unsigned :3;
    unsigned RA14:1;
    unsigned RA15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTACLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTASET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTAINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATA0:1;
    unsigned LATA1:1;
    unsigned LATA2:1;
    unsigned LATA3:1;
    unsigned LATA4:1;
    unsigned LATA5:1;
    unsigned LATA6:1;
    unsigned LATA7:1;
    unsigned :1;
    unsigned LATA9:1;
    unsigned LATA10:1;
    unsigned :3;
    unsigned LATA14:1;
    unsigned LATA15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs")));
extern volatile unsigned int        LATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATASET __attribute__((section("sfrs")));
extern volatile unsigned int        LATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCA0:1;
    unsigned ODCA1:1;
    unsigned ODCA2:1;
    unsigned ODCA3:1;
    unsigned ODCA4:1;
    unsigned ODCA5:1;
    unsigned ODCA6:1;
    unsigned ODCA7:1;
    unsigned :1;
    unsigned ODCA9:1;
    unsigned ODCA10:1;
    unsigned :3;
    unsigned ODCA14:1;
    unsigned ODCA15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCACLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCASET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUA0:1;
    unsigned CNPUA1:1;
    unsigned CNPUA2:1;
    unsigned CNPUA3:1;
    unsigned CNPUA4:1;
    unsigned CNPUA5:1;
    unsigned CNPUA6:1;
    unsigned CNPUA7:1;
    unsigned :1;
    unsigned CNPUA9:1;
    unsigned CNPUA10:1;
    unsigned :3;
    unsigned CNPUA14:1;
    unsigned CNPUA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUAbits_t;
extern volatile __CNPUAbits_t CNPUAbits __asm__ ("CNPUA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDA0:1;
    unsigned CNPDA1:1;
    unsigned CNPDA2:1;
    unsigned CNPDA3:1;
    unsigned CNPDA4:1;
    unsigned CNPDA5:1;
    unsigned CNPDA6:1;
    unsigned CNPDA7:1;
    unsigned :1;
    unsigned CNPDA9:1;
    unsigned CNPDA10:1;
    unsigned :3;
    unsigned CNPDA14:1;
    unsigned CNPDA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDAbits_t;
extern volatile __CNPDAbits_t CNPDAbits __asm__ ("CNPDA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONAbits_t;
extern volatile __CNCONAbits_t CNCONAbits __asm__ ("CNCONA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNENA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIEA0:1;
    unsigned CNIEA1:1;
    unsigned CNIEA2:1;
    unsigned CNIEA3:1;
    unsigned CNIEA4:1;
    unsigned CNIEA5:1;
    unsigned CNIEA6:1;
    unsigned CNIEA7:1;
    unsigned :1;
    unsigned CNIEA9:1;
    unsigned CNIEA10:1;
    unsigned :3;
    unsigned CNIEA14:1;
    unsigned CNIEA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENAbits_t;
extern volatile __CNENAbits_t CNENAbits __asm__ ("CNENA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENAINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATA __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATA0:1;
    unsigned CNSTATA1:1;
    unsigned CNSTATA2:1;
    unsigned CNSTATA3:1;
    unsigned CNSTATA4:1;
    unsigned CNSTATA5:1;
    unsigned CNSTATA6:1;
    unsigned CNSTATA7:1;
    unsigned :1;
    unsigned CNSTATA9:1;
    unsigned CNSTATA10:1;
    unsigned :3;
    unsigned CNSTATA14:1;
    unsigned CNSTATA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATAbits_t;
extern volatile __CNSTATAbits_t CNSTATAbits __asm__ ("CNSTATA") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATACLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATASET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATAINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ANSB0:1;
    unsigned ANSB1:1;
    unsigned ANSB2:1;
    unsigned ANSB3:1;
    unsigned ANSB4:1;
    unsigned ANSB5:1;
    unsigned ANSB6:1;
    unsigned ANSB7:1;
    unsigned ANSB8:1;
    unsigned ANSB9:1;
    unsigned ANSB10:1;
    unsigned ANSB11:1;
    unsigned ANSB12:1;
    unsigned ANSB13:1;
    unsigned ANSB14:1;
    unsigned ANSB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELBbits_t;
extern volatile __ANSELBbits_t ANSELBbits __asm__ ("ANSELB") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELBSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELBINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISB0:1;
    unsigned TRISB1:1;
    unsigned TRISB2:1;
    unsigned TRISB3:1;
    unsigned TRISB4:1;
    unsigned TRISB5:1;
    unsigned TRISB6:1;
    unsigned TRISB7:1;
    unsigned TRISB8:1;
    unsigned TRISB9:1;
    unsigned TRISB10:1;
    unsigned TRISB11:1;
    unsigned TRISB12:1;
    unsigned TRISB13:1;
    unsigned TRISB14:1;
    unsigned TRISB15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISBSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISBINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RB0:1;
    unsigned RB1:1;
    unsigned RB2:1;
    unsigned RB3:1;
    unsigned RB4:1;
    unsigned RB5:1;
    unsigned RB6:1;
    unsigned RB7:1;
    unsigned RB8:1;
    unsigned RB9:1;
    unsigned RB10:1;
    unsigned RB11:1;
    unsigned RB12:1;
    unsigned RB13:1;
    unsigned RB14:1;
    unsigned RB15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTBSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTBINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATB0:1;
    unsigned LATB1:1;
    unsigned LATB2:1;
    unsigned LATB3:1;
    unsigned LATB4:1;
    unsigned LATB5:1;
    unsigned LATB6:1;
    unsigned LATB7:1;
    unsigned LATB8:1;
    unsigned LATB9:1;
    unsigned LATB10:1;
    unsigned LATB11:1;
    unsigned LATB12:1;
    unsigned LATB13:1;
    unsigned LATB14:1;
    unsigned LATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs")));
extern volatile unsigned int        LATBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATBSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATBINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCB0:1;
    unsigned ODCB1:1;
    unsigned ODCB2:1;
    unsigned ODCB3:1;
    unsigned ODCB4:1;
    unsigned ODCB5:1;
    unsigned ODCB6:1;
    unsigned ODCB7:1;
    unsigned ODCB8:1;
    unsigned ODCB9:1;
    unsigned ODCB10:1;
    unsigned ODCB11:1;
    unsigned ODCB12:1;
    unsigned ODCB13:1;
    unsigned ODCB14:1;
    unsigned ODCB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUB0:1;
    unsigned CNPUB1:1;
    unsigned CNPUB2:1;
    unsigned CNPUB3:1;
    unsigned CNPUB4:1;
    unsigned CNPUB5:1;
    unsigned CNPUB6:1;
    unsigned CNPUB7:1;
    unsigned CNPUB8:1;
    unsigned CNPUB9:1;
    unsigned CNPUB10:1;
    unsigned CNPUB11:1;
    unsigned CNPUB12:1;
    unsigned CNPUB13:1;
    unsigned CNPUB14:1;
    unsigned CNPUB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUBbits_t;
extern volatile __CNPUBbits_t CNPUBbits __asm__ ("CNPUB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDB0:1;
    unsigned CNPDB1:1;
    unsigned CNPDB2:1;
    unsigned CNPDB3:1;
    unsigned CNPDB4:1;
    unsigned CNPDB5:1;
    unsigned CNPDB6:1;
    unsigned CNPDB7:1;
    unsigned CNPDB8:1;
    unsigned CNPDB9:1;
    unsigned CNPDB10:1;
    unsigned CNPDB11:1;
    unsigned CNPDB12:1;
    unsigned CNPDB13:1;
    unsigned CNPDB14:1;
    unsigned CNPDB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDBbits_t;
extern volatile __CNPDBbits_t CNPDBbits __asm__ ("CNPDB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONBbits_t;
extern volatile __CNCONBbits_t CNCONBbits __asm__ ("CNCONB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNENB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIEB0:1;
    unsigned CNIEB1:1;
    unsigned CNIEB2:1;
    unsigned CNIEB3:1;
    unsigned CNIEB4:1;
    unsigned CNIEB5:1;
    unsigned CNIEB6:1;
    unsigned CNIEB7:1;
    unsigned CNIEB8:1;
    unsigned CNIEB9:1;
    unsigned CNIEB10:1;
    unsigned CNIEB11:1;
    unsigned CNIEB12:1;
    unsigned CNIEB13:1;
    unsigned CNIEB14:1;
    unsigned CNIEB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENBbits_t;
extern volatile __CNENBbits_t CNENBbits __asm__ ("CNENB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENBINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATB __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATB0:1;
    unsigned CNSTATB1:1;
    unsigned CNSTATB2:1;
    unsigned CNSTATB3:1;
    unsigned CNSTATB4:1;
    unsigned CNSTATB5:1;
    unsigned CNSTATB6:1;
    unsigned CNSTATB7:1;
    unsigned CNSTATB8:1;
    unsigned CNSTATB9:1;
    unsigned CNSTATB10:1;
    unsigned CNSTATB11:1;
    unsigned CNSTATB12:1;
    unsigned CNSTATB13:1;
    unsigned CNSTATB14:1;
    unsigned CNSTATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATBbits_t;
extern volatile __CNSTATBbits_t CNSTATBbits __asm__ ("CNSTATB") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATBCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATBSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATBINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELC __attribute__((section("sfrs")));
typedef struct {
  unsigned w:32;
} __ANSELCbits_t;
extern volatile __ANSELCbits_t ANSELCbits __asm__ ("ANSELC") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELCSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELCINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned TRISC1:1;
    unsigned TRISC2:1;
    unsigned TRISC3:1;
    unsigned TRISC4:1;
    unsigned :7;
    unsigned TRISC12:1;
    unsigned TRISC13:1;
    unsigned TRISC14:1;
    unsigned TRISC15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t TRISCbits __asm__ ("TRISC") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISCSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISCINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned RC1:1;
    unsigned RC2:1;
    unsigned RC3:1;
    unsigned RC4:1;
    unsigned :7;
    unsigned RC12:1;
    unsigned RC13:1;
    unsigned RC14:1;
    unsigned RC15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t PORTCbits __asm__ ("PORTC") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTCSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTCINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned LATC1:1;
    unsigned LATC2:1;
    unsigned LATC3:1;
    unsigned LATC4:1;
    unsigned :7;
    unsigned LATC12:1;
    unsigned LATC13:1;
    unsigned LATC14:1;
    unsigned LATC15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATCbits_t;
extern volatile __LATCbits_t LATCbits __asm__ ("LATC") __attribute__((section("sfrs")));
extern volatile unsigned int        LATCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATCSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATCINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned ODCC1:1;
    unsigned ODCC2:1;
    unsigned ODCC3:1;
    unsigned ODCC4:1;
    unsigned :7;
    unsigned ODCC12:1;
    unsigned ODCC13:1;
    unsigned ODCC14:1;
    unsigned ODCC15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCCbits_t;
extern volatile __ODCCbits_t ODCCbits __asm__ ("ODCC") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCCSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned CNPUC1:1;
    unsigned CNPUC2:1;
    unsigned CNPUC3:1;
    unsigned CNPUC4:1;
    unsigned :7;
    unsigned CNPUC12:1;
    unsigned CNPUC13:1;
    unsigned CNPUC14:1;
    unsigned CNPUC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUCbits_t;
extern volatile __CNPUCbits_t CNPUCbits __asm__ ("CNPUC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned CNPDC1:1;
    unsigned CNPDC2:1;
    unsigned CNPDC3:1;
    unsigned CNPDC4:1;
    unsigned :7;
    unsigned CNPDC12:1;
    unsigned CNPDC13:1;
    unsigned CNPDC14:1;
    unsigned CNPDC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDCbits_t;
extern volatile __CNPDCbits_t CNPDCbits __asm__ ("CNPDC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONCbits_t;
extern volatile __CNCONCbits_t CNCONCbits __asm__ ("CNCONC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNENC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned CNIEC1:1;
    unsigned CNIEC2:1;
    unsigned CNIEC3:1;
    unsigned CNIEC4:1;
    unsigned :7;
    unsigned CNIEC12:1;
    unsigned CNIEC13:1;
    unsigned CNIEC14:1;
    unsigned CNIEC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENCbits_t;
extern volatile __CNENCbits_t CNENCbits __asm__ ("CNENC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENCINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATC __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned CNSTATC1:1;
    unsigned CNSTATC2:1;
    unsigned CNSTATC3:1;
    unsigned CNSTATC4:1;
    unsigned :7;
    unsigned CNSTATC12:1;
    unsigned CNSTATC13:1;
    unsigned CNSTATC14:1;
    unsigned CNSTATC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATCbits_t;
extern volatile __CNSTATCbits_t CNSTATCbits __asm__ ("CNSTATC") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATCCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATCSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATCINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :1;
    unsigned ANSD1:1;
    unsigned ANSD2:1;
    unsigned ANSD3:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELDbits_t;
extern volatile __ANSELDbits_t ANSELDbits __asm__ ("ANSELD") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELDSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELDINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISD0:1;
    unsigned TRISD1:1;
    unsigned TRISD2:1;
    unsigned TRISD3:1;
    unsigned TRISD4:1;
    unsigned TRISD5:1;
    unsigned TRISD6:1;
    unsigned TRISD7:1;
    unsigned TRISD8:1;
    unsigned TRISD9:1;
    unsigned TRISD10:1;
    unsigned TRISD11:1;
    unsigned TRISD12:1;
    unsigned TRISD13:1;
    unsigned TRISD14:1;
    unsigned TRISD15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISDbits_t;
extern volatile __TRISDbits_t TRISDbits __asm__ ("TRISD") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISDSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISDINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RD0:1;
    unsigned RD1:1;
    unsigned RD2:1;
    unsigned RD3:1;
    unsigned RD4:1;
    unsigned RD5:1;
    unsigned RD6:1;
    unsigned RD7:1;
    unsigned RD8:1;
    unsigned RD9:1;
    unsigned RD10:1;
    unsigned RD11:1;
    unsigned RD12:1;
    unsigned RD13:1;
    unsigned RD14:1;
    unsigned RD15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTDbits_t;
extern volatile __PORTDbits_t PORTDbits __asm__ ("PORTD") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTDSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTDINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATD0:1;
    unsigned LATD1:1;
    unsigned LATD2:1;
    unsigned LATD3:1;
    unsigned LATD4:1;
    unsigned LATD5:1;
    unsigned LATD6:1;
    unsigned LATD7:1;
    unsigned LATD8:1;
    unsigned LATD9:1;
    unsigned LATD10:1;
    unsigned LATD11:1;
    unsigned LATD12:1;
    unsigned LATD13:1;
    unsigned LATD14:1;
    unsigned LATD15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATDbits_t;
extern volatile __LATDbits_t LATDbits __asm__ ("LATD") __attribute__((section("sfrs")));
extern volatile unsigned int        LATDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATDSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATDINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCD0:1;
    unsigned ODCD1:1;
    unsigned ODCD2:1;
    unsigned ODCD3:1;
    unsigned ODCD4:1;
    unsigned ODCD5:1;
    unsigned ODCD6:1;
    unsigned ODCD7:1;
    unsigned ODCD8:1;
    unsigned ODCD9:1;
    unsigned ODCD10:1;
    unsigned ODCD11:1;
    unsigned ODCD12:1;
    unsigned ODCD13:1;
    unsigned ODCD14:1;
    unsigned ODCD15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCDbits_t;
extern volatile __ODCDbits_t ODCDbits __asm__ ("ODCD") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCDSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCDINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUD0:1;
    unsigned CNPUD1:1;
    unsigned CNPUD2:1;
    unsigned CNPUD3:1;
    unsigned CNPUD4:1;
    unsigned CNPUD5:1;
    unsigned CNPUD6:1;
    unsigned CNPUD7:1;
    unsigned CNPUD8:1;
    unsigned CNPUD9:1;
    unsigned CNPUD10:1;
    unsigned CNPUD11:1;
    unsigned CNPUD12:1;
    unsigned CNPUD13:1;
    unsigned CNPUD14:1;
    unsigned CNPUD15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUDbits_t;
extern volatile __CNPUDbits_t CNPUDbits __asm__ ("CNPUD") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUDSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUDINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDD0:1;
    unsigned CNPDD1:1;
    unsigned CNPDD2:1;
    unsigned CNPDD3:1;
    unsigned CNPDD4:1;
    unsigned CNPDD5:1;
    unsigned CNPDD6:1;
    unsigned CNPDD7:1;
    unsigned CNPDD8:1;
    unsigned CNPDD9:1;
    unsigned CNPDD10:1;
    unsigned CNPDD11:1;
    unsigned CNPDD12:1;
    unsigned CNPDD13:1;
    unsigned CNPDD14:1;
    unsigned CNPDD15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDDbits_t;
extern volatile __CNPDDbits_t CNPDDbits __asm__ ("CNPDD") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDDSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDDINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCOND __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONDbits_t;
extern volatile __CNCONDbits_t CNCONDbits __asm__ ("CNCOND") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONDSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONDINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNEND __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIED0:1;
    unsigned CNIED1:1;
    unsigned CNIED2:1;
    unsigned CNIED3:1;
    unsigned CNIED4:1;
    unsigned CNIED5:1;
    unsigned CNIED6:1;
    unsigned CNIED7:1;
    unsigned CNIED8:1;
    unsigned CNIED9:1;
    unsigned CNIED10:1;
    unsigned CNIED11:1;
    unsigned CNIED12:1;
    unsigned CNIED13:1;
    unsigned CNIED14:1;
    unsigned CNIED15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENDbits_t;
extern volatile __CNENDbits_t CNENDbits __asm__ ("CNEND") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENDSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENDINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATD __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATD0:1;
    unsigned CNSTATD1:1;
    unsigned CNSTATD2:1;
    unsigned CNSTATD3:1;
    unsigned CNSTATD4:1;
    unsigned CNSTATD5:1;
    unsigned CNSTATD6:1;
    unsigned CNSTATD7:1;
    unsigned CNSTATD8:1;
    unsigned CNSTATD9:1;
    unsigned CNSTATD10:1;
    unsigned CNSTATD11:1;
    unsigned CNSTATD12:1;
    unsigned CNSTATD13:1;
    unsigned CNSTATD14:1;
    unsigned CNSTATD15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATDbits_t;
extern volatile __CNSTATDbits_t CNSTATDbits __asm__ ("CNSTATD") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATDCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATDSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATDINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :2;
    unsigned ANSE2:1;
    unsigned :1;
    unsigned ANSE4:1;
    unsigned ANSE5:1;
    unsigned ANSE6:1;
    unsigned ANSE7:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELEbits_t;
extern volatile __ANSELEbits_t ANSELEbits __asm__ ("ANSELE") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELECLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELESET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELEINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISE0:1;
    unsigned TRISE1:1;
    unsigned TRISE2:1;
    unsigned TRISE3:1;
    unsigned TRISE4:1;
    unsigned TRISE5:1;
    unsigned TRISE6:1;
    unsigned TRISE7:1;
    unsigned TRISE8:1;
    unsigned TRISE9:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISEbits_t;
extern volatile __TRISEbits_t TRISEbits __asm__ ("TRISE") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISECLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISESET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISEINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RE0:1;
    unsigned RE1:1;
    unsigned RE2:1;
    unsigned RE3:1;
    unsigned RE4:1;
    unsigned RE5:1;
    unsigned RE6:1;
    unsigned RE7:1;
    unsigned RE8:1;
    unsigned RE9:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTEbits_t;
extern volatile __PORTEbits_t PORTEbits __asm__ ("PORTE") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTECLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTESET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTEINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATE0:1;
    unsigned LATE1:1;
    unsigned LATE2:1;
    unsigned LATE3:1;
    unsigned LATE4:1;
    unsigned LATE5:1;
    unsigned LATE6:1;
    unsigned LATE7:1;
    unsigned LATE8:1;
    unsigned LATE9:1;
  };
  struct {
    unsigned w:32;
  };
} __LATEbits_t;
extern volatile __LATEbits_t LATEbits __asm__ ("LATE") __attribute__((section("sfrs")));
extern volatile unsigned int        LATECLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATESET __attribute__((section("sfrs")));
extern volatile unsigned int        LATEINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCE0:1;
    unsigned ODCE1:1;
    unsigned ODCE2:1;
    unsigned ODCE3:1;
    unsigned ODCE4:1;
    unsigned ODCE5:1;
    unsigned ODCE6:1;
    unsigned ODCE7:1;
    unsigned ODCE8:1;
    unsigned ODCE9:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCEbits_t;
extern volatile __ODCEbits_t ODCEbits __asm__ ("ODCE") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCECLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCESET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCEINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUE0:1;
    unsigned CNPUE1:1;
    unsigned CNPUE2:1;
    unsigned CNPUE3:1;
    unsigned CNPUE4:1;
    unsigned CNPUE5:1;
    unsigned CNPUE6:1;
    unsigned CNPUE7:1;
    unsigned CNPUE8:1;
    unsigned CNPUE9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUEbits_t;
extern volatile __CNPUEbits_t CNPUEbits __asm__ ("CNPUE") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUECLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUESET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUEINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDE0:1;
    unsigned CNPDE1:1;
    unsigned CNPDE2:1;
    unsigned CNPDE3:1;
    unsigned CNPDE4:1;
    unsigned CNPDE5:1;
    unsigned CNPDE6:1;
    unsigned CNPDE7:1;
    unsigned CNPDE8:1;
    unsigned CNPDE9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDEbits_t;
extern volatile __CNPDEbits_t CNPDEbits __asm__ ("CNPDE") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDECLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDESET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDEINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONEbits_t;
extern volatile __CNCONEbits_t CNCONEbits __asm__ ("CNCONE") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONECLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONESET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONEINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNENE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIEE0:1;
    unsigned CNIEE1:1;
    unsigned CNIEE2:1;
    unsigned CNIEE3:1;
    unsigned CNIEE4:1;
    unsigned CNIEE5:1;
    unsigned CNIEE6:1;
    unsigned CNIEE7:1;
    unsigned CNIEE8:1;
    unsigned CNIEE9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENEbits_t;
extern volatile __CNENEbits_t CNENEbits __asm__ ("CNENE") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENECLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENESET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENEINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATE __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATE0:1;
    unsigned CNSTATE1:1;
    unsigned CNSTATE2:1;
    unsigned CNSTATE3:1;
    unsigned CNSTATE4:1;
    unsigned CNSTATE5:1;
    unsigned CNSTATE6:1;
    unsigned CNSTATE7:1;
    unsigned CNSTATE8:1;
    unsigned CNSTATE9:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATEbits_t;
extern volatile __CNSTATEbits_t CNSTATEbits __asm__ ("CNSTATE") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATECLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATESET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATEINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELF __attribute__((section("sfrs")));
typedef struct {
  unsigned w:32;
} __ANSELFbits_t;
extern volatile __ANSELFbits_t ANSELFbits __asm__ ("ANSELF") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELFSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELFINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISF0:1;
    unsigned TRISF1:1;
    unsigned TRISF2:1;
    unsigned TRISF3:1;
    unsigned TRISF4:1;
    unsigned TRISF5:1;
    unsigned TRISF6:1;
    unsigned TRISF7:1;
    unsigned TRISF8:1;
    unsigned :3;
    unsigned TRISF12:1;
    unsigned TRISF13:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISFbits_t;
extern volatile __TRISFbits_t TRISFbits __asm__ ("TRISF") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISFSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISFINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RF0:1;
    unsigned RF1:1;
    unsigned RF2:1;
    unsigned RF3:1;
    unsigned RF4:1;
    unsigned RF5:1;
    unsigned RF6:1;
    unsigned RF7:1;
    unsigned RF8:1;
    unsigned :3;
    unsigned RF12:1;
    unsigned RF13:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTFbits_t;
extern volatile __PORTFbits_t PORTFbits __asm__ ("PORTF") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTFSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTFINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATF0:1;
    unsigned LATF1:1;
    unsigned LATF2:1;
    unsigned LATF3:1;
    unsigned LATF4:1;
    unsigned LATF5:1;
    unsigned LATF6:1;
    unsigned LATF7:1;
    unsigned LATF8:1;
    unsigned :3;
    unsigned LATF12:1;
    unsigned LATF13:1;
  };
  struct {
    unsigned w:32;
  };
} __LATFbits_t;
extern volatile __LATFbits_t LATFbits __asm__ ("LATF") __attribute__((section("sfrs")));
extern volatile unsigned int        LATFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATFSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATFINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCF0:1;
    unsigned ODCF1:1;
    unsigned ODCF2:1;
    unsigned ODCF3:1;
    unsigned ODCF4:1;
    unsigned ODCF5:1;
    unsigned ODCF6:1;
    unsigned ODCF7:1;
    unsigned ODCF8:1;
    unsigned :3;
    unsigned ODCF12:1;
    unsigned ODCF13:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCFbits_t;
extern volatile __ODCFbits_t ODCFbits __asm__ ("ODCF") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCFSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUF0:1;
    unsigned CNPUF1:1;
    unsigned CNPUF2:1;
    unsigned CNPUF3:1;
    unsigned CNPUF4:1;
    unsigned CNPUF5:1;
    unsigned CNPUF6:1;
    unsigned CNPUF7:1;
    unsigned CNPUF8:1;
    unsigned :3;
    unsigned CNPUF12:1;
    unsigned CNPUF13:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUFbits_t;
extern volatile __CNPUFbits_t CNPUFbits __asm__ ("CNPUF") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDF0:1;
    unsigned CNPDF1:1;
    unsigned CNPDF2:1;
    unsigned CNPDF3:1;
    unsigned CNPDF4:1;
    unsigned CNPDF5:1;
    unsigned CNPDF6:1;
    unsigned CNPDF7:1;
    unsigned CNPDF8:1;
    unsigned :3;
    unsigned CNPDF12:1;
    unsigned CNPDF13:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDFbits_t;
extern volatile __CNPDFbits_t CNPDFbits __asm__ ("CNPDF") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONFbits_t;
extern volatile __CNCONFbits_t CNCONFbits __asm__ ("CNCONF") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNENF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIEF0:1;
    unsigned CNIEF1:1;
    unsigned CNIEF2:1;
    unsigned CNIEF3:1;
    unsigned CNIEF4:1;
    unsigned CNIEF5:1;
    unsigned CNIEF6:1;
    unsigned CNIEF7:1;
    unsigned CNIEF8:1;
    unsigned :3;
    unsigned CNIEF12:1;
    unsigned CNIEF13:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENFbits_t;
extern volatile __CNENFbits_t CNENFbits __asm__ ("CNENF") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENFINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATF __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATF0:1;
    unsigned CNSTATF1:1;
    unsigned CNSTATF2:1;
    unsigned CNSTATF3:1;
    unsigned CNSTATF4:1;
    unsigned CNSTATF5:1;
    unsigned CNSTATF6:1;
    unsigned CNSTATF7:1;
    unsigned CNSTATF8:1;
    unsigned :3;
    unsigned CNSTATF12:1;
    unsigned CNSTATF13:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATFbits_t;
extern volatile __CNSTATFbits_t CNSTATFbits __asm__ ("CNSTATF") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATFCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATFSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATFINV __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :6;
    unsigned ANSG6:1;
    unsigned ANSG7:1;
    unsigned ANSG8:1;
    unsigned ANSG9:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELGbits_t;
extern volatile __ANSELGbits_t ANSELGbits __asm__ ("ANSELG") __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELGSET __attribute__((section("sfrs")));
extern volatile unsigned int        ANSELGINV __attribute__((section("sfrs")));
extern volatile unsigned int        TRISG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned TRISG0:1;
    unsigned TRISG1:1;
    unsigned TRISG2:1;
    unsigned TRISG3:1;
    unsigned :2;
    unsigned TRISG6:1;
    unsigned TRISG7:1;
    unsigned TRISG8:1;
    unsigned TRISG9:1;
    unsigned :2;
    unsigned TRISG12:1;
    unsigned TRISG13:1;
    unsigned TRISG14:1;
    unsigned TRISG15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISGbits_t;
extern volatile __TRISGbits_t TRISGbits __asm__ ("TRISG") __attribute__((section("sfrs")));
extern volatile unsigned int        TRISGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        TRISGSET __attribute__((section("sfrs")));
extern volatile unsigned int        TRISGINV __attribute__((section("sfrs")));
extern volatile unsigned int        PORTG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned RG0:1;
    unsigned RG1:1;
    unsigned RG2:1;
    unsigned RG3:1;
    unsigned :2;
    unsigned RG6:1;
    unsigned RG7:1;
    unsigned RG8:1;
    unsigned RG9:1;
    unsigned :2;
    unsigned RG12:1;
    unsigned RG13:1;
    unsigned RG14:1;
    unsigned RG15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTGbits_t;
extern volatile __PORTGbits_t PORTGbits __asm__ ("PORTG") __attribute__((section("sfrs")));
extern volatile unsigned int        PORTGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        PORTGSET __attribute__((section("sfrs")));
extern volatile unsigned int        PORTGINV __attribute__((section("sfrs")));
extern volatile unsigned int        LATG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned LATG0:1;
    unsigned LATG1:1;
    unsigned LATG2:1;
    unsigned LATG3:1;
    unsigned :2;
    unsigned LATG6:1;
    unsigned LATG7:1;
    unsigned LATG8:1;
    unsigned LATG9:1;
    unsigned :2;
    unsigned LATG12:1;
    unsigned LATG13:1;
    unsigned LATG14:1;
    unsigned LATG15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATGbits_t;
extern volatile __LATGbits_t LATGbits __asm__ ("LATG") __attribute__((section("sfrs")));
extern volatile unsigned int        LATGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        LATGSET __attribute__((section("sfrs")));
extern volatile unsigned int        LATGINV __attribute__((section("sfrs")));
extern volatile unsigned int        ODCG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned ODCG0:1;
    unsigned ODCG1:1;
    unsigned ODCG2:1;
    unsigned ODCG3:1;
    unsigned :2;
    unsigned ODCG6:1;
    unsigned ODCG7:1;
    unsigned ODCG8:1;
    unsigned ODCG9:1;
    unsigned :2;
    unsigned ODCG12:1;
    unsigned ODCG13:1;
    unsigned ODCG14:1;
    unsigned ODCG15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCGbits_t;
extern volatile __ODCGbits_t ODCGbits __asm__ ("ODCG") __attribute__((section("sfrs")));
extern volatile unsigned int        ODCGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        ODCGSET __attribute__((section("sfrs")));
extern volatile unsigned int        ODCGINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPUG0:1;
    unsigned CNPUG1:1;
    unsigned CNPUG2:1;
    unsigned CNPUG3:1;
    unsigned :2;
    unsigned CNPUG6:1;
    unsigned CNPUG7:1;
    unsigned CNPUG8:1;
    unsigned CNPUG9:1;
    unsigned :2;
    unsigned CNPUG12:1;
    unsigned CNPUG13:1;
    unsigned CNPUG14:1;
    unsigned CNPUG15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUGbits_t;
extern volatile __CNPUGbits_t CNPUGbits __asm__ ("CNPUG") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUGSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPUGINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNPDG0:1;
    unsigned CNPDG1:1;
    unsigned CNPDG2:1;
    unsigned CNPDG3:1;
    unsigned :2;
    unsigned CNPDG6:1;
    unsigned CNPDG7:1;
    unsigned CNPDG8:1;
    unsigned CNPDG9:1;
    unsigned :2;
    unsigned CNPDG12:1;
    unsigned CNPDG13:1;
    unsigned CNPDG14:1;
    unsigned CNPDG15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDGbits_t;
extern volatile __CNPDGbits_t CNPDGbits __asm__ ("CNPDG") __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDGSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNPDGINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONGbits_t;
extern volatile __CNCONGbits_t CNCONGbits __asm__ ("CNCONG") __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONGSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNCONGINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNENG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNIEG0:1;
    unsigned CNIEG1:1;
    unsigned CNIEG2:1;
    unsigned CNIEG3:1;
    unsigned :2;
    unsigned CNIEG6:1;
    unsigned CNIEG7:1;
    unsigned CNIEG8:1;
    unsigned CNIEG9:1;
    unsigned :2;
    unsigned CNIEG12:1;
    unsigned CNIEG13:1;
    unsigned CNIEG14:1;
    unsigned CNIEG15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENGbits_t;
extern volatile __CNENGbits_t CNENGbits __asm__ ("CNENG") __attribute__((section("sfrs")));
extern volatile unsigned int        CNENGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNENGSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNENGINV __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATG __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned CNSTATG0:1;
    unsigned CNSTATG1:1;
    unsigned CNSTATG2:1;
    unsigned CNSTATG3:1;
    unsigned :2;
    unsigned CNSTATG6:1;
    unsigned CNSTATG7:1;
    unsigned CNSTATG8:1;
    unsigned CNSTATG9:1;
    unsigned :2;
    unsigned CNSTATG12:1;
    unsigned CNSTATG13:1;
    unsigned CNSTATG14:1;
    unsigned CNSTATG15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATGbits_t;
extern volatile __CNSTATGbits_t CNSTATGbits __asm__ ("CNSTATG") __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATGCLR __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATGSET __attribute__((section("sfrs")));
extern volatile unsigned int        CNSTATGINV __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG3 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned USERID:16;
    unsigned FSRSSEL:3;
    unsigned :9;
    unsigned PMDL1WAY:1;
    unsigned IOL1WAY:1;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG3bits_t;
extern volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG2 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FPLLIDIV:3;
    unsigned :1;
    unsigned FPLLMUL:3;
    unsigned :9;
    unsigned FPLLODIV:3;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG2bits_t;
extern volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG1 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned FNOSC:3;
    unsigned :2;
    unsigned FSOSCEN:1;
    unsigned :1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned FPBDIV:2;
    unsigned FCKSM:2;
    unsigned WDTPS:5;
    unsigned :1;
    unsigned WINDIS:1;
    unsigned FWDTEN:1;
    unsigned FWDTWINSZ:2;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG1bits_t;
extern volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1") __attribute__((section("sfrs")));
extern volatile unsigned int        DEVCFG0 __attribute__((section("sfrs")));
typedef union {
  struct {
    unsigned DEBUG:2;
    unsigned JTAGEN:1;
    unsigned ICESEL:2;
    unsigned :7;
    unsigned PWP:8;
    unsigned :4;
    unsigned BWP:1;
    unsigned :3;
    unsigned CP:1;
  };
  struct {
    unsigned FDEBUG:2;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG0bits_t;
extern volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0") __attribute__((section("sfrs")));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern WDTCON           /* 0xBF800000 */
  .extern WDTCONCLR        /* 0xBF800004 */
  .extern WDTCONSET        /* 0xBF800008 */
  .extern WDTCONINV        /* 0xBF80000C */
  .extern RTCCON           /* 0xBF800200 */
  .extern RTCCONCLR        /* 0xBF800204 */
  .extern RTCCONSET        /* 0xBF800208 */
  .extern RTCCONINV        /* 0xBF80020C */
  .extern RTCALRM          /* 0xBF800210 */
  .extern RTCALRMCLR       /* 0xBF800214 */
  .extern RTCALRMSET       /* 0xBF800218 */
  .extern RTCALRMINV       /* 0xBF80021C */
  .extern RTCTIME          /* 0xBF800220 */
  .extern RTCTIMECLR       /* 0xBF800224 */
  .extern RTCTIMESET       /* 0xBF800228 */
  .extern RTCTIMEINV       /* 0xBF80022C */
  .extern RTCDATE          /* 0xBF800230 */
  .extern RTCDATECLR       /* 0xBF800234 */
  .extern RTCDATESET       /* 0xBF800238 */
  .extern RTCDATEINV       /* 0xBF80023C */
  .extern ALRMTIME         /* 0xBF800240 */
  .extern ALRMTIMECLR      /* 0xBF800244 */
  .extern ALRMTIMESET      /* 0xBF800248 */
  .extern ALRMTIMEINV      /* 0xBF80024C */
  .extern ALRMDATE         /* 0xBF800250 */
  .extern ALRMDATECLR      /* 0xBF800254 */
  .extern ALRMDATESET      /* 0xBF800258 */
  .extern ALRMDATEINV      /* 0xBF80025C */
  .extern T1CON            /* 0xBF800600 */
  .extern T1CONCLR         /* 0xBF800604 */
  .extern T1CONSET         /* 0xBF800608 */
  .extern T1CONINV         /* 0xBF80060C */
  .extern TMR1             /* 0xBF800610 */
  .extern TMR1CLR          /* 0xBF800614 */
  .extern TMR1SET          /* 0xBF800618 */
  .extern TMR1INV          /* 0xBF80061C */
  .extern PR1              /* 0xBF800620 */
  .extern PR1CLR           /* 0xBF800624 */
  .extern PR1SET           /* 0xBF800628 */
  .extern PR1INV           /* 0xBF80062C */
  .extern T2CON            /* 0xBF800800 */
  .extern T2CONCLR         /* 0xBF800804 */
  .extern T2CONSET         /* 0xBF800808 */
  .extern T2CONINV         /* 0xBF80080C */
  .extern TMR2             /* 0xBF800810 */
  .extern TMR2CLR          /* 0xBF800814 */
  .extern TMR2SET          /* 0xBF800818 */
  .extern TMR2INV          /* 0xBF80081C */
  .extern PR2              /* 0xBF800820 */
  .extern PR2CLR           /* 0xBF800824 */
  .extern PR2SET           /* 0xBF800828 */
  .extern PR2INV           /* 0xBF80082C */
  .extern T3CON            /* 0xBF800A00 */
  .extern T3CONCLR         /* 0xBF800A04 */
  .extern T3CONSET         /* 0xBF800A08 */
  .extern T3CONINV         /* 0xBF800A0C */
  .extern TMR3             /* 0xBF800A10 */
  .extern TMR3CLR          /* 0xBF800A14 */
  .extern TMR3SET          /* 0xBF800A18 */
  .extern TMR3INV          /* 0xBF800A1C */
  .extern PR3              /* 0xBF800A20 */
  .extern PR3CLR           /* 0xBF800A24 */
  .extern PR3SET           /* 0xBF800A28 */
  .extern PR3INV           /* 0xBF800A2C */
  .extern T4CON            /* 0xBF800C00 */
  .extern T4CONCLR         /* 0xBF800C04 */
  .extern T4CONSET         /* 0xBF800C08 */
  .extern T4CONINV         /* 0xBF800C0C */
  .extern TMR4             /* 0xBF800C10 */
  .extern TMR4CLR          /* 0xBF800C14 */
  .extern TMR4SET          /* 0xBF800C18 */
  .extern TMR4INV          /* 0xBF800C1C */
  .extern PR4              /* 0xBF800C20 */
  .extern PR4CLR           /* 0xBF800C24 */
  .extern PR4SET           /* 0xBF800C28 */
  .extern PR4INV           /* 0xBF800C2C */
  .extern T5CON            /* 0xBF800E00 */
  .extern T5CONCLR         /* 0xBF800E04 */
  .extern T5CONSET         /* 0xBF800E08 */
  .extern T5CONINV         /* 0xBF800E0C */
  .extern TMR5             /* 0xBF800E10 */
  .extern TMR5CLR          /* 0xBF800E14 */
  .extern TMR5SET          /* 0xBF800E18 */
  .extern TMR5INV          /* 0xBF800E1C */
  .extern PR5              /* 0xBF800E20 */
  .extern PR5CLR           /* 0xBF800E24 */
  .extern PR5SET           /* 0xBF800E28 */
  .extern PR5INV           /* 0xBF800E2C */
  .extern IC1CON           /* 0xBF802000 */
  .extern IC1CONCLR        /* 0xBF802004 */
  .extern IC1CONSET        /* 0xBF802008 */
  .extern IC1CONINV        /* 0xBF80200C */
  .extern IC1BUF           /* 0xBF802010 */
  .extern IC2CON           /* 0xBF802200 */
  .extern IC2CONCLR        /* 0xBF802204 */
  .extern IC2CONSET        /* 0xBF802208 */
  .extern IC2CONINV        /* 0xBF80220C */
  .extern IC2BUF           /* 0xBF802210 */
  .extern IC3CON           /* 0xBF802400 */
  .extern IC3CONCLR        /* 0xBF802404 */
  .extern IC3CONSET        /* 0xBF802408 */
  .extern IC3CONINV        /* 0xBF80240C */
  .extern IC3BUF           /* 0xBF802410 */
  .extern IC4CON           /* 0xBF802600 */
  .extern IC4CONCLR        /* 0xBF802604 */
  .extern IC4CONSET        /* 0xBF802608 */
  .extern IC4CONINV        /* 0xBF80260C */
  .extern IC4BUF           /* 0xBF802610 */
  .extern IC5CON           /* 0xBF802800 */
  .extern IC5CONCLR        /* 0xBF802804 */
  .extern IC5CONSET        /* 0xBF802808 */
  .extern IC5CONINV        /* 0xBF80280C */
  .extern IC5BUF           /* 0xBF802810 */
  .extern OC1CON           /* 0xBF803000 */
  .extern OC1CONCLR        /* 0xBF803004 */
  .extern OC1CONSET        /* 0xBF803008 */
  .extern OC1CONINV        /* 0xBF80300C */
  .extern OC1R             /* 0xBF803010 */
  .extern OC1RCLR          /* 0xBF803014 */
  .extern OC1RSET          /* 0xBF803018 */
  .extern OC1RINV          /* 0xBF80301C */
  .extern OC1RS            /* 0xBF803020 */
  .extern OC1RSCLR         /* 0xBF803024 */
  .extern OC1RSSET         /* 0xBF803028 */
  .extern OC1RSINV         /* 0xBF80302C */
  .extern OC2CON           /* 0xBF803200 */
  .extern OC2CONCLR        /* 0xBF803204 */
  .extern OC2CONSET        /* 0xBF803208 */
  .extern OC2CONINV        /* 0xBF80320C */
  .extern OC2R             /* 0xBF803210 */
  .extern OC2RCLR          /* 0xBF803214 */
  .extern OC2RSET          /* 0xBF803218 */
  .extern OC2RINV          /* 0xBF80321C */
  .extern OC2RS            /* 0xBF803220 */
  .extern OC2RSCLR         /* 0xBF803224 */
  .extern OC2RSSET         /* 0xBF803228 */
  .extern OC2RSINV         /* 0xBF80322C */
  .extern OC3CON           /* 0xBF803400 */
  .extern OC3CONCLR        /* 0xBF803404 */
  .extern OC3CONSET        /* 0xBF803408 */
  .extern OC3CONINV        /* 0xBF80340C */
  .extern OC3R             /* 0xBF803410 */
  .extern OC3RCLR          /* 0xBF803414 */
  .extern OC3RSET          /* 0xBF803418 */
  .extern OC3RINV          /* 0xBF80341C */
  .extern OC3RS            /* 0xBF803420 */
  .extern OC3RSCLR         /* 0xBF803424 */
  .extern OC3RSSET         /* 0xBF803428 */
  .extern OC3RSINV         /* 0xBF80342C */
  .extern OC4CON           /* 0xBF803600 */
  .extern OC4CONCLR        /* 0xBF803604 */
  .extern OC4CONSET        /* 0xBF803608 */
  .extern OC4CONINV        /* 0xBF80360C */
  .extern OC4R             /* 0xBF803610 */
  .extern OC4RCLR          /* 0xBF803614 */
  .extern OC4RSET          /* 0xBF803618 */
  .extern OC4RINV          /* 0xBF80361C */
  .extern OC4RS            /* 0xBF803620 */
  .extern OC4RSCLR         /* 0xBF803624 */
  .extern OC4RSSET         /* 0xBF803628 */
  .extern OC4RSINV         /* 0xBF80362C */
  .extern OC5CON           /* 0xBF803800 */
  .extern OC5CONCLR        /* 0xBF803804 */
  .extern OC5CONSET        /* 0xBF803808 */
  .extern OC5CONINV        /* 0xBF80380C */
  .extern OC5R             /* 0xBF803810 */
  .extern OC5RCLR          /* 0xBF803814 */
  .extern OC5RSET          /* 0xBF803818 */
  .extern OC5RINV          /* 0xBF80381C */
  .extern OC5RS            /* 0xBF803820 */
  .extern OC5RSCLR         /* 0xBF803824 */
  .extern OC5RSSET         /* 0xBF803828 */
  .extern OC5RSINV         /* 0xBF80382C */
  .extern I2C1CON          /* 0xBF805000 */
  .extern I2C1111CON       /* 0xBF805000 */
  .extern I2C1CONCLR       /* 0xBF805004 */
  .extern I2C1111CONCLR    /* 0xBF805004 */
  .extern I2C1CONSET       /* 0xBF805008 */
  .extern I2C1111CONSET    /* 0xBF805008 */
  .extern I2C1CONINV       /* 0xBF80500C */
  .extern I2C1111CONINV    /* 0xBF80500C */
  .extern I2C1STAT         /* 0xBF805010 */
  .extern I2C1111STAT      /* 0xBF805010 */
  .extern I2C1STATCLR      /* 0xBF805014 */
  .extern I2C1111STATCLR   /* 0xBF805014 */
  .extern I2C1STATSET      /* 0xBF805018 */
  .extern I2C1111STATSET   /* 0xBF805018 */
  .extern I2C1STATINV      /* 0xBF80501C */
  .extern I2C1111STATINV   /* 0xBF80501C */
  .extern I2C1ADD          /* 0xBF805020 */
  .extern I2C1111ADD       /* 0xBF805020 */
  .extern I2C1ADDCLR       /* 0xBF805024 */
  .extern I2C1111ADDCLR    /* 0xBF805024 */
  .extern I2C1ADDSET       /* 0xBF805028 */
  .extern I2C1111ADDSET    /* 0xBF805028 */
  .extern I2C1ADDINV       /* 0xBF80502C */
  .extern I2C1111ADDINV    /* 0xBF80502C */
  .extern I2C1MSK          /* 0xBF805030 */
  .extern I2C1111MSK       /* 0xBF805030 */
  .extern I2C1MSKCLR       /* 0xBF805034 */
  .extern I2C1111MSKCLR    /* 0xBF805034 */
  .extern I2C1MSKSET       /* 0xBF805038 */
  .extern I2C1111MSKSET    /* 0xBF805038 */
  .extern I2C1MSKINV       /* 0xBF80503C */
  .extern I2C1111MSKINV    /* 0xBF80503C */
  .extern I2C1BRG          /* 0xBF805040 */
  .extern I2C1111BRG       /* 0xBF805040 */
  .extern I2C1BRGCLR       /* 0xBF805044 */
  .extern I2C1111BRGCLR    /* 0xBF805044 */
  .extern I2C1BRGSET       /* 0xBF805048 */
  .extern I2C1111BRGSET    /* 0xBF805048 */
  .extern I2C1BRGINV       /* 0xBF80504C */
  .extern I2C1111BRGINV    /* 0xBF80504C */
  .extern I2C1TRN          /* 0xBF805050 */
  .extern I2C1111TRN       /* 0xBF805050 */
  .extern I2C1TRNCLR       /* 0xBF805054 */
  .extern I2C1111TRNCLR    /* 0xBF805054 */
  .extern I2C1TRNSET       /* 0xBF805058 */
  .extern I2C1111TRNSET    /* 0xBF805058 */
  .extern I2C1TRNINV       /* 0xBF80505C */
  .extern I2C1111TRNINV    /* 0xBF80505C */
  .extern I2C1RCV          /* 0xBF805060 */
  .extern I2C1111RCV       /* 0xBF805060 */
  .extern I2C2CON          /* 0xBF805100 */
  .extern I2CABCON         /* 0xBF805100 */
  .extern I2C2CONCLR       /* 0xBF805104 */
  .extern I2CABCONCLR      /* 0xBF805104 */
  .extern I2C2CONSET       /* 0xBF805108 */
  .extern I2CABCONSET      /* 0xBF805108 */
  .extern I2C2CONINV       /* 0xBF80510C */
  .extern I2CABCONINV      /* 0xBF80510C */
  .extern I2C2STAT         /* 0xBF805110 */
  .extern I2CABSTAT        /* 0xBF805110 */
  .extern I2C2STATCLR      /* 0xBF805114 */
  .extern I2CABSTATCLR     /* 0xBF805114 */
  .extern I2C2STATSET      /* 0xBF805118 */
  .extern I2CABSTATSET     /* 0xBF805118 */
  .extern I2C2STATINV      /* 0xBF80511C */
  .extern I2CABSTATINV     /* 0xBF80511C */
  .extern I2C2ADD          /* 0xBF805120 */
  .extern I2CABADD         /* 0xBF805120 */
  .extern I2C2ADDCLR       /* 0xBF805124 */
  .extern I2CABADDCLR      /* 0xBF805124 */
  .extern I2C2ADDSET       /* 0xBF805128 */
  .extern I2CABADDSET      /* 0xBF805128 */
  .extern I2C2ADDINV       /* 0xBF80512C */
  .extern I2CABADDINV      /* 0xBF80512C */
  .extern I2C2MSK          /* 0xBF805130 */
  .extern I2CABMSK         /* 0xBF805130 */
  .extern I2C2MSKCLR       /* 0xBF805134 */
  .extern I2CABMSKCLR      /* 0xBF805134 */
  .extern I2C2MSKSET       /* 0xBF805138 */
  .extern I2CABMSKSET      /* 0xBF805138 */
  .extern I2C2MSKINV       /* 0xBF80513C */
  .extern I2CABMSKINV      /* 0xBF80513C */
  .extern I2C2BRG          /* 0xBF805140 */
  .extern I2CABBRG         /* 0xBF805140 */
  .extern I2C2BRGCLR       /* 0xBF805144 */
  .extern I2CABBRGCLR      /* 0xBF805144 */
  .extern I2C2BRGSET       /* 0xBF805148 */
  .extern I2CABBRGSET      /* 0xBF805148 */
  .extern I2C2BRGINV       /* 0xBF80514C */
  .extern I2CABBRGINV      /* 0xBF80514C */
  .extern I2C2TRN          /* 0xBF805150 */
  .extern I2CABTRN         /* 0xBF805150 */
  .extern I2C2TRNCLR       /* 0xBF805154 */
  .extern I2CABTRNCLR      /* 0xBF805154 */
  .extern I2C2TRNSET       /* 0xBF805158 */
  .extern I2CABTRNSET      /* 0xBF805158 */
  .extern I2C2TRNINV       /* 0xBF80515C */
  .extern I2CABTRNINV      /* 0xBF80515C */
  .extern I2C2RCV          /* 0xBF805160 */
  .extern I2CABRCV         /* 0xBF805160 */
  .extern SPI1CON          /* 0xBF805800 */
  .extern SPI1CONCLR       /* 0xBF805804 */
  .extern SPI1CONSET       /* 0xBF805808 */
  .extern SPI1CONINV       /* 0xBF80580C */
  .extern SPI1STAT         /* 0xBF805810 */
  .extern SPI1STATCLR      /* 0xBF805814 */
  .extern SPI1STATSET      /* 0xBF805818 */
  .extern SPI1STATINV      /* 0xBF80581C */
  .extern SPI1BUF          /* 0xBF805820 */
  .extern SPI1BRG          /* 0xBF805830 */
  .extern SPI1BRGCLR       /* 0xBF805834 */
  .extern SPI1BRGSET       /* 0xBF805838 */
  .extern SPI1BRGINV       /* 0xBF80583C */
  .extern SPI1CON2         /* 0xBF805840 */
  .extern SPI1CON2CLR      /* 0xBF805844 */
  .extern SPI1CON2SET      /* 0xBF805848 */
  .extern SPI1CON2INV      /* 0xBF80584C */
  .extern SPI2CON          /* 0xBF805A00 */
  .extern SPI2CONCLR       /* 0xBF805A04 */
  .extern SPI2CONSET       /* 0xBF805A08 */
  .extern SPI2CONINV       /* 0xBF805A0C */
  .extern SPI2STAT         /* 0xBF805A10 */
  .extern SPI2STATCLR      /* 0xBF805A14 */
  .extern SPI2STATSET      /* 0xBF805A18 */
  .extern SPI2STATINV      /* 0xBF805A1C */
  .extern SPI2BUF          /* 0xBF805A20 */
  .extern SPI2BRG          /* 0xBF805A30 */
  .extern SPI2BRGCLR       /* 0xBF805A34 */
  .extern SPI2BRGSET       /* 0xBF805A38 */
  .extern SPI2BRGINV       /* 0xBF805A3C */
  .extern SPI2CON2         /* 0xBF805A40 */
  .extern SPI2CON2CLR      /* 0xBF805A44 */
  .extern SPI2CON2SET      /* 0xBF805A48 */
  .extern SPI2CON2INV      /* 0xBF805A4C */
  .extern U1MODE           /* 0xBF806000 */
  .extern UDCMODE          /* 0xBF806000 */
  .extern U1MODECLR        /* 0xBF806004 */
  .extern UDCMODECLR       /* 0xBF806004 */
  .extern U1MODESET        /* 0xBF806008 */
  .extern UDCMODESET       /* 0xBF806008 */
  .extern U1MODEINV        /* 0xBF80600C */
  .extern UDCMODEINV       /* 0xBF80600C */
  .extern U1STA            /* 0xBF806010 */
  .extern UDCSTA           /* 0xBF806010 */
  .extern U1STACLR         /* 0xBF806014 */
  .extern UDCSTACLR        /* 0xBF806014 */
  .extern U1STASET         /* 0xBF806018 */
  .extern UDCSTASET        /* 0xBF806018 */
  .extern U1STAINV         /* 0xBF80601C */
  .extern UDCSTAINV        /* 0xBF80601C */
  .extern U1TXREG          /* 0xBF806020 */
  .extern UDCTXREG         /* 0xBF806020 */
  .extern U1RXREG          /* 0xBF806030 */
  .extern UDCRXREG         /* 0xBF806030 */
  .extern U1BRG            /* 0xBF806040 */
  .extern UDCBRG           /* 0xBF806040 */
  .extern U1BRGCLR         /* 0xBF806044 */
  .extern UDCBRGCLR        /* 0xBF806044 */
  .extern U1BRGSET         /* 0xBF806048 */
  .extern UDCBRGSET        /* 0xBF806048 */
  .extern U1BRGINV         /* 0xBF80604C */
  .extern UDCBRGINV        /* 0xBF80604C */
  .extern U2MODE           /* 0xBF806200 */
  .extern U8932MODE        /* 0xBF806200 */
  .extern U2MODECLR        /* 0xBF806204 */
  .extern U8932MODECLR     /* 0xBF806204 */
  .extern U2MODESET        /* 0xBF806208 */
  .extern U8932MODESET     /* 0xBF806208 */
  .extern U2MODEINV        /* 0xBF80620C */
  .extern U8932MODEINV     /* 0xBF80620C */
  .extern U2STA            /* 0xBF806210 */
  .extern U8932STA         /* 0xBF806210 */
  .extern U2STACLR         /* 0xBF806214 */
  .extern U8932STACLR      /* 0xBF806214 */
  .extern U2STASET         /* 0xBF806218 */
  .extern U8932STASET      /* 0xBF806218 */
  .extern U2STAINV         /* 0xBF80621C */
  .extern U8932STAINV      /* 0xBF80621C */
  .extern U2TXREG          /* 0xBF806220 */
  .extern U8932TXREG       /* 0xBF806220 */
  .extern U2RXREG          /* 0xBF806230 */
  .extern U8932RXREG       /* 0xBF806230 */
  .extern U2BRG            /* 0xBF806240 */
  .extern U8932BRG         /* 0xBF806240 */
  .extern U2BRGCLR         /* 0xBF806244 */
  .extern U8932BRGCLR      /* 0xBF806244 */
  .extern U2BRGSET         /* 0xBF806248 */
  .extern U8932BRGSET      /* 0xBF806248 */
  .extern U2BRGINV         /* 0xBF80624C */
  .extern U8932BRGINV      /* 0xBF80624C */
  .extern U3MODE           /* 0xBF806400 */
  .extern U39MODE          /* 0xBF806400 */
  .extern U3MODECLR        /* 0xBF806404 */
  .extern U39MODECLR       /* 0xBF806404 */
  .extern U3MODESET        /* 0xBF806408 */
  .extern U39MODESET       /* 0xBF806408 */
  .extern U3MODEINV        /* 0xBF80640C */
  .extern U39MODEINV       /* 0xBF80640C */
  .extern U3STA            /* 0xBF806410 */
  .extern U39STA           /* 0xBF806410 */
  .extern U3STACLR         /* 0xBF806414 */
  .extern U39STACLR        /* 0xBF806414 */
  .extern U3STASET         /* 0xBF806418 */
  .extern U39STASET        /* 0xBF806418 */
  .extern U3STAINV         /* 0xBF80641C */
  .extern U39STAINV        /* 0xBF80641C */
  .extern U3TXREG          /* 0xBF806420 */
  .extern U39TXREG         /* 0xBF806420 */
  .extern U3RXREG          /* 0xBF806430 */
  .extern U39RXREG         /* 0xBF806430 */
  .extern U3BRG            /* 0xBF806440 */
  .extern U39BRG           /* 0xBF806440 */
  .extern U3BRGCLR         /* 0xBF806444 */
  .extern U39BRGCLR        /* 0xBF806444 */
  .extern U3BRGSET         /* 0xBF806448 */
  .extern U39BRGSET        /* 0xBF806448 */
  .extern U3BRGINV         /* 0xBF80644C */
  .extern U39BRGINV        /* 0xBF80644C */
  .extern U4MODE           /* 0xBF806600 */
  .extern UodMODE          /* 0xBF806600 */
  .extern U4MODECLR        /* 0xBF806604 */
  .extern UodMODECLR       /* 0xBF806604 */
  .extern U4MODESET        /* 0xBF806608 */
  .extern UodMODESET       /* 0xBF806608 */
  .extern U4MODEINV        /* 0xBF80660C */
  .extern UodMODEINV       /* 0xBF80660C */
  .extern U4STA            /* 0xBF806610 */
  .extern UodSTA           /* 0xBF806610 */
  .extern U4STACLR         /* 0xBF806614 */
  .extern UodSTACLR        /* 0xBF806614 */
  .extern U4STASET         /* 0xBF806618 */
  .extern UodSTASET        /* 0xBF806618 */
  .extern U4STAINV         /* 0xBF80661C */
  .extern UodSTAINV        /* 0xBF80661C */
  .extern U4TXREG          /* 0xBF806620 */
  .extern UodTXREG         /* 0xBF806620 */
  .extern U4RXREG          /* 0xBF806630 */
  .extern UodRXREG         /* 0xBF806630 */
  .extern U4BRG            /* 0xBF806640 */
  .extern UodBRG           /* 0xBF806640 */
  .extern U4BRGCLR         /* 0xBF806644 */
  .extern UodBRGCLR        /* 0xBF806644 */
  .extern U4BRGSET         /* 0xBF806648 */
  .extern UodBRGSET        /* 0xBF806648 */
  .extern U4BRGINV         /* 0xBF80664C */
  .extern UodBRGINV        /* 0xBF80664C */
  .extern U5MODE           /* 0xBF806800 */
  .extern UabMODE          /* 0xBF806800 */
  .extern U5MODECLR        /* 0xBF806804 */
  .extern UabMODECLR       /* 0xBF806804 */
  .extern U5MODESET        /* 0xBF806808 */
  .extern UabMODESET       /* 0xBF806808 */
  .extern U5MODEINV        /* 0xBF80680C */
  .extern UabMODEINV       /* 0xBF80680C */
  .extern U5STA            /* 0xBF806810 */
  .extern UabSTA           /* 0xBF806810 */
  .extern U5STACLR         /* 0xBF806814 */
  .extern UabSTACLR        /* 0xBF806814 */
  .extern U5STASET         /* 0xBF806818 */
  .extern UabSTASET        /* 0xBF806818 */
  .extern U5STAINV         /* 0xBF80681C */
  .extern UabSTAINV        /* 0xBF80681C */
  .extern U5TXREG          /* 0xBF806820 */
  .extern UabTXREG         /* 0xBF806820 */
  .extern U5RXREG          /* 0xBF806830 */
  .extern UabRXREG         /* 0xBF806830 */
  .extern U5BRG            /* 0xBF806840 */
  .extern UabBRG           /* 0xBF806840 */
  .extern U5BRGCLR         /* 0xBF806844 */
  .extern UabBRGCLR        /* 0xBF806844 */
  .extern U5BRGSET         /* 0xBF806848 */
  .extern UabBRGSET        /* 0xBF806848 */
  .extern U5BRGINV         /* 0xBF80684C */
  .extern UabBRGINV        /* 0xBF80684C */
  .extern PMCON            /* 0xBF807000 */
  .extern PMCONCLR         /* 0xBF807004 */
  .extern PMCONSET         /* 0xBF807008 */
  .extern PMCONINV         /* 0xBF80700C */
  .extern PMMODE           /* 0xBF807010 */
  .extern PMMODECLR        /* 0xBF807014 */
  .extern PMMODESET        /* 0xBF807018 */
  .extern PMMODEINV        /* 0xBF80701C */
  .extern PMADDR           /* 0xBF807020 */
  .extern PMADDRCLR        /* 0xBF807024 */
  .extern PMADDRSET        /* 0xBF807028 */
  .extern PMADDRINV        /* 0xBF80702C */
  .extern PMDOUT           /* 0xBF807030 */
  .extern PMDOUTCLR        /* 0xBF807034 */
  .extern PMDOUTSET        /* 0xBF807038 */
  .extern PMDOUTINV        /* 0xBF80703C */
  .extern PMDIN            /* 0xBF807040 */
  .extern PMDINCLR         /* 0xBF807044 */
  .extern PMDINSET         /* 0xBF807048 */
  .extern PMDININV         /* 0xBF80704C */
  .extern PMAEN            /* 0xBF807050 */
  .extern PMAENCLR         /* 0xBF807054 */
  .extern PMAENSET         /* 0xBF807058 */
  .extern PMAENINV         /* 0xBF80705C */
  .extern PMSTAT           /* 0xBF807060 */
  .extern PMSTATCLR        /* 0xBF807064 */
  .extern PMSTATSET        /* 0xBF807068 */
  .extern PMSTATINV        /* 0xBF80706C */
  .extern AD1CON1          /* 0xBF809000 */
  .extern AD1CON1CLR       /* 0xBF809004 */
  .extern AD1CON1SET       /* 0xBF809008 */
  .extern AD1CON1INV       /* 0xBF80900C */
  .extern AD1CON2          /* 0xBF809010 */
  .extern AD1CON2CLR       /* 0xBF809014 */
  .extern AD1CON2SET       /* 0xBF809018 */
  .extern AD1CON2INV       /* 0xBF80901C */
  .extern AD1CON3          /* 0xBF809020 */
  .extern AD1CON3CLR       /* 0xBF809024 */
  .extern AD1CON3SET       /* 0xBF809028 */
  .extern AD1CON3INV       /* 0xBF80902C */
  .extern AD1CHS           /* 0xBF809040 */
  .extern AD1CHSCLR        /* 0xBF809044 */
  .extern AD1CHSSET        /* 0xBF809048 */
  .extern AD1CHSINV        /* 0xBF80904C */
  .extern AD1CSSL          /* 0xBF809050 */
  .extern AD1CSSLCLR       /* 0xBF809054 */
  .extern AD1CSSLSET       /* 0xBF809058 */
  .extern AD1CSSLINV       /* 0xBF80905C */
  .extern ADC1BUF0         /* 0xBF809070 */
  .extern ADC1BUF1         /* 0xBF809080 */
  .extern ADC1BUF2         /* 0xBF809090 */
  .extern ADC1BUF3         /* 0xBF8090A0 */
  .extern ADC1BUF4         /* 0xBF8090B0 */
  .extern ADC1BUF5         /* 0xBF8090C0 */
  .extern ADC1BUF6         /* 0xBF8090D0 */
  .extern ADC1BUF7         /* 0xBF8090E0 */
  .extern ADC1BUF8         /* 0xBF8090F0 */
  .extern ADC1BUF9         /* 0xBF809100 */
  .extern ADC1BUFA         /* 0xBF809110 */
  .extern ADC1BUFB         /* 0xBF809120 */
  .extern ADC1BUFC         /* 0xBF809130 */
  .extern ADC1BUFD         /* 0xBF809140 */
  .extern ADC1BUFE         /* 0xBF809150 */
  .extern ADC1BUFF         /* 0xBF809160 */
  .extern CVRCON           /* 0xBF809800 */
  .extern CVRCONCLR        /* 0xBF809804 */
  .extern CVRCONSET        /* 0xBF809808 */
  .extern CVRCONINV        /* 0xBF80980C */
  .extern CM1CON           /* 0xBF80A000 */
  .extern CM1CONCLR        /* 0xBF80A004 */
  .extern CM1CONSET        /* 0xBF80A008 */
  .extern CM1CONINV        /* 0xBF80A00C */
  .extern CM2CON           /* 0xBF80A010 */
  .extern CM2CONCLR        /* 0xBF80A014 */
  .extern CM2CONSET        /* 0xBF80A018 */
  .extern CM2CONINV        /* 0xBF80A01C */
  .extern CMSTAT           /* 0xBF80A060 */
  .extern CMSTATCLR        /* 0xBF80A064 */
  .extern CMSTATSET        /* 0xBF80A068 */
  .extern CMSTATINV        /* 0xBF80A06C */
  .extern CTMUCON          /* 0xBF80A200 */
  .extern CTMUCONCLR       /* 0xBF80A204 */
  .extern CTMUCONSET       /* 0xBF80A208 */
  .extern CTMUCONINV       /* 0xBF80A20C */
  .extern OSCCON           /* 0xBF80F000 */
  .extern OSCCONCLR        /* 0xBF80F004 */
  .extern OSCCONSET        /* 0xBF80F008 */
  .extern OSCCONINV        /* 0xBF80F00C */
  .extern OSCTUN           /* 0xBF80F010 */
  .extern OSCTUNCLR        /* 0xBF80F014 */
  .extern OSCTUNSET        /* 0xBF80F018 */
  .extern OSCTUNINV        /* 0xBF80F01C */
  .extern REFOCON          /* 0xBF80F020 */
  .extern REFOCONCLR       /* 0xBF80F024 */
  .extern REFOCONSET       /* 0xBF80F028 */
  .extern REFOCONINV       /* 0xBF80F02C */
  .extern REFOTRIM         /* 0xBF80F030 */
  .extern REFOTRIMCLR      /* 0xBF80F034 */
  .extern REFOTRIMSET      /* 0xBF80F038 */
  .extern REFOTRIMINV      /* 0xBF80F03C */
  .extern CFGCON           /* 0xBF80F200 */
  .extern DDPCON           /* 0xBF80F200 */
  .extern DEVID            /* 0xBF80F220 */
  .extern SYSKEY           /* 0xBF80F230 */
  .extern SYSKEYCLR        /* 0xBF80F234 */
  .extern SYSKEYSET        /* 0xBF80F238 */
  .extern SYSKEYINV        /* 0xBF80F23C */
  .extern PMD1             /* 0xBF80F240 */
  .extern PMD1CLR          /* 0xBF80F244 */
  .extern PMD1SET          /* 0xBF80F248 */
  .extern PMD1INV          /* 0xBF80F24C */
  .extern PMD2             /* 0xBF80F250 */
  .extern PMD2CLR          /* 0xBF80F254 */
  .extern PMD2SET          /* 0xBF80F258 */
  .extern PMD2INV          /* 0xBF80F25C */
  .extern PMD3             /* 0xBF80F260 */
  .extern PMD3CLR          /* 0xBF80F264 */
  .extern PMD3SET          /* 0xBF80F268 */
  .extern PMD3INV          /* 0xBF80F26C */
  .extern PMD4             /* 0xBF80F270 */
  .extern PMD4CLR          /* 0xBF80F274 */
  .extern PMD4SET          /* 0xBF80F278 */
  .extern PMD4INV          /* 0xBF80F27C */
  .extern PMD5             /* 0xBF80F280 */
  .extern PMD5CLR          /* 0xBF80F284 */
  .extern PMD5SET          /* 0xBF80F288 */
  .extern PMD5INV          /* 0xBF80F28C */
  .extern PMD6             /* 0xBF80F290 */
  .extern PMD6CLR          /* 0xBF80F294 */
  .extern PMD6SET          /* 0xBF80F298 */
  .extern PMD6INV          /* 0xBF80F29C */
  .extern NVMCON           /* 0xBF80F400 */
  .extern NVMCONCLR        /* 0xBF80F404 */
  .extern NVMCONSET        /* 0xBF80F408 */
  .extern NVMCONINV        /* 0xBF80F40C */
  .extern NVMKEY           /* 0xBF80F410 */
  .extern NVMADDR          /* 0xBF80F420 */
  .extern NVMADDRCLR       /* 0xBF80F424 */
  .extern NVMADDRSET       /* 0xBF80F428 */
  .extern NVMADDRINV       /* 0xBF80F42C */
  .extern NVMDATA          /* 0xBF80F430 */
  .extern NVMSRCADDR       /* 0xBF80F440 */
  .extern RCON             /* 0xBF80F600 */
  .extern RCONCLR          /* 0xBF80F604 */
  .extern RCONSET          /* 0xBF80F608 */
  .extern RCONINV          /* 0xBF80F60C */
  .extern RSWRST           /* 0xBF80F610 */
  .extern RSWRSTCLR        /* 0xBF80F614 */
  .extern RSWRSTSET        /* 0xBF80F618 */
  .extern RSWRSTINV        /* 0xBF80F61C */
  .extern INT1R            /* 0xBF80FA04 */
  .extern INT2R            /* 0xBF80FA08 */
  .extern INT3R            /* 0xBF80FA0C */
  .extern INT4R            /* 0xBF80FA10 */
  .extern T2CKR            /* 0xBF80FA18 */
  .extern T3CKR            /* 0xBF80FA1C */
  .extern T4CKR            /* 0xBF80FA20 */
  .extern T5CKR            /* 0xBF80FA24 */
  .extern IC1R             /* 0xBF80FA28 */
  .extern IC2R             /* 0xBF80FA2C */
  .extern IC3R             /* 0xBF80FA30 */
  .extern IC4R             /* 0xBF80FA34 */
  .extern IC5R             /* 0xBF80FA38 */
  .extern OCFAR            /* 0xBF80FA48 */
  .extern OCFBR            /* 0xBF80FA4C */
  .extern U1RXR            /* 0xBF80FA50 */
  .extern U1CTSR           /* 0xBF80FA54 */
  .extern U2RXR            /* 0xBF80FA58 */
  .extern U2CTSR           /* 0xBF80FA5C */
  .extern U3RXR            /* 0xBF80FA60 */
  .extern U3CTSR           /* 0xBF80FA64 */
  .extern U4RXR            /* 0xBF80FA68 */
  .extern U4CTSR           /* 0xBF80FA6C */
  .extern U5RXR            /* 0xBF80FA70 */
  .extern U5CTSR           /* 0xBF80FA74 */
  .extern SDI1R            /* 0xBF80FA84 */
  .extern SS1R             /* 0xBF80FA88 */
  .extern SDI2R            /* 0xBF80FA90 */
  .extern SS2R             /* 0xBF80FA94 */
  .extern REFCLKIR         /* 0xBF80FAD0 */
  .extern RPA14R           /* 0xBF80FB38 */
  .extern RPA15R           /* 0xBF80FB3C */
  .extern RPB0R            /* 0xBF80FB40 */
  .extern RPB1R            /* 0xBF80FB44 */
  .extern RPB2R            /* 0xBF80FB48 */
  .extern RPB3R            /* 0xBF80FB4C */
  .extern RPB4R            /* 0xBF80FB50 */
  .extern RPB5R            /* 0xBF80FB54 */
  .extern RPB6R            /* 0xBF80FB58 */
  .extern RPB7R            /* 0xBF80FB5C */
  .extern RPB8R            /* 0xBF80FB60 */
  .extern RPB9R            /* 0xBF80FB64 */
  .extern RPB10R           /* 0xBF80FB68 */
  .extern RPB11R           /* 0xBF80FB6C */
  .extern RPB12R           /* 0xBF80FB70 */
  .extern RPB13R           /* 0xBF80FB74 */
  .extern RPB14R           /* 0xBF80FB78 */
  .extern RPB15R           /* 0xBF80FB7C */
  .extern RPC1R            /* 0xBF80FB84 */
  .extern RPC2R            /* 0xBF80FB88 */
  .extern RPC3R            /* 0xBF80FB8C */
  .extern RPC4R            /* 0xBF80FB90 */
  .extern RPC13R           /* 0xBF80FBB4 */
  .extern RPC14R           /* 0xBF80FBB8 */
  .extern RPD0R            /* 0xBF80FBC0 */
  .extern RPD1R            /* 0xBF80FBC4 */
  .extern RPD2R            /* 0xBF80FBC8 */
  .extern RPD3R            /* 0xBF80FBCC */
  .extern RPD4R            /* 0xBF80FBD0 */
  .extern RPD5R            /* 0xBF80FBD4 */
  .extern RPD8R            /* 0xBF80FBE0 */
  .extern RPD9R            /* 0xBF80FBE4 */
  .extern RPD10R           /* 0xBF80FBE8 */
  .extern RPD11R           /* 0xBF80FBEC */
  .extern RPD12R           /* 0xBF80FBF0 */
  .extern RPD14R           /* 0xBF80FBF8 */
  .extern RPE3R            /* 0xBF80FC0C */
  .extern RPE5R            /* 0xBF80FC14 */
  .extern RPE8R            /* 0xBF80FC20 */
  .extern RPE9R            /* 0xBF80FC24 */
  .extern RPF0R            /* 0xBF80FC40 */
  .extern RPF1R            /* 0xBF80FC44 */
  .extern RPF2R            /* 0xBF80FC48 */
  .extern RPF3R            /* 0xBF80FC4C */
  .extern RPF4R            /* 0xBF80FC50 */
  .extern RPF5R            /* 0xBF80FC54 */
  .extern RPF6R            /* 0xBF80FC58 */
  .extern RPF7R            /* 0xBF80FC5C */
  .extern RPF8R            /* 0xBF80FC60 */
  .extern RPF12R           /* 0xBF80FC70 */
  .extern RPF13R           /* 0xBF80FC74 */
  .extern RPG0R            /* 0xBF80FC80 */
  .extern RPG1R            /* 0xBF80FC84 */
  .extern RPG6R            /* 0xBF80FC98 */
  .extern RPG7R            /* 0xBF80FC9C */
  .extern RPG8R            /* 0xBF80FCA0 */
  .extern RPG9R            /* 0xBF80FCA4 */
  .extern INTCON           /* 0xBF881000 */
  .extern INTCONCLR        /* 0xBF881004 */
  .extern INTCONSET        /* 0xBF881008 */
  .extern INTCONINV        /* 0xBF88100C */
  .extern INTSTAT          /* 0xBF881010 */
  .extern IPTMR            /* 0xBF881020 */
  .extern IPTMRCLR         /* 0xBF881024 */
  .extern IPTMRSET         /* 0xBF881028 */
  .extern IPTMRINV         /* 0xBF88102C */
  .extern IFS0             /* 0xBF881030 */
  .extern IFS0CLR          /* 0xBF881034 */
  .extern IFS0SET          /* 0xBF881038 */
  .extern IFS0INV          /* 0xBF88103C */
  .extern IFS1             /* 0xBF881040 */
  .extern IFS1CLR          /* 0xBF881044 */
  .extern IFS1SET          /* 0xBF881048 */
  .extern IFS1INV          /* 0xBF88104C */
  .extern IFS2             /* 0xBF881050 */
  .extern IFS2CLR          /* 0xBF881054 */
  .extern IFS2SET          /* 0xBF881058 */
  .extern IFS2INV          /* 0xBF88105C */
  .extern IEC0             /* 0xBF881060 */
  .extern IEC0CLR          /* 0xBF881064 */
  .extern IEC0SET          /* 0xBF881068 */
  .extern IEC0INV          /* 0xBF88106C */
  .extern IEC1             /* 0xBF881070 */
  .extern IEC1CLR          /* 0xBF881074 */
  .extern IEC1SET          /* 0xBF881078 */
  .extern IEC1INV          /* 0xBF88107C */
  .extern IEC2             /* 0xBF881080 */
  .extern IEC2CLR          /* 0xBF881084 */
  .extern IEC2SET          /* 0xBF881088 */
  .extern IEC2INV          /* 0xBF88108C */
  .extern IPC0             /* 0xBF881090 */
  .extern IPC0CLR          /* 0xBF881094 */
  .extern IPC0SET          /* 0xBF881098 */
  .extern IPC0INV          /* 0xBF88109C */
  .extern IPC1             /* 0xBF8810A0 */
  .extern IPC1CLR          /* 0xBF8810A4 */
  .extern IPC1SET          /* 0xBF8810A8 */
  .extern IPC1INV          /* 0xBF8810AC */
  .extern IPC2             /* 0xBF8810B0 */
  .extern IPC2CLR          /* 0xBF8810B4 */
  .extern IPC2SET          /* 0xBF8810B8 */
  .extern IPC2INV          /* 0xBF8810BC */
  .extern IPC3             /* 0xBF8810C0 */
  .extern IPC3CLR          /* 0xBF8810C4 */
  .extern IPC3SET          /* 0xBF8810C8 */
  .extern IPC3INV          /* 0xBF8810CC */
  .extern IPC4             /* 0xBF8810D0 */
  .extern IPC4CLR          /* 0xBF8810D4 */
  .extern IPC4SET          /* 0xBF8810D8 */
  .extern IPC4INV          /* 0xBF8810DC */
  .extern IPC5             /* 0xBF8810E0 */
  .extern IPC5CLR          /* 0xBF8810E4 */
  .extern IPC5SET          /* 0xBF8810E8 */
  .extern IPC5INV          /* 0xBF8810EC */
  .extern IPC6             /* 0xBF8810F0 */
  .extern IPC6CLR          /* 0xBF8810F4 */
  .extern IPC6SET          /* 0xBF8810F8 */
  .extern IPC6INV          /* 0xBF8810FC */
  .extern IPC7             /* 0xBF881100 */
  .extern IPC7CLR          /* 0xBF881104 */
  .extern IPC7SET          /* 0xBF881108 */
  .extern IPC7INV          /* 0xBF88110C */
  .extern IPC8             /* 0xBF881110 */
  .extern IPC8CLR          /* 0xBF881114 */
  .extern IPC8SET          /* 0xBF881118 */
  .extern IPC8INV          /* 0xBF88111C */
  .extern IPC9             /* 0xBF881120 */
  .extern IPC9CLR          /* 0xBF881124 */
  .extern IPC9SET          /* 0xBF881128 */
  .extern IPC9INV          /* 0xBF88112C */
  .extern IPC10            /* 0xBF881130 */
  .extern IPC10CLR         /* 0xBF881134 */
  .extern IPC10SET         /* 0xBF881138 */
  .extern IPC10INV         /* 0xBF88113C */
  .extern IPC11            /* 0xBF881140 */
  .extern IPC11CLR         /* 0xBF881144 */
  .extern IPC11SET         /* 0xBF881148 */
  .extern IPC11INV         /* 0xBF88114C */
  .extern BMXCON           /* 0xBF882000 */
  .extern BMXCONCLR        /* 0xBF882004 */
  .extern BMXCONSET        /* 0xBF882008 */
  .extern BMXCONINV        /* 0xBF88200C */
  .extern BMXDKPBA         /* 0xBF882010 */
  .extern BMXDKPBACLR      /* 0xBF882014 */
  .extern BMXDKPBASET      /* 0xBF882018 */
  .extern BMXDKPBAINV      /* 0xBF88201C */
  .extern BMXDUDBA         /* 0xBF882020 */
  .extern BMXDUDBACLR      /* 0xBF882024 */
  .extern BMXDUDBASET      /* 0xBF882028 */
  .extern BMXDUDBAINV      /* 0xBF88202C */
  .extern BMXDUPBA         /* 0xBF882030 */
  .extern BMXDUPBACLR      /* 0xBF882034 */
  .extern BMXDUPBASET      /* 0xBF882038 */
  .extern BMXDUPBAINV      /* 0xBF88203C */
  .extern BMXDRMSZ         /* 0xBF882040 */
  .extern BMXPUPBA         /* 0xBF882050 */
  .extern BMXPUPBACLR      /* 0xBF882054 */
  .extern BMXPUPBASET      /* 0xBF882058 */
  .extern BMXPUPBAINV      /* 0xBF88205C */
  .extern BMXPFMSZ         /* 0xBF882060 */
  .extern BMXBOOTSZ        /* 0xBF882070 */
  .extern DMACON           /* 0xBF883000 */
  .extern DMACONCLR        /* 0xBF883004 */
  .extern DMACONSET        /* 0xBF883008 */
  .extern DMACONINV        /* 0xBF88300C */
  .extern DMASTAT          /* 0xBF883010 */
  .extern DMASTATCLR       /* 0xBF883014 */
  .extern DMASTATSET       /* 0xBF883018 */
  .extern DMASTATINV       /* 0xBF88301C */
  .extern DMAADDR          /* 0xBF883020 */
  .extern DMAADDRCLR       /* 0xBF883024 */
  .extern DMAADDRSET       /* 0xBF883028 */
  .extern DMAADDRINV       /* 0xBF88302C */
  .extern DCRCCON          /* 0xBF883030 */
  .extern DCRCCONCLR       /* 0xBF883034 */
  .extern DCRCCONSET       /* 0xBF883038 */
  .extern DCRCCONINV       /* 0xBF88303C */
  .extern DCRCDATA         /* 0xBF883040 */
  .extern DCRCDATACLR      /* 0xBF883044 */
  .extern DCRCDATASET      /* 0xBF883048 */
  .extern DCRCDATAINV      /* 0xBF88304C */
  .extern DCRCXOR          /* 0xBF883050 */
  .extern DCRCXORCLR       /* 0xBF883054 */
  .extern DCRCXORSET       /* 0xBF883058 */
  .extern DCRCXORINV       /* 0xBF88305C */
  .extern DCH0CON          /* 0xBF883060 */
  .extern DCH0CONCLR       /* 0xBF883064 */
  .extern DCH0CONSET       /* 0xBF883068 */
  .extern DCH0CONINV       /* 0xBF88306C */
  .extern DCH0ECON         /* 0xBF883070 */
  .extern DCH0ECONCLR      /* 0xBF883074 */
  .extern DCH0ECONSET      /* 0xBF883078 */
  .extern DCH0ECONINV      /* 0xBF88307C */
  .extern DCH0INT          /* 0xBF883080 */
  .extern DCH0INTCLR       /* 0xBF883084 */
  .extern DCH0INTSET       /* 0xBF883088 */
  .extern DCH0INTINV       /* 0xBF88308C */
  .extern DCH0SSA          /* 0xBF883090 */
  .extern DCH0SSACLR       /* 0xBF883094 */
  .extern DCH0SSASET       /* 0xBF883098 */
  .extern DCH0SSAINV       /* 0xBF88309C */
  .extern DCH0DSA          /* 0xBF8830A0 */
  .extern DCH0DSACLR       /* 0xBF8830A4 */
  .extern DCH0DSASET       /* 0xBF8830A8 */
  .extern DCH0DSAINV       /* 0xBF8830AC */
  .extern DCH0SSIZ         /* 0xBF8830B0 */
  .extern DCH0SSIZCLR      /* 0xBF8830B4 */
  .extern DCH0SSIZSET      /* 0xBF8830B8 */
  .extern DCH0SSIZINV      /* 0xBF8830BC */
  .extern DCH0DSIZ         /* 0xBF8830C0 */
  .extern DCH0DSIZCLR      /* 0xBF8830C4 */
  .extern DCH0DSIZSET      /* 0xBF8830C8 */
  .extern DCH0DSIZINV      /* 0xBF8830CC */
  .extern DCH0SPTR         /* 0xBF8830D0 */
  .extern DCH0SPTRCLR      /* 0xBF8830D4 */
  .extern DCH0SPTRSET      /* 0xBF8830D8 */
  .extern DCH0SPTRINV      /* 0xBF8830DC */
  .extern DCH0DPTR         /* 0xBF8830E0 */
  .extern DCH0DPTRCLR      /* 0xBF8830E4 */
  .extern DCH0DPTRSET      /* 0xBF8830E8 */
  .extern DCH0DPTRINV      /* 0xBF8830EC */
  .extern DCH0CSIZ         /* 0xBF8830F0 */
  .extern DCH0CSIZCLR      /* 0xBF8830F4 */
  .extern DCH0CSIZSET      /* 0xBF8830F8 */
  .extern DCH0CSIZINV      /* 0xBF8830FC */
  .extern DCH0CPTR         /* 0xBF883100 */
  .extern DCH0CPTRCLR      /* 0xBF883104 */
  .extern DCH0CPTRSET      /* 0xBF883108 */
  .extern DCH0CPTRINV      /* 0xBF88310C */
  .extern DCH0DAT          /* 0xBF883110 */
  .extern DCH0DATCLR       /* 0xBF883114 */
  .extern DCH0DATSET       /* 0xBF883118 */
  .extern DCH0DATINV       /* 0xBF88311C */
  .extern DCH1CON          /* 0xBF883120 */
  .extern DCH1CONCLR       /* 0xBF883124 */
  .extern DCH1CONSET       /* 0xBF883128 */
  .extern DCH1CONINV       /* 0xBF88312C */
  .extern DCH1ECON         /* 0xBF883130 */
  .extern DCH1ECONCLR      /* 0xBF883134 */
  .extern DCH1ECONSET      /* 0xBF883138 */
  .extern DCH1ECONINV      /* 0xBF88313C */
  .extern DCH1INT          /* 0xBF883140 */
  .extern DCH1INTCLR       /* 0xBF883144 */
  .extern DCH1INTSET       /* 0xBF883148 */
  .extern DCH1INTINV       /* 0xBF88314C */
  .extern DCH1SSA          /* 0xBF883150 */
  .extern DCH1SSACLR       /* 0xBF883154 */
  .extern DCH1SSASET       /* 0xBF883158 */
  .extern DCH1SSAINV       /* 0xBF88315C */
  .extern DCH1DSA          /* 0xBF883160 */
  .extern DCH1DSACLR       /* 0xBF883164 */
  .extern DCH1DSASET       /* 0xBF883168 */
  .extern DCH1DSAINV       /* 0xBF88316C */
  .extern DCH1SSIZ         /* 0xBF883170 */
  .extern DCH1SSIZCLR      /* 0xBF883174 */
  .extern DCH1SSIZSET      /* 0xBF883178 */
  .extern DCH1SSIZINV      /* 0xBF88317C */
  .extern DCH1DSIZ         /* 0xBF883180 */
  .extern DCH1DSIZCLR      /* 0xBF883184 */
  .extern DCH1DSIZSET      /* 0xBF883188 */
  .extern DCH1DSIZINV      /* 0xBF88318C */
  .extern DCH1SPTR         /* 0xBF883190 */
  .extern DCH1SPTRCLR      /* 0xBF883194 */
  .extern DCH1SPTRSET      /* 0xBF883198 */
  .extern DCH1SPTRINV      /* 0xBF88319C */
  .extern DCH1DPTR         /* 0xBF8831A0 */
  .extern DCH1DPTRCLR      /* 0xBF8831A4 */
  .extern DCH1DPTRSET      /* 0xBF8831A8 */
  .extern DCH1DPTRINV      /* 0xBF8831AC */
  .extern DCH1CSIZ         /* 0xBF8831B0 */
  .extern DCH1CSIZCLR      /* 0xBF8831B4 */
  .extern DCH1CSIZSET      /* 0xBF8831B8 */
  .extern DCH1CSIZINV      /* 0xBF8831BC */
  .extern DCH1CPTR         /* 0xBF8831C0 */
  .extern DCH1CPTRCLR      /* 0xBF8831C4 */
  .extern DCH1CPTRSET      /* 0xBF8831C8 */
  .extern DCH1CPTRINV      /* 0xBF8831CC */
  .extern DCH1DAT          /* 0xBF8831D0 */
  .extern DCH1DATCLR       /* 0xBF8831D4 */
  .extern DCH1DATSET       /* 0xBF8831D8 */
  .extern DCH1DATINV       /* 0xBF8831DC */
  .extern DCH2CON          /* 0xBF8831E0 */
  .extern DCH2CONCLR       /* 0xBF8831E4 */
  .extern DCH2CONSET       /* 0xBF8831E8 */
  .extern DCH2CONINV       /* 0xBF8831EC */
  .extern DCH2ECON         /* 0xBF8831F0 */
  .extern DCH2ECONCLR      /* 0xBF8831F4 */
  .extern DCH2ECONSET      /* 0xBF8831F8 */
  .extern DCH2ECONINV      /* 0xBF8831FC */
  .extern DCH2INT          /* 0xBF883200 */
  .extern DCH2INTCLR       /* 0xBF883204 */
  .extern DCH2INTSET       /* 0xBF883208 */
  .extern DCH2INTINV       /* 0xBF88320C */
  .extern DCH2SSA          /* 0xBF883210 */
  .extern DCH2SSACLR       /* 0xBF883214 */
  .extern DCH2SSASET       /* 0xBF883218 */
  .extern DCH2SSAINV       /* 0xBF88321C */
  .extern DCH2DSA          /* 0xBF883220 */
  .extern DCH2DSACLR       /* 0xBF883224 */
  .extern DCH2DSASET       /* 0xBF883228 */
  .extern DCH2DSAINV       /* 0xBF88322C */
  .extern DCH2SSIZ         /* 0xBF883230 */
  .extern DCH2SSIZCLR      /* 0xBF883234 */
  .extern DCH2SSIZSET      /* 0xBF883238 */
  .extern DCH2SSIZINV      /* 0xBF88323C */
  .extern DCH2DSIZ         /* 0xBF883240 */
  .extern DCH2DSIZCLR      /* 0xBF883244 */
  .extern DCH2DSIZSET      /* 0xBF883248 */
  .extern DCH2DSIZINV      /* 0xBF88324C */
  .extern DCH2SPTR         /* 0xBF883250 */
  .extern DCH2SPTRCLR      /* 0xBF883254 */
  .extern DCH2SPTRSET      /* 0xBF883258 */
  .extern DCH2SPTRINV      /* 0xBF88325C */
  .extern DCH2DPTR         /* 0xBF883260 */
  .extern DCH2DPTRCLR      /* 0xBF883264 */
  .extern DCH2DPTRSET      /* 0xBF883268 */
  .extern DCH2DPTRINV      /* 0xBF88326C */
  .extern DCH2CSIZ         /* 0xBF883270 */
  .extern DCH2CSIZCLR      /* 0xBF883274 */
  .extern DCH2CSIZSET      /* 0xBF883278 */
  .extern DCH2CSIZINV      /* 0xBF88327C */
  .extern DCH2CPTR         /* 0xBF883280 */
  .extern DCH2CPTRCLR      /* 0xBF883284 */
  .extern DCH2CPTRSET      /* 0xBF883288 */
  .extern DCH2CPTRINV      /* 0xBF88328C */
  .extern DCH2DAT          /* 0xBF883290 */
  .extern DCH2DATCLR       /* 0xBF883294 */
  .extern DCH2DATSET       /* 0xBF883298 */
  .extern DCH2DATINV       /* 0xBF88329C */
  .extern DCH3CON          /* 0xBF8832A0 */
  .extern DCH3CONCLR       /* 0xBF8832A4 */
  .extern DCH3CONSET       /* 0xBF8832A8 */
  .extern DCH3CONINV       /* 0xBF8832AC */
  .extern DCH3ECON         /* 0xBF8832B0 */
  .extern DCH3ECONCLR      /* 0xBF8832B4 */
  .extern DCH3ECONSET      /* 0xBF8832B8 */
  .extern DCH3ECONINV      /* 0xBF8832BC */
  .extern DCH3INT          /* 0xBF8832C0 */
  .extern DCH3INTCLR       /* 0xBF8832C4 */
  .extern DCH3INTSET       /* 0xBF8832C8 */
  .extern DCH3INTINV       /* 0xBF8832CC */
  .extern DCH3SSA          /* 0xBF8832D0 */
  .extern DCH3SSACLR       /* 0xBF8832D4 */
  .extern DCH3SSASET       /* 0xBF8832D8 */
  .extern DCH3SSAINV       /* 0xBF8832DC */
  .extern DCH3DSA          /* 0xBF8832E0 */
  .extern DCH3DSACLR       /* 0xBF8832E4 */
  .extern DCH3DSASET       /* 0xBF8832E8 */
  .extern DCH3DSAINV       /* 0xBF8832EC */
  .extern DCH3SSIZ         /* 0xBF8832F0 */
  .extern DCH3SSIZCLR      /* 0xBF8832F4 */
  .extern DCH3SSIZSET      /* 0xBF8832F8 */
  .extern DCH3SSIZINV      /* 0xBF8832FC */
  .extern DCH3DSIZ         /* 0xBF883300 */
  .extern DCH3DSIZCLR      /* 0xBF883304 */
  .extern DCH3DSIZSET      /* 0xBF883308 */
  .extern DCH3DSIZINV      /* 0xBF88330C */
  .extern DCH3SPTR         /* 0xBF883310 */
  .extern DCH3SPTRCLR      /* 0xBF883314 */
  .extern DCH3SPTRSET      /* 0xBF883318 */
  .extern DCH3SPTRINV      /* 0xBF88331C */
  .extern DCH3DPTR         /* 0xBF883320 */
  .extern DCH3DPTRCLR      /* 0xBF883324 */
  .extern DCH3DPTRSET      /* 0xBF883328 */
  .extern DCH3DPTRINV      /* 0xBF88332C */
  .extern DCH3CSIZ         /* 0xBF883330 */
  .extern DCH3CSIZCLR      /* 0xBF883334 */
  .extern DCH3CSIZSET      /* 0xBF883338 */
  .extern DCH3CSIZINV      /* 0xBF88333C */
  .extern DCH3CPTR         /* 0xBF883340 */
  .extern DCH3CPTRCLR      /* 0xBF883344 */
  .extern DCH3CPTRSET      /* 0xBF883348 */
  .extern DCH3CPTRINV      /* 0xBF88334C */
  .extern DCH3DAT          /* 0xBF883350 */
  .extern DCH3DATCLR       /* 0xBF883354 */
  .extern DCH3DATSET       /* 0xBF883358 */
  .extern DCH3DATINV       /* 0xBF88335C */
  .extern CHECON           /* 0xBF884000 */
  .extern CHECONCLR        /* 0xBF884004 */
  .extern CHECONSET        /* 0xBF884008 */
  .extern CHECONINV        /* 0xBF88400C */
  .extern CHEACC           /* 0xBF884010 */
  .extern CHEACCCLR        /* 0xBF884014 */
  .extern CHEACCSET        /* 0xBF884018 */
  .extern CHEACCINV        /* 0xBF88401C */
  .extern CHETAG           /* 0xBF884020 */
  .extern CHETAGCLR        /* 0xBF884024 */
  .extern CHETAGSET        /* 0xBF884028 */
  .extern CHETAGINV        /* 0xBF88402C */
  .extern CHEMSK           /* 0xBF884030 */
  .extern CHEMSKCLR        /* 0xBF884034 */
  .extern CHEMSKSET        /* 0xBF884038 */
  .extern CHEMSKINV        /* 0xBF88403C */
  .extern CHEW0            /* 0xBF884040 */
  .extern CHEW1            /* 0xBF884050 */
  .extern CHEW2            /* 0xBF884060 */
  .extern CHEW3            /* 0xBF884070 */
  .extern CHELRU           /* 0xBF884080 */
  .extern CHEHIT           /* 0xBF884090 */
  .extern CHEMIS           /* 0xBF8840A0 */
  .extern RESERVED1        /* 0xBF8840B0 */
  .extern CHEPFABT         /* 0xBF8840C0 */
  .extern ANSELA           /* 0xBF886000 */
  .extern ANSELACLR        /* 0xBF886004 */
  .extern ANSELASET        /* 0xBF886008 */
  .extern ANSELAINV        /* 0xBF88600C */
  .extern TRISA            /* 0xBF886010 */
  .extern TRISACLR         /* 0xBF886014 */
  .extern TRISASET         /* 0xBF886018 */
  .extern TRISAINV         /* 0xBF88601C */
  .extern PORTA            /* 0xBF886020 */
  .extern PORTACLR         /* 0xBF886024 */
  .extern PORTASET         /* 0xBF886028 */
  .extern PORTAINV         /* 0xBF88602C */
  .extern LATA             /* 0xBF886030 */
  .extern LATACLR          /* 0xBF886034 */
  .extern LATASET          /* 0xBF886038 */
  .extern LATAINV          /* 0xBF88603C */
  .extern ODCA             /* 0xBF886040 */
  .extern ODCACLR          /* 0xBF886044 */
  .extern ODCASET          /* 0xBF886048 */
  .extern ODCAINV          /* 0xBF88604C */
  .extern CNPUA            /* 0xBF886050 */
  .extern CNPUACLR         /* 0xBF886054 */
  .extern CNPUASET         /* 0xBF886058 */
  .extern CNPUAINV         /* 0xBF88605C */
  .extern CNPDA            /* 0xBF886060 */
  .extern CNPDACLR         /* 0xBF886064 */
  .extern CNPDASET         /* 0xBF886068 */
  .extern CNPDAINV         /* 0xBF88606C */
  .extern CNCONA           /* 0xBF886070 */
  .extern CNCONACLR        /* 0xBF886074 */
  .extern CNCONASET        /* 0xBF886078 */
  .extern CNCONAINV        /* 0xBF88607C */
  .extern CNENA            /* 0xBF886080 */
  .extern CNENACLR         /* 0xBF886084 */
  .extern CNENASET         /* 0xBF886088 */
  .extern CNENAINV         /* 0xBF88608C */
  .extern CNSTATA          /* 0xBF886090 */
  .extern CNSTATACLR       /* 0xBF886094 */
  .extern CNSTATASET       /* 0xBF886098 */
  .extern CNSTATAINV       /* 0xBF88609C */
  .extern ANSELB           /* 0xBF886100 */
  .extern ANSELBCLR        /* 0xBF886104 */
  .extern ANSELBSET        /* 0xBF886108 */
  .extern ANSELBINV        /* 0xBF88610C */
  .extern TRISB            /* 0xBF886110 */
  .extern TRISBCLR         /* 0xBF886114 */
  .extern TRISBSET         /* 0xBF886118 */
  .extern TRISBINV         /* 0xBF88611C */
  .extern PORTB            /* 0xBF886120 */
  .extern PORTBCLR         /* 0xBF886124 */
  .extern PORTBSET         /* 0xBF886128 */
  .extern PORTBINV         /* 0xBF88612C */
  .extern LATB             /* 0xBF886130 */
  .extern LATBCLR          /* 0xBF886134 */
  .extern LATBSET          /* 0xBF886138 */
  .extern LATBINV          /* 0xBF88613C */
  .extern ODCB             /* 0xBF886140 */
  .extern ODCBCLR          /* 0xBF886144 */
  .extern ODCBSET          /* 0xBF886148 */
  .extern ODCBINV          /* 0xBF88614C */
  .extern CNPUB            /* 0xBF886150 */
  .extern CNPUBCLR         /* 0xBF886154 */
  .extern CNPUBSET         /* 0xBF886158 */
  .extern CNPUBINV         /* 0xBF88615C */
  .extern CNPDB            /* 0xBF886160 */
  .extern CNPDBCLR         /* 0xBF886164 */
  .extern CNPDBSET         /* 0xBF886168 */
  .extern CNPDBINV         /* 0xBF88616C */
  .extern CNCONB           /* 0xBF886170 */
  .extern CNCONBCLR        /* 0xBF886174 */
  .extern CNCONBSET        /* 0xBF886178 */
  .extern CNCONBINV        /* 0xBF88617C */
  .extern CNENB            /* 0xBF886180 */
  .extern CNENBCLR         /* 0xBF886184 */
  .extern CNENBSET         /* 0xBF886188 */
  .extern CNENBINV         /* 0xBF88618C */
  .extern CNSTATB          /* 0xBF886190 */
  .extern CNSTATBCLR       /* 0xBF886194 */
  .extern CNSTATBSET       /* 0xBF886198 */
  .extern CNSTATBINV       /* 0xBF88619C */
  .extern ANSELC           /* 0xBF886200 */
  .extern ANSELCCLR        /* 0xBF886204 */
  .extern ANSELCSET        /* 0xBF886208 */
  .extern ANSELCINV        /* 0xBF88620C */
  .extern TRISC            /* 0xBF886210 */
  .extern TRISCCLR         /* 0xBF886214 */
  .extern TRISCSET         /* 0xBF886218 */
  .extern TRISCINV         /* 0xBF88621C */
  .extern PORTC            /* 0xBF886220 */
  .extern PORTCCLR         /* 0xBF886224 */
  .extern PORTCSET         /* 0xBF886228 */
  .extern PORTCINV         /* 0xBF88622C */
  .extern LATC             /* 0xBF886230 */
  .extern LATCCLR          /* 0xBF886234 */
  .extern LATCSET          /* 0xBF886238 */
  .extern LATCINV          /* 0xBF88623C */
  .extern ODCC             /* 0xBF886240 */
  .extern ODCCCLR          /* 0xBF886244 */
  .extern ODCCSET          /* 0xBF886248 */
  .extern ODCCINV          /* 0xBF88624C */
  .extern CNPUC            /* 0xBF886250 */
  .extern CNPUCCLR         /* 0xBF886254 */
  .extern CNPUCSET         /* 0xBF886258 */
  .extern CNPUCINV         /* 0xBF88625C */
  .extern CNPDC            /* 0xBF886260 */
  .extern CNPDCCLR         /* 0xBF886264 */
  .extern CNPDCSET         /* 0xBF886268 */
  .extern CNPDCINV         /* 0xBF88626C */
  .extern CNCONC           /* 0xBF886270 */
  .extern CNCONCCLR        /* 0xBF886274 */
  .extern CNCONCSET        /* 0xBF886278 */
  .extern CNCONCINV        /* 0xBF88627C */
  .extern CNENC            /* 0xBF886280 */
  .extern CNENCCLR         /* 0xBF886284 */
  .extern CNENCSET         /* 0xBF886288 */
  .extern CNENCINV         /* 0xBF88628C */
  .extern CNSTATC          /* 0xBF886290 */
  .extern CNSTATCCLR       /* 0xBF886294 */
  .extern CNSTATCSET       /* 0xBF886298 */
  .extern CNSTATCINV       /* 0xBF88629C */
  .extern ANSELD           /* 0xBF886300 */
  .extern ANSELDCLR        /* 0xBF886304 */
  .extern ANSELDSET        /* 0xBF886308 */
  .extern ANSELDINV        /* 0xBF88630C */
  .extern TRISD            /* 0xBF886310 */
  .extern TRISDCLR         /* 0xBF886314 */
  .extern TRISDSET         /* 0xBF886318 */
  .extern TRISDINV         /* 0xBF88631C */
  .extern PORTD            /* 0xBF886320 */
  .extern PORTDCLR         /* 0xBF886324 */
  .extern PORTDSET         /* 0xBF886328 */
  .extern PORTDINV         /* 0xBF88632C */
  .extern LATD             /* 0xBF886330 */
  .extern LATDCLR          /* 0xBF886334 */
  .extern LATDSET          /* 0xBF886338 */
  .extern LATDINV          /* 0xBF88633C */
  .extern ODCD             /* 0xBF886340 */
  .extern ODCDCLR          /* 0xBF886344 */
  .extern ODCDSET          /* 0xBF886348 */
  .extern ODCDINV          /* 0xBF88634C */
  .extern CNPUD            /* 0xBF886350 */
  .extern CNPUDCLR         /* 0xBF886354 */
  .extern CNPUDSET         /* 0xBF886358 */
  .extern CNPUDINV         /* 0xBF88635C */
  .extern CNPDD            /* 0xBF886360 */
  .extern CNPDDCLR         /* 0xBF886364 */
  .extern CNPDDSET         /* 0xBF886368 */
  .extern CNPDDINV         /* 0xBF88636C */
  .extern CNCOND           /* 0xBF886370 */
  .extern CNCONDCLR        /* 0xBF886374 */
  .extern CNCONDSET        /* 0xBF886378 */
  .extern CNCONDINV        /* 0xBF88637C */
  .extern CNEND            /* 0xBF886380 */
  .extern CNENDCLR         /* 0xBF886384 */
  .extern CNENDSET         /* 0xBF886388 */
  .extern CNENDINV         /* 0xBF88638C */
  .extern CNSTATD          /* 0xBF886390 */
  .extern CNSTATDCLR       /* 0xBF886394 */
  .extern CNSTATDSET       /* 0xBF886398 */
  .extern CNSTATDINV       /* 0xBF88639C */
  .extern ANSELE           /* 0xBF886400 */
  .extern ANSELECLR        /* 0xBF886404 */
  .extern ANSELESET        /* 0xBF886408 */
  .extern ANSELEINV        /* 0xBF88640C */
  .extern TRISE            /* 0xBF886410 */
  .extern TRISECLR         /* 0xBF886414 */
  .extern TRISESET         /* 0xBF886418 */
  .extern TRISEINV         /* 0xBF88641C */
  .extern PORTE            /* 0xBF886420 */
  .extern PORTECLR         /* 0xBF886424 */
  .extern PORTESET         /* 0xBF886428 */
  .extern PORTEINV         /* 0xBF88642C */
  .extern LATE             /* 0xBF886430 */
  .extern LATECLR          /* 0xBF886434 */
  .extern LATESET          /* 0xBF886438 */
  .extern LATEINV          /* 0xBF88643C */
  .extern ODCE             /* 0xBF886440 */
  .extern ODCECLR          /* 0xBF886444 */
  .extern ODCESET          /* 0xBF886448 */
  .extern ODCEINV          /* 0xBF88644C */
  .extern CNPUE            /* 0xBF886450 */
  .extern CNPUECLR         /* 0xBF886454 */
  .extern CNPUESET         /* 0xBF886458 */
  .extern CNPUEINV         /* 0xBF88645C */
  .extern CNPDE            /* 0xBF886460 */
  .extern CNPDECLR         /* 0xBF886464 */
  .extern CNPDESET         /* 0xBF886468 */
  .extern CNPDEINV         /* 0xBF88646C */
  .extern CNCONE           /* 0xBF886470 */
  .extern CNCONECLR        /* 0xBF886474 */
  .extern CNCONESET        /* 0xBF886478 */
  .extern CNCONEINV        /* 0xBF88647C */
  .extern CNENE            /* 0xBF886480 */
  .extern CNENECLR         /* 0xBF886484 */
  .extern CNENESET         /* 0xBF886488 */
  .extern CNENEINV         /* 0xBF88648C */
  .extern CNSTATE          /* 0xBF886490 */
  .extern CNSTATECLR       /* 0xBF886494 */
  .extern CNSTATESET       /* 0xBF886498 */
  .extern CNSTATEINV       /* 0xBF88649C */
  .extern ANSELF           /* 0xBF886500 */
  .extern ANSELFCLR        /* 0xBF886504 */
  .extern ANSELFSET        /* 0xBF886508 */
  .extern ANSELFINV        /* 0xBF88650C */
  .extern TRISF            /* 0xBF886510 */
  .extern TRISFCLR         /* 0xBF886514 */
  .extern TRISFSET         /* 0xBF886518 */
  .extern TRISFINV         /* 0xBF88651C */
  .extern PORTF            /* 0xBF886520 */
  .extern PORTFCLR         /* 0xBF886524 */
  .extern PORTFSET         /* 0xBF886528 */
  .extern PORTFINV         /* 0xBF88652C */
  .extern LATF             /* 0xBF886530 */
  .extern LATFCLR          /* 0xBF886534 */
  .extern LATFSET          /* 0xBF886538 */
  .extern LATFINV          /* 0xBF88653C */
  .extern ODCF             /* 0xBF886540 */
  .extern ODCFCLR          /* 0xBF886544 */
  .extern ODCFSET          /* 0xBF886548 */
  .extern ODCFINV          /* 0xBF88654C */
  .extern CNPUF            /* 0xBF886550 */
  .extern CNPUFCLR         /* 0xBF886554 */
  .extern CNPUFSET         /* 0xBF886558 */
  .extern CNPUFINV         /* 0xBF88655C */
  .extern CNPDF            /* 0xBF886560 */
  .extern CNPDFCLR         /* 0xBF886564 */
  .extern CNPDFSET         /* 0xBF886568 */
  .extern CNPDFINV         /* 0xBF88656C */
  .extern CNCONF           /* 0xBF886570 */
  .extern CNCONFCLR        /* 0xBF886574 */
  .extern CNCONFSET        /* 0xBF886578 */
  .extern CNCONFINV        /* 0xBF88657C */
  .extern CNENF            /* 0xBF886580 */
  .extern CNENFCLR         /* 0xBF886584 */
  .extern CNENFSET         /* 0xBF886588 */
  .extern CNENFINV         /* 0xBF88658C */
  .extern CNSTATF          /* 0xBF886590 */
  .extern CNSTATFCLR       /* 0xBF886594 */
  .extern CNSTATFSET       /* 0xBF886598 */
  .extern CNSTATFINV       /* 0xBF88659C */
  .extern ANSELG           /* 0xBF886600 */
  .extern ANSELGCLR        /* 0xBF886604 */
  .extern ANSELGSET        /* 0xBF886608 */
  .extern ANSELGINV        /* 0xBF88660C */
  .extern TRISG            /* 0xBF886610 */
  .extern TRISGCLR         /* 0xBF886614 */
  .extern TRISGSET         /* 0xBF886618 */
  .extern TRISGINV         /* 0xBF88661C */
  .extern PORTG            /* 0xBF886620 */
  .extern PORTGCLR         /* 0xBF886624 */
  .extern PORTGSET         /* 0xBF886628 */
  .extern PORTGINV         /* 0xBF88662C */
  .extern LATG             /* 0xBF886630 */
  .extern LATGCLR          /* 0xBF886634 */
  .extern LATGSET          /* 0xBF886638 */
  .extern LATGINV          /* 0xBF88663C */
  .extern ODCG             /* 0xBF886640 */
  .extern ODCGCLR          /* 0xBF886644 */
  .extern ODCGSET          /* 0xBF886648 */
  .extern ODCGINV          /* 0xBF88664C */
  .extern CNPUG            /* 0xBF886650 */
  .extern CNPUGCLR         /* 0xBF886654 */
  .extern CNPUGSET         /* 0xBF886658 */
  .extern CNPUGINV         /* 0xBF88665C */
  .extern CNPDG            /* 0xBF886660 */
  .extern CNPDGCLR         /* 0xBF886664 */
  .extern CNPDGSET         /* 0xBF886668 */
  .extern CNPDGINV         /* 0xBF88666C */
  .extern CNCONG           /* 0xBF886670 */
  .extern CNCONGCLR        /* 0xBF886674 */
  .extern CNCONGSET        /* 0xBF886678 */
  .extern CNCONGINV        /* 0xBF88667C */
  .extern CNENG            /* 0xBF886680 */
  .extern CNENGCLR         /* 0xBF886684 */
  .extern CNENGSET         /* 0xBF886688 */
  .extern CNENGINV         /* 0xBF88668C */
  .extern CNSTATG          /* 0xBF886690 */
  .extern CNSTATGCLR       /* 0xBF886694 */
  .extern CNSTATGSET       /* 0xBF886698 */
  .extern CNSTATGINV       /* 0xBF88669C */
  .extern DEVCFG3          /* 0xBFC02FF0 */
  .extern DEVCFG2          /* 0xBFC02FF4 */
  .extern DEVCFG1          /* 0xBFC02FF8 */
  .extern DEVCFG0          /* 0xBFC02FFC */
#else
#error Unknown language!
#endif

#define _WDTCON_WDTCLR_POSITION                  0x00000000
#define _WDTCON_WDTCLR_MASK                      0x00000001
#define _WDTCON_WDTCLR_LENGTH                    0x00000001

#define _WDTCON_WDTWINEN_POSITION                0x00000001
#define _WDTCON_WDTWINEN_MASK                    0x00000002
#define _WDTCON_WDTWINEN_LENGTH                  0x00000001

#define _WDTCON_SWDTPS_POSITION                  0x00000002
#define _WDTCON_SWDTPS_MASK                      0x0000007C
#define _WDTCON_SWDTPS_LENGTH                    0x00000005

#define _WDTCON_ON_POSITION                      0x0000000F
#define _WDTCON_ON_MASK                          0x00008000
#define _WDTCON_ON_LENGTH                        0x00000001

#define _WDTCON_SWDTPS0_POSITION                 0x00000002
#define _WDTCON_SWDTPS0_MASK                     0x00000004
#define _WDTCON_SWDTPS0_LENGTH                   0x00000001

#define _WDTCON_SWDTPS1_POSITION                 0x00000003
#define _WDTCON_SWDTPS1_MASK                     0x00000008
#define _WDTCON_SWDTPS1_LENGTH                   0x00000001

#define _WDTCON_SWDTPS2_POSITION                 0x00000004
#define _WDTCON_SWDTPS2_MASK                     0x00000010
#define _WDTCON_SWDTPS2_LENGTH                   0x00000001

#define _WDTCON_SWDTPS3_POSITION                 0x00000005
#define _WDTCON_SWDTPS3_MASK                     0x00000020
#define _WDTCON_SWDTPS3_LENGTH                   0x00000001

#define _WDTCON_SWDTPS4_POSITION                 0x00000006
#define _WDTCON_SWDTPS4_MASK                     0x00000040
#define _WDTCON_SWDTPS4_LENGTH                   0x00000001

#define _WDTCON_WDTPSTA_POSITION                 0x00000002
#define _WDTCON_WDTPSTA_MASK                     0x0000007C
#define _WDTCON_WDTPSTA_LENGTH                   0x00000005

#define _WDTCON_WDTPS_POSITION                   0x00000002
#define _WDTCON_WDTPS_MASK                       0x0000007C
#define _WDTCON_WDTPS_LENGTH                     0x00000005

#define _WDTCON_w_POSITION                       0x00000000
#define _WDTCON_w_MASK                           0xFFFFFFFF
#define _WDTCON_w_LENGTH                         0x00000020

#define _RTCCON_RTCOE_POSITION                   0x00000000
#define _RTCCON_RTCOE_MASK                       0x00000001
#define _RTCCON_RTCOE_LENGTH                     0x00000001

#define _RTCCON_HALFSEC_POSITION                 0x00000001
#define _RTCCON_HALFSEC_MASK                     0x00000002
#define _RTCCON_HALFSEC_LENGTH                   0x00000001

#define _RTCCON_RTCSYNC_POSITION                 0x00000002
#define _RTCCON_RTCSYNC_MASK                     0x00000004
#define _RTCCON_RTCSYNC_LENGTH                   0x00000001

#define _RTCCON_RTCWREN_POSITION                 0x00000003
#define _RTCCON_RTCWREN_MASK                     0x00000008
#define _RTCCON_RTCWREN_LENGTH                   0x00000001

#define _RTCCON_RTCCLKON_POSITION                0x00000006
#define _RTCCON_RTCCLKON_MASK                    0x00000040
#define _RTCCON_RTCCLKON_LENGTH                  0x00000001

#define _RTCCON_RTSECSEL_POSITION                0x00000007
#define _RTCCON_RTSECSEL_MASK                    0x00000080
#define _RTCCON_RTSECSEL_LENGTH                  0x00000001

#define _RTCCON_SIDL_POSITION                    0x0000000D
#define _RTCCON_SIDL_MASK                        0x00002000
#define _RTCCON_SIDL_LENGTH                      0x00000001

#define _RTCCON_ON_POSITION                      0x0000000F
#define _RTCCON_ON_MASK                          0x00008000
#define _RTCCON_ON_LENGTH                        0x00000001

#define _RTCCON_CAL_POSITION                     0x00000010
#define _RTCCON_CAL_MASK                         0x03FF0000
#define _RTCCON_CAL_LENGTH                       0x0000000A

#define _RTCCON_w_POSITION                       0x00000000
#define _RTCCON_w_MASK                           0xFFFFFFFF
#define _RTCCON_w_LENGTH                         0x00000020

#define _RTCALRM_ARPT_POSITION                   0x00000000
#define _RTCALRM_ARPT_MASK                       0x000000FF
#define _RTCALRM_ARPT_LENGTH                     0x00000008

#define _RTCALRM_AMASK_POSITION                  0x00000008
#define _RTCALRM_AMASK_MASK                      0x00000F00
#define _RTCALRM_AMASK_LENGTH                    0x00000004

#define _RTCALRM_ALRMSYNC_POSITION               0x0000000C
#define _RTCALRM_ALRMSYNC_MASK                   0x00001000
#define _RTCALRM_ALRMSYNC_LENGTH                 0x00000001

#define _RTCALRM_PIV_POSITION                    0x0000000D
#define _RTCALRM_PIV_MASK                        0x00002000
#define _RTCALRM_PIV_LENGTH                      0x00000001

#define _RTCALRM_CHIME_POSITION                  0x0000000E
#define _RTCALRM_CHIME_MASK                      0x00004000
#define _RTCALRM_CHIME_LENGTH                    0x00000001

#define _RTCALRM_ALRMEN_POSITION                 0x0000000F
#define _RTCALRM_ALRMEN_MASK                     0x00008000
#define _RTCALRM_ALRMEN_LENGTH                   0x00000001

#define _RTCALRM_w_POSITION                      0x00000000
#define _RTCALRM_w_MASK                          0xFFFFFFFF
#define _RTCALRM_w_LENGTH                        0x00000020

#define _RTCTIME_SEC01_POSITION                  0x00000008
#define _RTCTIME_SEC01_MASK                      0x00000F00
#define _RTCTIME_SEC01_LENGTH                    0x00000004

#define _RTCTIME_SEC10_POSITION                  0x0000000C
#define _RTCTIME_SEC10_MASK                      0x0000F000
#define _RTCTIME_SEC10_LENGTH                    0x00000004

#define _RTCTIME_MIN01_POSITION                  0x00000010
#define _RTCTIME_MIN01_MASK                      0x000F0000
#define _RTCTIME_MIN01_LENGTH                    0x00000004

#define _RTCTIME_MIN10_POSITION                  0x00000014
#define _RTCTIME_MIN10_MASK                      0x00F00000
#define _RTCTIME_MIN10_LENGTH                    0x00000004

#define _RTCTIME_HR01_POSITION                   0x00000018
#define _RTCTIME_HR01_MASK                       0x0F000000
#define _RTCTIME_HR01_LENGTH                     0x00000004

#define _RTCTIME_HR10_POSITION                   0x0000001C
#define _RTCTIME_HR10_MASK                       0xF0000000
#define _RTCTIME_HR10_LENGTH                     0x00000004

#define _RTCTIME_w_POSITION                      0x00000000
#define _RTCTIME_w_MASK                          0xFFFFFFFF
#define _RTCTIME_w_LENGTH                        0x00000020

#define _RTCDATE_WDAY01_POSITION                 0x00000000
#define _RTCDATE_WDAY01_MASK                     0x0000000F
#define _RTCDATE_WDAY01_LENGTH                   0x00000004

#define _RTCDATE_DAY01_POSITION                  0x00000008
#define _RTCDATE_DAY01_MASK                      0x00000F00
#define _RTCDATE_DAY01_LENGTH                    0x00000004

#define _RTCDATE_DAY10_POSITION                  0x0000000C
#define _RTCDATE_DAY10_MASK                      0x0000F000
#define _RTCDATE_DAY10_LENGTH                    0x00000004

#define _RTCDATE_MONTH01_POSITION                0x00000010
#define _RTCDATE_MONTH01_MASK                    0x000F0000
#define _RTCDATE_MONTH01_LENGTH                  0x00000004

#define _RTCDATE_MONTH10_POSITION                0x00000014
#define _RTCDATE_MONTH10_MASK                    0x00F00000
#define _RTCDATE_MONTH10_LENGTH                  0x00000004

#define _RTCDATE_YEAR01_POSITION                 0x00000018
#define _RTCDATE_YEAR01_MASK                     0x0F000000
#define _RTCDATE_YEAR01_LENGTH                   0x00000004

#define _RTCDATE_YEAR10_POSITION                 0x0000001C
#define _RTCDATE_YEAR10_MASK                     0xF0000000
#define _RTCDATE_YEAR10_LENGTH                   0x00000004

#define _RTCDATE_w_POSITION                      0x00000000
#define _RTCDATE_w_MASK                          0xFFFFFFFF
#define _RTCDATE_w_LENGTH                        0x00000020

#define _ALRMTIME_SEC01_POSITION                 0x00000008
#define _ALRMTIME_SEC01_MASK                     0x00000F00
#define _ALRMTIME_SEC01_LENGTH                   0x00000004

#define _ALRMTIME_SEC10_POSITION                 0x0000000C
#define _ALRMTIME_SEC10_MASK                     0x0000F000
#define _ALRMTIME_SEC10_LENGTH                   0x00000004

#define _ALRMTIME_MIN01_POSITION                 0x00000010
#define _ALRMTIME_MIN01_MASK                     0x000F0000
#define _ALRMTIME_MIN01_LENGTH                   0x00000004

#define _ALRMTIME_MIN10_POSITION                 0x00000014
#define _ALRMTIME_MIN10_MASK                     0x00F00000
#define _ALRMTIME_MIN10_LENGTH                   0x00000004

#define _ALRMTIME_HR01_POSITION                  0x00000018
#define _ALRMTIME_HR01_MASK                      0x0F000000
#define _ALRMTIME_HR01_LENGTH                    0x00000004

#define _ALRMTIME_HR10_POSITION                  0x0000001C
#define _ALRMTIME_HR10_MASK                      0xF0000000
#define _ALRMTIME_HR10_LENGTH                    0x00000004

#define _ALRMTIME_w_POSITION                     0x00000000
#define _ALRMTIME_w_MASK                         0xFFFFFFFF
#define _ALRMTIME_w_LENGTH                       0x00000020

#define _ALRMDATE_WDAY01_POSITION                0x00000000
#define _ALRMDATE_WDAY01_MASK                    0x0000000F
#define _ALRMDATE_WDAY01_LENGTH                  0x00000004

#define _ALRMDATE_DAY01_POSITION                 0x00000008
#define _ALRMDATE_DAY01_MASK                     0x00000F00
#define _ALRMDATE_DAY01_LENGTH                   0x00000004

#define _ALRMDATE_DAY10_POSITION                 0x0000000C
#define _ALRMDATE_DAY10_MASK                     0x0000F000
#define _ALRMDATE_DAY10_LENGTH                   0x00000004

#define _ALRMDATE_MONTH01_POSITION               0x00000010
#define _ALRMDATE_MONTH01_MASK                   0x000F0000
#define _ALRMDATE_MONTH01_LENGTH                 0x00000004

#define _ALRMDATE_MONTH10_POSITION               0x00000014
#define _ALRMDATE_MONTH10_MASK                   0x00F00000
#define _ALRMDATE_MONTH10_LENGTH                 0x00000004

#define _ALRMDATE_w_POSITION                     0x00000000
#define _ALRMDATE_w_MASK                         0xFFFFFFFF
#define _ALRMDATE_w_LENGTH                       0x00000020

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000007
#define _T1CON_TGATE_MASK                        0x00000080
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TWIP_POSITION                     0x0000000B
#define _T1CON_TWIP_MASK                         0x00000800
#define _T1CON_TWIP_LENGTH                       0x00000001

#define _T1CON_TWDIS_POSITION                    0x0000000C
#define _T1CON_TWDIS_MASK                        0x00001000
#define _T1CON_TWDIS_LENGTH                      0x00000001

#define _T1CON_SIDL_POSITION                     0x0000000D
#define _T1CON_SIDL_MASK                         0x00002000
#define _T1CON_SIDL_LENGTH                       0x00000001

#define _T1CON_ON_POSITION                       0x0000000F
#define _T1CON_ON_MASK                           0x00008000
#define _T1CON_ON_LENGTH                         0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_w_POSITION                        0x00000000
#define _T1CON_w_MASK                            0xFFFFFFFF
#define _T1CON_w_LENGTH                          0x00000020

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000070
#define _T2CON_TCKPS_LENGTH                      0x00000003

#define _T2CON_TGATE_POSITION                    0x00000007
#define _T2CON_TGATE_MASK                        0x00000080
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_SIDL_POSITION                     0x0000000D
#define _T2CON_SIDL_MASK                         0x00002000
#define _T2CON_SIDL_LENGTH                       0x00000001

#define _T2CON_ON_POSITION                       0x0000000F
#define _T2CON_ON_MASK                           0x00008000
#define _T2CON_ON_LENGTH                         0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCKPS2_POSITION                   0x00000006
#define _T2CON_TCKPS2_MASK                       0x00000040
#define _T2CON_TCKPS2_LENGTH                     0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_w_POSITION                        0x00000000
#define _T2CON_w_MASK                            0xFFFFFFFF
#define _T2CON_w_LENGTH                          0x00000020

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_T32_POSITION                      0x00000003
#define _T3CON_T32_MASK                          0x00000008
#define _T3CON_T32_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000070
#define _T3CON_TCKPS_LENGTH                      0x00000003

#define _T3CON_TGATE_POSITION                    0x00000007
#define _T3CON_TGATE_MASK                        0x00000080
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_SIDL_POSITION                     0x0000000D
#define _T3CON_SIDL_MASK                         0x00002000
#define _T3CON_SIDL_LENGTH                       0x00000001

#define _T3CON_ON_POSITION                       0x0000000F
#define _T3CON_ON_MASK                           0x00008000
#define _T3CON_ON_LENGTH                         0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCKPS2_POSITION                   0x00000006
#define _T3CON_TCKPS2_MASK                       0x00000040
#define _T3CON_TCKPS2_LENGTH                     0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_w_POSITION                        0x00000000
#define _T3CON_w_MASK                            0xFFFFFFFF
#define _T3CON_w_LENGTH                          0x00000020

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000070
#define _T4CON_TCKPS_LENGTH                      0x00000003

#define _T4CON_TGATE_POSITION                    0x00000007
#define _T4CON_TGATE_MASK                        0x00000080
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_SIDL_POSITION                     0x0000000D
#define _T4CON_SIDL_MASK                         0x00002000
#define _T4CON_SIDL_LENGTH                       0x00000001

#define _T4CON_ON_POSITION                       0x0000000F
#define _T4CON_ON_MASK                           0x00008000
#define _T4CON_ON_LENGTH                         0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T4CON_TCKPS2_POSITION                   0x00000006
#define _T4CON_TCKPS2_MASK                       0x00000040
#define _T4CON_TCKPS2_LENGTH                     0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_w_POSITION                        0x00000000
#define _T4CON_w_MASK                            0xFFFFFFFF
#define _T4CON_w_LENGTH                          0x00000020

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_T32_POSITION                      0x00000003
#define _T5CON_T32_MASK                          0x00000008
#define _T5CON_T32_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000070
#define _T5CON_TCKPS_LENGTH                      0x00000003

#define _T5CON_TGATE_POSITION                    0x00000007
#define _T5CON_TGATE_MASK                        0x00000080
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_SIDL_POSITION                     0x0000000D
#define _T5CON_SIDL_MASK                         0x00002000
#define _T5CON_SIDL_LENGTH                       0x00000001

#define _T5CON_ON_POSITION                       0x0000000F
#define _T5CON_ON_MASK                           0x00008000
#define _T5CON_ON_LENGTH                         0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCKPS2_POSITION                   0x00000006
#define _T5CON_TCKPS2_MASK                       0x00000040
#define _T5CON_TCKPS2_LENGTH                     0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_w_POSITION                        0x00000000
#define _T5CON_w_MASK                            0xFFFFFFFF
#define _T5CON_w_LENGTH                          0x00000020

#define _IC1CON_ICM_POSITION                     0x00000000
#define _IC1CON_ICM_MASK                         0x00000007
#define _IC1CON_ICM_LENGTH                       0x00000003

#define _IC1CON_ICBNE_POSITION                   0x00000003
#define _IC1CON_ICBNE_MASK                       0x00000008
#define _IC1CON_ICBNE_LENGTH                     0x00000001

#define _IC1CON_ICOV_POSITION                    0x00000004
#define _IC1CON_ICOV_MASK                        0x00000010
#define _IC1CON_ICOV_LENGTH                      0x00000001

#define _IC1CON_ICI_POSITION                     0x00000005
#define _IC1CON_ICI_MASK                         0x00000060
#define _IC1CON_ICI_LENGTH                       0x00000002

#define _IC1CON_ICTMR_POSITION                   0x00000007
#define _IC1CON_ICTMR_MASK                       0x00000080
#define _IC1CON_ICTMR_LENGTH                     0x00000001

#define _IC1CON_C32_POSITION                     0x00000008
#define _IC1CON_C32_MASK                         0x00000100
#define _IC1CON_C32_LENGTH                       0x00000001

#define _IC1CON_FEDGE_POSITION                   0x00000009
#define _IC1CON_FEDGE_MASK                       0x00000200
#define _IC1CON_FEDGE_LENGTH                     0x00000001

#define _IC1CON_SIDL_POSITION                    0x0000000D
#define _IC1CON_SIDL_MASK                        0x00002000
#define _IC1CON_SIDL_LENGTH                      0x00000001

#define _IC1CON_ON_POSITION                      0x0000000F
#define _IC1CON_ON_MASK                          0x00008000
#define _IC1CON_ON_LENGTH                        0x00000001

#define _IC1CON_ICM0_POSITION                    0x00000000
#define _IC1CON_ICM0_MASK                        0x00000001
#define _IC1CON_ICM0_LENGTH                      0x00000001

#define _IC1CON_ICM1_POSITION                    0x00000001
#define _IC1CON_ICM1_MASK                        0x00000002
#define _IC1CON_ICM1_LENGTH                      0x00000001

#define _IC1CON_ICM2_POSITION                    0x00000002
#define _IC1CON_ICM2_MASK                        0x00000004
#define _IC1CON_ICM2_LENGTH                      0x00000001

#define _IC1CON_ICI0_POSITION                    0x00000005
#define _IC1CON_ICI0_MASK                        0x00000020
#define _IC1CON_ICI0_LENGTH                      0x00000001

#define _IC1CON_ICI1_POSITION                    0x00000006
#define _IC1CON_ICI1_MASK                        0x00000040
#define _IC1CON_ICI1_LENGTH                      0x00000001

#define _IC1CON_ICSIDL_POSITION                  0x0000000D
#define _IC1CON_ICSIDL_MASK                      0x00002000
#define _IC1CON_ICSIDL_LENGTH                    0x00000001

#define _IC1CON_w_POSITION                       0x00000000
#define _IC1CON_w_MASK                           0xFFFFFFFF
#define _IC1CON_w_LENGTH                         0x00000020

#define _IC2CON_ICM_POSITION                     0x00000000
#define _IC2CON_ICM_MASK                         0x00000007
#define _IC2CON_ICM_LENGTH                       0x00000003

#define _IC2CON_ICBNE_POSITION                   0x00000003
#define _IC2CON_ICBNE_MASK                       0x00000008
#define _IC2CON_ICBNE_LENGTH                     0x00000001

#define _IC2CON_ICOV_POSITION                    0x00000004
#define _IC2CON_ICOV_MASK                        0x00000010
#define _IC2CON_ICOV_LENGTH                      0x00000001

#define _IC2CON_ICI_POSITION                     0x00000005
#define _IC2CON_ICI_MASK                         0x00000060
#define _IC2CON_ICI_LENGTH                       0x00000002

#define _IC2CON_ICTMR_POSITION                   0x00000007
#define _IC2CON_ICTMR_MASK                       0x00000080
#define _IC2CON_ICTMR_LENGTH                     0x00000001

#define _IC2CON_C32_POSITION                     0x00000008
#define _IC2CON_C32_MASK                         0x00000100
#define _IC2CON_C32_LENGTH                       0x00000001

#define _IC2CON_FEDGE_POSITION                   0x00000009
#define _IC2CON_FEDGE_MASK                       0x00000200
#define _IC2CON_FEDGE_LENGTH                     0x00000001

#define _IC2CON_SIDL_POSITION                    0x0000000D
#define _IC2CON_SIDL_MASK                        0x00002000
#define _IC2CON_SIDL_LENGTH                      0x00000001

#define _IC2CON_ON_POSITION                      0x0000000F
#define _IC2CON_ON_MASK                          0x00008000
#define _IC2CON_ON_LENGTH                        0x00000001

#define _IC2CON_ICM0_POSITION                    0x00000000
#define _IC2CON_ICM0_MASK                        0x00000001
#define _IC2CON_ICM0_LENGTH                      0x00000001

#define _IC2CON_ICM1_POSITION                    0x00000001
#define _IC2CON_ICM1_MASK                        0x00000002
#define _IC2CON_ICM1_LENGTH                      0x00000001

#define _IC2CON_ICM2_POSITION                    0x00000002
#define _IC2CON_ICM2_MASK                        0x00000004
#define _IC2CON_ICM2_LENGTH                      0x00000001

#define _IC2CON_ICI0_POSITION                    0x00000005
#define _IC2CON_ICI0_MASK                        0x00000020
#define _IC2CON_ICI0_LENGTH                      0x00000001

#define _IC2CON_ICI1_POSITION                    0x00000006
#define _IC2CON_ICI1_MASK                        0x00000040
#define _IC2CON_ICI1_LENGTH                      0x00000001

#define _IC2CON_ICSIDL_POSITION                  0x0000000D
#define _IC2CON_ICSIDL_MASK                      0x00002000
#define _IC2CON_ICSIDL_LENGTH                    0x00000001

#define _IC2CON_w_POSITION                       0x00000000
#define _IC2CON_w_MASK                           0xFFFFFFFF
#define _IC2CON_w_LENGTH                         0x00000020

#define _IC3CON_ICM_POSITION                     0x00000000
#define _IC3CON_ICM_MASK                         0x00000007
#define _IC3CON_ICM_LENGTH                       0x00000003

#define _IC3CON_ICBNE_POSITION                   0x00000003
#define _IC3CON_ICBNE_MASK                       0x00000008
#define _IC3CON_ICBNE_LENGTH                     0x00000001

#define _IC3CON_ICOV_POSITION                    0x00000004
#define _IC3CON_ICOV_MASK                        0x00000010
#define _IC3CON_ICOV_LENGTH                      0x00000001

#define _IC3CON_ICI_POSITION                     0x00000005
#define _IC3CON_ICI_MASK                         0x00000060
#define _IC3CON_ICI_LENGTH                       0x00000002

#define _IC3CON_ICTMR_POSITION                   0x00000007
#define _IC3CON_ICTMR_MASK                       0x00000080
#define _IC3CON_ICTMR_LENGTH                     0x00000001

#define _IC3CON_C32_POSITION                     0x00000008
#define _IC3CON_C32_MASK                         0x00000100
#define _IC3CON_C32_LENGTH                       0x00000001

#define _IC3CON_FEDGE_POSITION                   0x00000009
#define _IC3CON_FEDGE_MASK                       0x00000200
#define _IC3CON_FEDGE_LENGTH                     0x00000001

#define _IC3CON_SIDL_POSITION                    0x0000000D
#define _IC3CON_SIDL_MASK                        0x00002000
#define _IC3CON_SIDL_LENGTH                      0x00000001

#define _IC3CON_ON_POSITION                      0x0000000F
#define _IC3CON_ON_MASK                          0x00008000
#define _IC3CON_ON_LENGTH                        0x00000001

#define _IC3CON_ICM0_POSITION                    0x00000000
#define _IC3CON_ICM0_MASK                        0x00000001
#define _IC3CON_ICM0_LENGTH                      0x00000001

#define _IC3CON_ICM1_POSITION                    0x00000001
#define _IC3CON_ICM1_MASK                        0x00000002
#define _IC3CON_ICM1_LENGTH                      0x00000001

#define _IC3CON_ICM2_POSITION                    0x00000002
#define _IC3CON_ICM2_MASK                        0x00000004
#define _IC3CON_ICM2_LENGTH                      0x00000001

#define _IC3CON_ICI0_POSITION                    0x00000005
#define _IC3CON_ICI0_MASK                        0x00000020
#define _IC3CON_ICI0_LENGTH                      0x00000001

#define _IC3CON_ICI1_POSITION                    0x00000006
#define _IC3CON_ICI1_MASK                        0x00000040
#define _IC3CON_ICI1_LENGTH                      0x00000001

#define _IC3CON_ICSIDL_POSITION                  0x0000000D
#define _IC3CON_ICSIDL_MASK                      0x00002000
#define _IC3CON_ICSIDL_LENGTH                    0x00000001

#define _IC3CON_w_POSITION                       0x00000000
#define _IC3CON_w_MASK                           0xFFFFFFFF
#define _IC3CON_w_LENGTH                         0x00000020

#define _IC4CON_ICM_POSITION                     0x00000000
#define _IC4CON_ICM_MASK                         0x00000007
#define _IC4CON_ICM_LENGTH                       0x00000003

#define _IC4CON_ICBNE_POSITION                   0x00000003
#define _IC4CON_ICBNE_MASK                       0x00000008
#define _IC4CON_ICBNE_LENGTH                     0x00000001

#define _IC4CON_ICOV_POSITION                    0x00000004
#define _IC4CON_ICOV_MASK                        0x00000010
#define _IC4CON_ICOV_LENGTH                      0x00000001

#define _IC4CON_ICI_POSITION                     0x00000005
#define _IC4CON_ICI_MASK                         0x00000060
#define _IC4CON_ICI_LENGTH                       0x00000002

#define _IC4CON_ICTMR_POSITION                   0x00000007
#define _IC4CON_ICTMR_MASK                       0x00000080
#define _IC4CON_ICTMR_LENGTH                     0x00000001

#define _IC4CON_C32_POSITION                     0x00000008
#define _IC4CON_C32_MASK                         0x00000100
#define _IC4CON_C32_LENGTH                       0x00000001

#define _IC4CON_FEDGE_POSITION                   0x00000009
#define _IC4CON_FEDGE_MASK                       0x00000200
#define _IC4CON_FEDGE_LENGTH                     0x00000001

#define _IC4CON_SIDL_POSITION                    0x0000000D
#define _IC4CON_SIDL_MASK                        0x00002000
#define _IC4CON_SIDL_LENGTH                      0x00000001

#define _IC4CON_ON_POSITION                      0x0000000F
#define _IC4CON_ON_MASK                          0x00008000
#define _IC4CON_ON_LENGTH                        0x00000001

#define _IC4CON_ICM0_POSITION                    0x00000000
#define _IC4CON_ICM0_MASK                        0x00000001
#define _IC4CON_ICM0_LENGTH                      0x00000001

#define _IC4CON_ICM1_POSITION                    0x00000001
#define _IC4CON_ICM1_MASK                        0x00000002
#define _IC4CON_ICM1_LENGTH                      0x00000001

#define _IC4CON_ICM2_POSITION                    0x00000002
#define _IC4CON_ICM2_MASK                        0x00000004
#define _IC4CON_ICM2_LENGTH                      0x00000001

#define _IC4CON_ICI0_POSITION                    0x00000005
#define _IC4CON_ICI0_MASK                        0x00000020
#define _IC4CON_ICI0_LENGTH                      0x00000001

#define _IC4CON_ICI1_POSITION                    0x00000006
#define _IC4CON_ICI1_MASK                        0x00000040
#define _IC4CON_ICI1_LENGTH                      0x00000001

#define _IC4CON_ICSIDL_POSITION                  0x0000000D
#define _IC4CON_ICSIDL_MASK                      0x00002000
#define _IC4CON_ICSIDL_LENGTH                    0x00000001

#define _IC4CON_w_POSITION                       0x00000000
#define _IC4CON_w_MASK                           0xFFFFFFFF
#define _IC4CON_w_LENGTH                         0x00000020

#define _IC5CON_ICM_POSITION                     0x00000000
#define _IC5CON_ICM_MASK                         0x00000007
#define _IC5CON_ICM_LENGTH                       0x00000003

#define _IC5CON_ICBNE_POSITION                   0x00000003
#define _IC5CON_ICBNE_MASK                       0x00000008
#define _IC5CON_ICBNE_LENGTH                     0x00000001

#define _IC5CON_ICOV_POSITION                    0x00000004
#define _IC5CON_ICOV_MASK                        0x00000010
#define _IC5CON_ICOV_LENGTH                      0x00000001

#define _IC5CON_ICI_POSITION                     0x00000005
#define _IC5CON_ICI_MASK                         0x00000060
#define _IC5CON_ICI_LENGTH                       0x00000002

#define _IC5CON_ICTMR_POSITION                   0x00000007
#define _IC5CON_ICTMR_MASK                       0x00000080
#define _IC5CON_ICTMR_LENGTH                     0x00000001

#define _IC5CON_C32_POSITION                     0x00000008
#define _IC5CON_C32_MASK                         0x00000100
#define _IC5CON_C32_LENGTH                       0x00000001

#define _IC5CON_FEDGE_POSITION                   0x00000009
#define _IC5CON_FEDGE_MASK                       0x00000200
#define _IC5CON_FEDGE_LENGTH                     0x00000001

#define _IC5CON_SIDL_POSITION                    0x0000000D
#define _IC5CON_SIDL_MASK                        0x00002000
#define _IC5CON_SIDL_LENGTH                      0x00000001

#define _IC5CON_ON_POSITION                      0x0000000F
#define _IC5CON_ON_MASK                          0x00008000
#define _IC5CON_ON_LENGTH                        0x00000001

#define _IC5CON_ICM0_POSITION                    0x00000000
#define _IC5CON_ICM0_MASK                        0x00000001
#define _IC5CON_ICM0_LENGTH                      0x00000001

#define _IC5CON_ICM1_POSITION                    0x00000001
#define _IC5CON_ICM1_MASK                        0x00000002
#define _IC5CON_ICM1_LENGTH                      0x00000001

#define _IC5CON_ICM2_POSITION                    0x00000002
#define _IC5CON_ICM2_MASK                        0x00000004
#define _IC5CON_ICM2_LENGTH                      0x00000001

#define _IC5CON_ICI0_POSITION                    0x00000005
#define _IC5CON_ICI0_MASK                        0x00000020
#define _IC5CON_ICI0_LENGTH                      0x00000001

#define _IC5CON_ICI1_POSITION                    0x00000006
#define _IC5CON_ICI1_MASK                        0x00000040
#define _IC5CON_ICI1_LENGTH                      0x00000001

#define _IC5CON_ICSIDL_POSITION                  0x0000000D
#define _IC5CON_ICSIDL_MASK                      0x00002000
#define _IC5CON_ICSIDL_LENGTH                    0x00000001

#define _IC5CON_w_POSITION                       0x00000000
#define _IC5CON_w_MASK                           0xFFFFFFFF
#define _IC5CON_w_LENGTH                         0x00000020

#define _OC1CON_OCM_POSITION                     0x00000000
#define _OC1CON_OCM_MASK                         0x00000007
#define _OC1CON_OCM_LENGTH                       0x00000003

#define _OC1CON_OCTSEL_POSITION                  0x00000003
#define _OC1CON_OCTSEL_MASK                      0x00000008
#define _OC1CON_OCTSEL_LENGTH                    0x00000001

#define _OC1CON_OCFLT_POSITION                   0x00000004
#define _OC1CON_OCFLT_MASK                       0x00000010
#define _OC1CON_OCFLT_LENGTH                     0x00000001

#define _OC1CON_OC32_POSITION                    0x00000005
#define _OC1CON_OC32_MASK                        0x00000020
#define _OC1CON_OC32_LENGTH                      0x00000001

#define _OC1CON_SIDL_POSITION                    0x0000000D
#define _OC1CON_SIDL_MASK                        0x00002000
#define _OC1CON_SIDL_LENGTH                      0x00000001

#define _OC1CON_ON_POSITION                      0x0000000F
#define _OC1CON_ON_MASK                          0x00008000
#define _OC1CON_ON_LENGTH                        0x00000001

#define _OC1CON_OCM0_POSITION                    0x00000000
#define _OC1CON_OCM0_MASK                        0x00000001
#define _OC1CON_OCM0_LENGTH                      0x00000001

#define _OC1CON_OCM1_POSITION                    0x00000001
#define _OC1CON_OCM1_MASK                        0x00000002
#define _OC1CON_OCM1_LENGTH                      0x00000001

#define _OC1CON_OCM2_POSITION                    0x00000002
#define _OC1CON_OCM2_MASK                        0x00000004
#define _OC1CON_OCM2_LENGTH                      0x00000001

#define _OC1CON_OCSIDL_POSITION                  0x0000000D
#define _OC1CON_OCSIDL_MASK                      0x00002000
#define _OC1CON_OCSIDL_LENGTH                    0x00000001

#define _OC1CON_w_POSITION                       0x00000000
#define _OC1CON_w_MASK                           0xFFFFFFFF
#define _OC1CON_w_LENGTH                         0x00000020

#define _OC2CON_OCM_POSITION                     0x00000000
#define _OC2CON_OCM_MASK                         0x00000007
#define _OC2CON_OCM_LENGTH                       0x00000003

#define _OC2CON_OCTSEL_POSITION                  0x00000003
#define _OC2CON_OCTSEL_MASK                      0x00000008
#define _OC2CON_OCTSEL_LENGTH                    0x00000001

#define _OC2CON_OCFLT_POSITION                   0x00000004
#define _OC2CON_OCFLT_MASK                       0x00000010
#define _OC2CON_OCFLT_LENGTH                     0x00000001

#define _OC2CON_OC32_POSITION                    0x00000005
#define _OC2CON_OC32_MASK                        0x00000020
#define _OC2CON_OC32_LENGTH                      0x00000001

#define _OC2CON_SIDL_POSITION                    0x0000000D
#define _OC2CON_SIDL_MASK                        0x00002000
#define _OC2CON_SIDL_LENGTH                      0x00000001

#define _OC2CON_ON_POSITION                      0x0000000F
#define _OC2CON_ON_MASK                          0x00008000
#define _OC2CON_ON_LENGTH                        0x00000001

#define _OC2CON_OCM0_POSITION                    0x00000000
#define _OC2CON_OCM0_MASK                        0x00000001
#define _OC2CON_OCM0_LENGTH                      0x00000001

#define _OC2CON_OCM1_POSITION                    0x00000001
#define _OC2CON_OCM1_MASK                        0x00000002
#define _OC2CON_OCM1_LENGTH                      0x00000001

#define _OC2CON_OCM2_POSITION                    0x00000002
#define _OC2CON_OCM2_MASK                        0x00000004
#define _OC2CON_OCM2_LENGTH                      0x00000001

#define _OC2CON_OCSIDL_POSITION                  0x0000000D
#define _OC2CON_OCSIDL_MASK                      0x00002000
#define _OC2CON_OCSIDL_LENGTH                    0x00000001

#define _OC2CON_w_POSITION                       0x00000000
#define _OC2CON_w_MASK                           0xFFFFFFFF
#define _OC2CON_w_LENGTH                         0x00000020

#define _OC3CON_OCM_POSITION                     0x00000000
#define _OC3CON_OCM_MASK                         0x00000007
#define _OC3CON_OCM_LENGTH                       0x00000003

#define _OC3CON_OCTSEL_POSITION                  0x00000003
#define _OC3CON_OCTSEL_MASK                      0x00000008
#define _OC3CON_OCTSEL_LENGTH                    0x00000001

#define _OC3CON_OCFLT_POSITION                   0x00000004
#define _OC3CON_OCFLT_MASK                       0x00000010
#define _OC3CON_OCFLT_LENGTH                     0x00000001

#define _OC3CON_OC32_POSITION                    0x00000005
#define _OC3CON_OC32_MASK                        0x00000020
#define _OC3CON_OC32_LENGTH                      0x00000001

#define _OC3CON_SIDL_POSITION                    0x0000000D
#define _OC3CON_SIDL_MASK                        0x00002000
#define _OC3CON_SIDL_LENGTH                      0x00000001

#define _OC3CON_ON_POSITION                      0x0000000F
#define _OC3CON_ON_MASK                          0x00008000
#define _OC3CON_ON_LENGTH                        0x00000001

#define _OC3CON_OCM0_POSITION                    0x00000000
#define _OC3CON_OCM0_MASK                        0x00000001
#define _OC3CON_OCM0_LENGTH                      0x00000001

#define _OC3CON_OCM1_POSITION                    0x00000001
#define _OC3CON_OCM1_MASK                        0x00000002
#define _OC3CON_OCM1_LENGTH                      0x00000001

#define _OC3CON_OCM2_POSITION                    0x00000002
#define _OC3CON_OCM2_MASK                        0x00000004
#define _OC3CON_OCM2_LENGTH                      0x00000001

#define _OC3CON_OCSIDL_POSITION                  0x0000000D
#define _OC3CON_OCSIDL_MASK                      0x00002000
#define _OC3CON_OCSIDL_LENGTH                    0x00000001

#define _OC3CON_w_POSITION                       0x00000000
#define _OC3CON_w_MASK                           0xFFFFFFFF
#define _OC3CON_w_LENGTH                         0x00000020

#define _OC4CON_OCM_POSITION                     0x00000000
#define _OC4CON_OCM_MASK                         0x00000007
#define _OC4CON_OCM_LENGTH                       0x00000003

#define _OC4CON_OCTSEL_POSITION                  0x00000003
#define _OC4CON_OCTSEL_MASK                      0x00000008
#define _OC4CON_OCTSEL_LENGTH                    0x00000001

#define _OC4CON_OCFLT_POSITION                   0x00000004
#define _OC4CON_OCFLT_MASK                       0x00000010
#define _OC4CON_OCFLT_LENGTH                     0x00000001

#define _OC4CON_OC32_POSITION                    0x00000005
#define _OC4CON_OC32_MASK                        0x00000020
#define _OC4CON_OC32_LENGTH                      0x00000001

#define _OC4CON_SIDL_POSITION                    0x0000000D
#define _OC4CON_SIDL_MASK                        0x00002000
#define _OC4CON_SIDL_LENGTH                      0x00000001

#define _OC4CON_ON_POSITION                      0x0000000F
#define _OC4CON_ON_MASK                          0x00008000
#define _OC4CON_ON_LENGTH                        0x00000001

#define _OC4CON_OCM0_POSITION                    0x00000000
#define _OC4CON_OCM0_MASK                        0x00000001
#define _OC4CON_OCM0_LENGTH                      0x00000001

#define _OC4CON_OCM1_POSITION                    0x00000001
#define _OC4CON_OCM1_MASK                        0x00000002
#define _OC4CON_OCM1_LENGTH                      0x00000001

#define _OC4CON_OCM2_POSITION                    0x00000002
#define _OC4CON_OCM2_MASK                        0x00000004
#define _OC4CON_OCM2_LENGTH                      0x00000001

#define _OC4CON_OCSIDL_POSITION                  0x0000000D
#define _OC4CON_OCSIDL_MASK                      0x00002000
#define _OC4CON_OCSIDL_LENGTH                    0x00000001

#define _OC4CON_w_POSITION                       0x00000000
#define _OC4CON_w_MASK                           0xFFFFFFFF
#define _OC4CON_w_LENGTH                         0x00000020

#define _OC5CON_OCM_POSITION                     0x00000000
#define _OC5CON_OCM_MASK                         0x00000007
#define _OC5CON_OCM_LENGTH                       0x00000003

#define _OC5CON_OCTSEL_POSITION                  0x00000003
#define _OC5CON_OCTSEL_MASK                      0x00000008
#define _OC5CON_OCTSEL_LENGTH                    0x00000001

#define _OC5CON_OCFLT_POSITION                   0x00000004
#define _OC5CON_OCFLT_MASK                       0x00000010
#define _OC5CON_OCFLT_LENGTH                     0x00000001

#define _OC5CON_OC32_POSITION                    0x00000005
#define _OC5CON_OC32_MASK                        0x00000020
#define _OC5CON_OC32_LENGTH                      0x00000001

#define _OC5CON_SIDL_POSITION                    0x0000000D
#define _OC5CON_SIDL_MASK                        0x00002000
#define _OC5CON_SIDL_LENGTH                      0x00000001

#define _OC5CON_ON_POSITION                      0x0000000F
#define _OC5CON_ON_MASK                          0x00008000
#define _OC5CON_ON_LENGTH                        0x00000001

#define _OC5CON_OCM0_POSITION                    0x00000000
#define _OC5CON_OCM0_MASK                        0x00000001
#define _OC5CON_OCM0_LENGTH                      0x00000001

#define _OC5CON_OCM1_POSITION                    0x00000001
#define _OC5CON_OCM1_MASK                        0x00000002
#define _OC5CON_OCM1_LENGTH                      0x00000001

#define _OC5CON_OCM2_POSITION                    0x00000002
#define _OC5CON_OCM2_MASK                        0x00000004
#define _OC5CON_OCM2_LENGTH                      0x00000001

#define _OC5CON_OCSIDL_POSITION                  0x0000000D
#define _OC5CON_OCSIDL_MASK                      0x00002000
#define _OC5CON_OCSIDL_LENGTH                    0x00000001

#define _OC5CON_w_POSITION                       0x00000000
#define _OC5CON_w_MASK                           0xFFFFFFFF
#define _OC5CON_w_LENGTH                         0x00000020

#define _I2C1111CON_SEN_POSITION                 0x00000000
#define _I2C1111CON_SEN_MASK                     0x00000001
#define _I2C1111CON_SEN_LENGTH                   0x00000001

#define _I2C1111CON_RSEN_POSITION                0x00000001
#define _I2C1111CON_RSEN_MASK                    0x00000002
#define _I2C1111CON_RSEN_LENGTH                  0x00000001

#define _I2C1111CON_PEN_POSITION                 0x00000002
#define _I2C1111CON_PEN_MASK                     0x00000004
#define _I2C1111CON_PEN_LENGTH                   0x00000001

#define _I2C1111CON_RCEN_POSITION                0x00000003
#define _I2C1111CON_RCEN_MASK                    0x00000008
#define _I2C1111CON_RCEN_LENGTH                  0x00000001

#define _I2C1111CON_ACKEN_POSITION               0x00000004
#define _I2C1111CON_ACKEN_MASK                   0x00000010
#define _I2C1111CON_ACKEN_LENGTH                 0x00000001

#define _I2C1111CON_ACKDT_POSITION               0x00000005
#define _I2C1111CON_ACKDT_MASK                   0x00000020
#define _I2C1111CON_ACKDT_LENGTH                 0x00000001

#define _I2C1111CON_STREN_POSITION               0x00000006
#define _I2C1111CON_STREN_MASK                   0x00000040
#define _I2C1111CON_STREN_LENGTH                 0x00000001

#define _I2C1111CON_GCEN_POSITION                0x00000007
#define _I2C1111CON_GCEN_MASK                    0x00000080
#define _I2C1111CON_GCEN_LENGTH                  0x00000001

#define _I2C1111CON_SMEN_POSITION                0x00000008
#define _I2C1111CON_SMEN_MASK                    0x00000100
#define _I2C1111CON_SMEN_LENGTH                  0x00000001

#define _I2C1111CON_DISSLW_POSITION              0x00000009
#define _I2C1111CON_DISSLW_MASK                  0x00000200
#define _I2C1111CON_DISSLW_LENGTH                0x00000001

#define _I2C1111CON_A10M_POSITION                0x0000000A
#define _I2C1111CON_A10M_MASK                    0x00000400
#define _I2C1111CON_A10M_LENGTH                  0x00000001

#define _I2C1111CON_STRICT_POSITION              0x0000000B
#define _I2C1111CON_STRICT_MASK                  0x00000800
#define _I2C1111CON_STRICT_LENGTH                0x00000001

#define _I2C1111CON_SCLREL_POSITION              0x0000000C
#define _I2C1111CON_SCLREL_MASK                  0x00001000
#define _I2C1111CON_SCLREL_LENGTH                0x00000001

#define _I2C1111CON_SIDL_POSITION                0x0000000D
#define _I2C1111CON_SIDL_MASK                    0x00002000
#define _I2C1111CON_SIDL_LENGTH                  0x00000001

#define _I2C1111CON_ON_POSITION                  0x0000000F
#define _I2C1111CON_ON_MASK                      0x00008000
#define _I2C1111CON_ON_LENGTH                    0x00000001

#define _I2C1111CON_IPMIEN_POSITION              0x0000000B
#define _I2C1111CON_IPMIEN_MASK                  0x00000800
#define _I2C1111CON_IPMIEN_LENGTH                0x00000001

#define _I2C1111CON_I2CSIDL_POSITION             0x0000000D
#define _I2C1111CON_I2CSIDL_MASK                 0x00002000
#define _I2C1111CON_I2CSIDL_LENGTH               0x00000001

#define _I2C1111CON_I2CEN_POSITION               0x0000000F
#define _I2C1111CON_I2CEN_MASK                   0x00008000
#define _I2C1111CON_I2CEN_LENGTH                 0x00000001

#define _I2C1111CON_w_POSITION                   0x00000000
#define _I2C1111CON_w_MASK                       0xFFFFFFFF
#define _I2C1111CON_w_LENGTH                     0x00000020

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_STRICT_POSITION                 0x0000000B
#define _I2C1CON_STRICT_MASK                     0x00000800
#define _I2C1CON_STRICT_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_SIDL_POSITION                   0x0000000D
#define _I2C1CON_SIDL_MASK                       0x00002000
#define _I2C1CON_SIDL_LENGTH                     0x00000001

#define _I2C1CON_ON_POSITION                     0x0000000F
#define _I2C1CON_ON_MASK                         0x00008000
#define _I2C1CON_ON_LENGTH                       0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

#define _I2C1CON_w_POSITION                      0x00000000
#define _I2C1CON_w_MASK                          0xFFFFFFFF
#define _I2C1CON_w_LENGTH                        0x00000020

#define _I2C1111STAT_TBF_POSITION                0x00000000
#define _I2C1111STAT_TBF_MASK                    0x00000001
#define _I2C1111STAT_TBF_LENGTH                  0x00000001

#define _I2C1111STAT_RBF_POSITION                0x00000001
#define _I2C1111STAT_RBF_MASK                    0x00000002
#define _I2C1111STAT_RBF_LENGTH                  0x00000001

#define _I2C1111STAT_R_W_POSITION                0x00000002
#define _I2C1111STAT_R_W_MASK                    0x00000004
#define _I2C1111STAT_R_W_LENGTH                  0x00000001

#define _I2C1111STAT_S_POSITION                  0x00000003
#define _I2C1111STAT_S_MASK                      0x00000008
#define _I2C1111STAT_S_LENGTH                    0x00000001

#define _I2C1111STAT_P_POSITION                  0x00000004
#define _I2C1111STAT_P_MASK                      0x00000010
#define _I2C1111STAT_P_LENGTH                    0x00000001

#define _I2C1111STAT_D_A_POSITION                0x00000005
#define _I2C1111STAT_D_A_MASK                    0x00000020
#define _I2C1111STAT_D_A_LENGTH                  0x00000001

#define _I2C1111STAT_I2COV_POSITION              0x00000006
#define _I2C1111STAT_I2COV_MASK                  0x00000040
#define _I2C1111STAT_I2COV_LENGTH                0x00000001

#define _I2C1111STAT_IWCOL_POSITION              0x00000007
#define _I2C1111STAT_IWCOL_MASK                  0x00000080
#define _I2C1111STAT_IWCOL_LENGTH                0x00000001

#define _I2C1111STAT_ADD10_POSITION              0x00000008
#define _I2C1111STAT_ADD10_MASK                  0x00000100
#define _I2C1111STAT_ADD10_LENGTH                0x00000001

#define _I2C1111STAT_GCSTAT_POSITION             0x00000009
#define _I2C1111STAT_GCSTAT_MASK                 0x00000200
#define _I2C1111STAT_GCSTAT_LENGTH               0x00000001

#define _I2C1111STAT_BCL_POSITION                0x0000000A
#define _I2C1111STAT_BCL_MASK                    0x00000400
#define _I2C1111STAT_BCL_LENGTH                  0x00000001

#define _I2C1111STAT_TRSTAT_POSITION             0x0000000E
#define _I2C1111STAT_TRSTAT_MASK                 0x00004000
#define _I2C1111STAT_TRSTAT_LENGTH               0x00000001

#define _I2C1111STAT_ACKSTAT_POSITION            0x0000000F
#define _I2C1111STAT_ACKSTAT_MASK                0x00008000
#define _I2C1111STAT_ACKSTAT_LENGTH              0x00000001

#define _I2C1111STAT_I2CPOV_POSITION             0x00000006
#define _I2C1111STAT_I2CPOV_MASK                 0x00000040
#define _I2C1111STAT_I2CPOV_LENGTH               0x00000001

#define _I2C1111STAT_w_POSITION                  0x00000000
#define _I2C1111STAT_w_MASK                      0xFFFFFFFF
#define _I2C1111STAT_w_LENGTH                    0x00000020

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1STAT_I2CPOV_POSITION                0x00000006
#define _I2C1STAT_I2CPOV_MASK                    0x00000040
#define _I2C1STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C1STAT_w_POSITION                     0x00000000
#define _I2C1STAT_w_MASK                         0xFFFFFFFF
#define _I2C1STAT_w_LENGTH                       0x00000020

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_STRICT_POSITION                 0x0000000B
#define _I2C2CON_STRICT_MASK                     0x00000800
#define _I2C2CON_STRICT_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_SIDL_POSITION                   0x0000000D
#define _I2C2CON_SIDL_MASK                       0x00002000
#define _I2C2CON_SIDL_LENGTH                     0x00000001

#define _I2C2CON_ON_POSITION                     0x0000000F
#define _I2C2CON_ON_MASK                         0x00008000
#define _I2C2CON_ON_LENGTH                       0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2CON_w_POSITION                      0x00000000
#define _I2C2CON_w_MASK                          0xFFFFFFFF
#define _I2C2CON_w_LENGTH                        0x00000020

#define _I2CABCON_SEN_POSITION                   0x00000000
#define _I2CABCON_SEN_MASK                       0x00000001
#define _I2CABCON_SEN_LENGTH                     0x00000001

#define _I2CABCON_RSEN_POSITION                  0x00000001
#define _I2CABCON_RSEN_MASK                      0x00000002
#define _I2CABCON_RSEN_LENGTH                    0x00000001

#define _I2CABCON_PEN_POSITION                   0x00000002
#define _I2CABCON_PEN_MASK                       0x00000004
#define _I2CABCON_PEN_LENGTH                     0x00000001

#define _I2CABCON_RCEN_POSITION                  0x00000003
#define _I2CABCON_RCEN_MASK                      0x00000008
#define _I2CABCON_RCEN_LENGTH                    0x00000001

#define _I2CABCON_ACKEN_POSITION                 0x00000004
#define _I2CABCON_ACKEN_MASK                     0x00000010
#define _I2CABCON_ACKEN_LENGTH                   0x00000001

#define _I2CABCON_ACKDT_POSITION                 0x00000005
#define _I2CABCON_ACKDT_MASK                     0x00000020
#define _I2CABCON_ACKDT_LENGTH                   0x00000001

#define _I2CABCON_STREN_POSITION                 0x00000006
#define _I2CABCON_STREN_MASK                     0x00000040
#define _I2CABCON_STREN_LENGTH                   0x00000001

#define _I2CABCON_GCEN_POSITION                  0x00000007
#define _I2CABCON_GCEN_MASK                      0x00000080
#define _I2CABCON_GCEN_LENGTH                    0x00000001

#define _I2CABCON_SMEN_POSITION                  0x00000008
#define _I2CABCON_SMEN_MASK                      0x00000100
#define _I2CABCON_SMEN_LENGTH                    0x00000001

#define _I2CABCON_DISSLW_POSITION                0x00000009
#define _I2CABCON_DISSLW_MASK                    0x00000200
#define _I2CABCON_DISSLW_LENGTH                  0x00000001

#define _I2CABCON_A10M_POSITION                  0x0000000A
#define _I2CABCON_A10M_MASK                      0x00000400
#define _I2CABCON_A10M_LENGTH                    0x00000001

#define _I2CABCON_STRICT_POSITION                0x0000000B
#define _I2CABCON_STRICT_MASK                    0x00000800
#define _I2CABCON_STRICT_LENGTH                  0x00000001

#define _I2CABCON_SCLREL_POSITION                0x0000000C
#define _I2CABCON_SCLREL_MASK                    0x00001000
#define _I2CABCON_SCLREL_LENGTH                  0x00000001

#define _I2CABCON_SIDL_POSITION                  0x0000000D
#define _I2CABCON_SIDL_MASK                      0x00002000
#define _I2CABCON_SIDL_LENGTH                    0x00000001

#define _I2CABCON_ON_POSITION                    0x0000000F
#define _I2CABCON_ON_MASK                        0x00008000
#define _I2CABCON_ON_LENGTH                      0x00000001

#define _I2CABCON_IPMIEN_POSITION                0x0000000B
#define _I2CABCON_IPMIEN_MASK                    0x00000800
#define _I2CABCON_IPMIEN_LENGTH                  0x00000001

#define _I2CABCON_I2CSIDL_POSITION               0x0000000D
#define _I2CABCON_I2CSIDL_MASK                   0x00002000
#define _I2CABCON_I2CSIDL_LENGTH                 0x00000001

#define _I2CABCON_I2CEN_POSITION                 0x0000000F
#define _I2CABCON_I2CEN_MASK                     0x00008000
#define _I2CABCON_I2CEN_LENGTH                   0x00000001

#define _I2CABCON_w_POSITION                     0x00000000
#define _I2CABCON_w_MASK                         0xFFFFFFFF
#define _I2CABCON_w_LENGTH                       0x00000020

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2STAT_I2CPOV_POSITION                0x00000006
#define _I2C2STAT_I2CPOV_MASK                    0x00000040
#define _I2C2STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C2STAT_w_POSITION                     0x00000000
#define _I2C2STAT_w_MASK                         0xFFFFFFFF
#define _I2C2STAT_w_LENGTH                       0x00000020

#define _I2CABSTAT_TBF_POSITION                  0x00000000
#define _I2CABSTAT_TBF_MASK                      0x00000001
#define _I2CABSTAT_TBF_LENGTH                    0x00000001

#define _I2CABSTAT_RBF_POSITION                  0x00000001
#define _I2CABSTAT_RBF_MASK                      0x00000002
#define _I2CABSTAT_RBF_LENGTH                    0x00000001

#define _I2CABSTAT_R_W_POSITION                  0x00000002
#define _I2CABSTAT_R_W_MASK                      0x00000004
#define _I2CABSTAT_R_W_LENGTH                    0x00000001

#define _I2CABSTAT_S_POSITION                    0x00000003
#define _I2CABSTAT_S_MASK                        0x00000008
#define _I2CABSTAT_S_LENGTH                      0x00000001

#define _I2CABSTAT_P_POSITION                    0x00000004
#define _I2CABSTAT_P_MASK                        0x00000010
#define _I2CABSTAT_P_LENGTH                      0x00000001

#define _I2CABSTAT_D_A_POSITION                  0x00000005
#define _I2CABSTAT_D_A_MASK                      0x00000020
#define _I2CABSTAT_D_A_LENGTH                    0x00000001

#define _I2CABSTAT_I2COV_POSITION                0x00000006
#define _I2CABSTAT_I2COV_MASK                    0x00000040
#define _I2CABSTAT_I2COV_LENGTH                  0x00000001

#define _I2CABSTAT_IWCOL_POSITION                0x00000007
#define _I2CABSTAT_IWCOL_MASK                    0x00000080
#define _I2CABSTAT_IWCOL_LENGTH                  0x00000001

#define _I2CABSTAT_ADD10_POSITION                0x00000008
#define _I2CABSTAT_ADD10_MASK                    0x00000100
#define _I2CABSTAT_ADD10_LENGTH                  0x00000001

#define _I2CABSTAT_GCSTAT_POSITION               0x00000009
#define _I2CABSTAT_GCSTAT_MASK                   0x00000200
#define _I2CABSTAT_GCSTAT_LENGTH                 0x00000001

#define _I2CABSTAT_BCL_POSITION                  0x0000000A
#define _I2CABSTAT_BCL_MASK                      0x00000400
#define _I2CABSTAT_BCL_LENGTH                    0x00000001

#define _I2CABSTAT_TRSTAT_POSITION               0x0000000E
#define _I2CABSTAT_TRSTAT_MASK                   0x00004000
#define _I2CABSTAT_TRSTAT_LENGTH                 0x00000001

#define _I2CABSTAT_ACKSTAT_POSITION              0x0000000F
#define _I2CABSTAT_ACKSTAT_MASK                  0x00008000
#define _I2CABSTAT_ACKSTAT_LENGTH                0x00000001

#define _I2CABSTAT_I2CPOV_POSITION               0x00000006
#define _I2CABSTAT_I2CPOV_MASK                   0x00000040
#define _I2CABSTAT_I2CPOV_LENGTH                 0x00000001

#define _I2CABSTAT_w_POSITION                    0x00000000
#define _I2CABSTAT_w_MASK                        0xFFFFFFFF
#define _I2CABSTAT_w_LENGTH                      0x00000020

#define _SPI1CON_SRXISEL_POSITION                0x00000000
#define _SPI1CON_SRXISEL_MASK                    0x00000003
#define _SPI1CON_SRXISEL_LENGTH                  0x00000002

#define _SPI1CON_STXISEL_POSITION                0x00000002
#define _SPI1CON_STXISEL_MASK                    0x0000000C
#define _SPI1CON_STXISEL_LENGTH                  0x00000002

#define _SPI1CON_DISSDI_POSITION                 0x00000004
#define _SPI1CON_DISSDI_MASK                     0x00000010
#define _SPI1CON_DISSDI_LENGTH                   0x00000001

#define _SPI1CON_MSTEN_POSITION                  0x00000005
#define _SPI1CON_MSTEN_MASK                      0x00000020
#define _SPI1CON_MSTEN_LENGTH                    0x00000001

#define _SPI1CON_CKP_POSITION                    0x00000006
#define _SPI1CON_CKP_MASK                        0x00000040
#define _SPI1CON_CKP_LENGTH                      0x00000001

#define _SPI1CON_SSEN_POSITION                   0x00000007
#define _SPI1CON_SSEN_MASK                       0x00000080
#define _SPI1CON_SSEN_LENGTH                     0x00000001

#define _SPI1CON_CKE_POSITION                    0x00000008
#define _SPI1CON_CKE_MASK                        0x00000100
#define _SPI1CON_CKE_LENGTH                      0x00000001

#define _SPI1CON_SMP_POSITION                    0x00000009
#define _SPI1CON_SMP_MASK                        0x00000200
#define _SPI1CON_SMP_LENGTH                      0x00000001

#define _SPI1CON_MODE16_POSITION                 0x0000000A
#define _SPI1CON_MODE16_MASK                     0x00000400
#define _SPI1CON_MODE16_LENGTH                   0x00000001

#define _SPI1CON_MODE32_POSITION                 0x0000000B
#define _SPI1CON_MODE32_MASK                     0x00000800
#define _SPI1CON_MODE32_LENGTH                   0x00000001

#define _SPI1CON_DISSDO_POSITION                 0x0000000C
#define _SPI1CON_DISSDO_MASK                     0x00001000
#define _SPI1CON_DISSDO_LENGTH                   0x00000001

#define _SPI1CON_SIDL_POSITION                   0x0000000D
#define _SPI1CON_SIDL_MASK                       0x00002000
#define _SPI1CON_SIDL_LENGTH                     0x00000001

#define _SPI1CON_ON_POSITION                     0x0000000F
#define _SPI1CON_ON_MASK                         0x00008000
#define _SPI1CON_ON_LENGTH                       0x00000001

#define _SPI1CON_ENHBUF_POSITION                 0x00000010
#define _SPI1CON_ENHBUF_MASK                     0x00010000
#define _SPI1CON_ENHBUF_LENGTH                   0x00000001

#define _SPI1CON_SPIFE_POSITION                  0x00000011
#define _SPI1CON_SPIFE_MASK                      0x00020000
#define _SPI1CON_SPIFE_LENGTH                    0x00000001

#define _SPI1CON_MCLKSEL_POSITION                0x00000017
#define _SPI1CON_MCLKSEL_MASK                    0x00800000
#define _SPI1CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI1CON_FRMCNT_POSITION                 0x00000018
#define _SPI1CON_FRMCNT_MASK                     0x07000000
#define _SPI1CON_FRMCNT_LENGTH                   0x00000003

#define _SPI1CON_FRMSYPW_POSITION                0x0000001B
#define _SPI1CON_FRMSYPW_MASK                    0x08000000
#define _SPI1CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI1CON_MSSEN_POSITION                  0x0000001C
#define _SPI1CON_MSSEN_MASK                      0x10000000
#define _SPI1CON_MSSEN_LENGTH                    0x00000001

#define _SPI1CON_FRMPOL_POSITION                 0x0000001D
#define _SPI1CON_FRMPOL_MASK                     0x20000000
#define _SPI1CON_FRMPOL_LENGTH                   0x00000001

#define _SPI1CON_FRMSYNC_POSITION                0x0000001E
#define _SPI1CON_FRMSYNC_MASK                    0x40000000
#define _SPI1CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI1CON_FRMEN_POSITION                  0x0000001F
#define _SPI1CON_FRMEN_MASK                      0x80000000
#define _SPI1CON_FRMEN_LENGTH                    0x00000001

#define _SPI1CON_w_POSITION                      0x00000000
#define _SPI1CON_w_MASK                          0xFFFFFFFF
#define _SPI1CON_w_LENGTH                        0x00000020

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBE_POSITION                0x00000003
#define _SPI1STAT_SPITBE_MASK                    0x00000008
#define _SPI1STAT_SPITBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBE_POSITION                0x00000005
#define _SPI1STAT_SPIRBE_MASK                    0x00000020
#define _SPI1STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMT_POSITION                  0x00000007
#define _SPI1STAT_SRMT_MASK                      0x00000080
#define _SPI1STAT_SRMT_LENGTH                    0x00000001

#define _SPI1STAT_SPITUR_POSITION                0x00000008
#define _SPI1STAT_SPITUR_MASK                    0x00000100
#define _SPI1STAT_SPITUR_LENGTH                  0x00000001

#define _SPI1STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI1STAT_SPIBUSY_MASK                   0x00000800
#define _SPI1STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI1STAT_FRMERR_POSITION                0x0000000C
#define _SPI1STAT_FRMERR_MASK                    0x00001000
#define _SPI1STAT_FRMERR_LENGTH                  0x00000001

#define _SPI1STAT_TXBUFELM_POSITION              0x00000010
#define _SPI1STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI1STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_RXBUFELM_POSITION              0x00000018
#define _SPI1STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI1STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

#define _SPI1CON2_AUDMOD_POSITION                0x00000000
#define _SPI1CON2_AUDMOD_MASK                    0x00000003
#define _SPI1CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI1CON2_AUDMONO_POSITION               0x00000003
#define _SPI1CON2_AUDMONO_MASK                   0x00000008
#define _SPI1CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI1CON2_AUDEN_POSITION                 0x00000007
#define _SPI1CON2_AUDEN_MASK                     0x00000080
#define _SPI1CON2_AUDEN_LENGTH                   0x00000001

#define _SPI1CON2_IGNTUR_POSITION                0x00000008
#define _SPI1CON2_IGNTUR_MASK                    0x00000100
#define _SPI1CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI1CON2_IGNROV_POSITION                0x00000009
#define _SPI1CON2_IGNROV_MASK                    0x00000200
#define _SPI1CON2_IGNROV_LENGTH                  0x00000001

#define _SPI1CON2_SPITUREN_POSITION              0x0000000A
#define _SPI1CON2_SPITUREN_MASK                  0x00000400
#define _SPI1CON2_SPITUREN_LENGTH                0x00000001

#define _SPI1CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI1CON2_SPIROVEN_MASK                  0x00000800
#define _SPI1CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI1CON2_FRMERREN_POSITION              0x0000000C
#define _SPI1CON2_FRMERREN_MASK                  0x00001000
#define _SPI1CON2_FRMERREN_LENGTH                0x00000001

#define _SPI1CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI1CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI1CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI1CON2_AUDMOD0_POSITION               0x00000000
#define _SPI1CON2_AUDMOD0_MASK                   0x00000001
#define _SPI1CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI1CON2_AUDMOD1_POSITION               0x00000001
#define _SPI1CON2_AUDMOD1_MASK                   0x00000002
#define _SPI1CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI1CON2_w_POSITION                     0x00000000
#define _SPI1CON2_w_MASK                         0xFFFFFFFF
#define _SPI1CON2_w_LENGTH                       0x00000020

#define _SPI2CON_SRXISEL_POSITION                0x00000000
#define _SPI2CON_SRXISEL_MASK                    0x00000003
#define _SPI2CON_SRXISEL_LENGTH                  0x00000002

#define _SPI2CON_STXISEL_POSITION                0x00000002
#define _SPI2CON_STXISEL_MASK                    0x0000000C
#define _SPI2CON_STXISEL_LENGTH                  0x00000002

#define _SPI2CON_DISSDI_POSITION                 0x00000004
#define _SPI2CON_DISSDI_MASK                     0x00000010
#define _SPI2CON_DISSDI_LENGTH                   0x00000001

#define _SPI2CON_MSTEN_POSITION                  0x00000005
#define _SPI2CON_MSTEN_MASK                      0x00000020
#define _SPI2CON_MSTEN_LENGTH                    0x00000001

#define _SPI2CON_CKP_POSITION                    0x00000006
#define _SPI2CON_CKP_MASK                        0x00000040
#define _SPI2CON_CKP_LENGTH                      0x00000001

#define _SPI2CON_SSEN_POSITION                   0x00000007
#define _SPI2CON_SSEN_MASK                       0x00000080
#define _SPI2CON_SSEN_LENGTH                     0x00000001

#define _SPI2CON_CKE_POSITION                    0x00000008
#define _SPI2CON_CKE_MASK                        0x00000100
#define _SPI2CON_CKE_LENGTH                      0x00000001

#define _SPI2CON_SMP_POSITION                    0x00000009
#define _SPI2CON_SMP_MASK                        0x00000200
#define _SPI2CON_SMP_LENGTH                      0x00000001

#define _SPI2CON_MODE16_POSITION                 0x0000000A
#define _SPI2CON_MODE16_MASK                     0x00000400
#define _SPI2CON_MODE16_LENGTH                   0x00000001

#define _SPI2CON_MODE32_POSITION                 0x0000000B
#define _SPI2CON_MODE32_MASK                     0x00000800
#define _SPI2CON_MODE32_LENGTH                   0x00000001

#define _SPI2CON_DISSDO_POSITION                 0x0000000C
#define _SPI2CON_DISSDO_MASK                     0x00001000
#define _SPI2CON_DISSDO_LENGTH                   0x00000001

#define _SPI2CON_SIDL_POSITION                   0x0000000D
#define _SPI2CON_SIDL_MASK                       0x00002000
#define _SPI2CON_SIDL_LENGTH                     0x00000001

#define _SPI2CON_ON_POSITION                     0x0000000F
#define _SPI2CON_ON_MASK                         0x00008000
#define _SPI2CON_ON_LENGTH                       0x00000001

#define _SPI2CON_ENHBUF_POSITION                 0x00000010
#define _SPI2CON_ENHBUF_MASK                     0x00010000
#define _SPI2CON_ENHBUF_LENGTH                   0x00000001

#define _SPI2CON_SPIFE_POSITION                  0x00000011
#define _SPI2CON_SPIFE_MASK                      0x00020000
#define _SPI2CON_SPIFE_LENGTH                    0x00000001

#define _SPI2CON_MCLKSEL_POSITION                0x00000017
#define _SPI2CON_MCLKSEL_MASK                    0x00800000
#define _SPI2CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI2CON_FRMCNT_POSITION                 0x00000018
#define _SPI2CON_FRMCNT_MASK                     0x07000000
#define _SPI2CON_FRMCNT_LENGTH                   0x00000003

#define _SPI2CON_FRMSYPW_POSITION                0x0000001B
#define _SPI2CON_FRMSYPW_MASK                    0x08000000
#define _SPI2CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI2CON_MSSEN_POSITION                  0x0000001C
#define _SPI2CON_MSSEN_MASK                      0x10000000
#define _SPI2CON_MSSEN_LENGTH                    0x00000001

#define _SPI2CON_FRMPOL_POSITION                 0x0000001D
#define _SPI2CON_FRMPOL_MASK                     0x20000000
#define _SPI2CON_FRMPOL_LENGTH                   0x00000001

#define _SPI2CON_FRMSYNC_POSITION                0x0000001E
#define _SPI2CON_FRMSYNC_MASK                    0x40000000
#define _SPI2CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI2CON_FRMEN_POSITION                  0x0000001F
#define _SPI2CON_FRMEN_MASK                      0x80000000
#define _SPI2CON_FRMEN_LENGTH                    0x00000001

#define _SPI2CON_w_POSITION                      0x00000000
#define _SPI2CON_w_MASK                          0xFFFFFFFF
#define _SPI2CON_w_LENGTH                        0x00000020

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBE_POSITION                0x00000003
#define _SPI2STAT_SPITBE_MASK                    0x00000008
#define _SPI2STAT_SPITBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIRBE_POSITION                0x00000005
#define _SPI2STAT_SPIRBE_MASK                    0x00000020
#define _SPI2STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMT_POSITION                  0x00000007
#define _SPI2STAT_SRMT_MASK                      0x00000080
#define _SPI2STAT_SRMT_LENGTH                    0x00000001

#define _SPI2STAT_SPITUR_POSITION                0x00000008
#define _SPI2STAT_SPITUR_MASK                    0x00000100
#define _SPI2STAT_SPITUR_LENGTH                  0x00000001

#define _SPI2STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI2STAT_SPIBUSY_MASK                   0x00000800
#define _SPI2STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI2STAT_FRMERR_POSITION                0x0000000C
#define _SPI2STAT_FRMERR_MASK                    0x00001000
#define _SPI2STAT_FRMERR_LENGTH                  0x00000001

#define _SPI2STAT_TXBUFELM_POSITION              0x00000010
#define _SPI2STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI2STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_RXBUFELM_POSITION              0x00000018
#define _SPI2STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI2STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

#define _SPI2CON2_AUDMOD_POSITION                0x00000000
#define _SPI2CON2_AUDMOD_MASK                    0x00000003
#define _SPI2CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI2CON2_AUDMONO_POSITION               0x00000003
#define _SPI2CON2_AUDMONO_MASK                   0x00000008
#define _SPI2CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI2CON2_AUDEN_POSITION                 0x00000007
#define _SPI2CON2_AUDEN_MASK                     0x00000080
#define _SPI2CON2_AUDEN_LENGTH                   0x00000001

#define _SPI2CON2_IGNTUR_POSITION                0x00000008
#define _SPI2CON2_IGNTUR_MASK                    0x00000100
#define _SPI2CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI2CON2_IGNROV_POSITION                0x00000009
#define _SPI2CON2_IGNROV_MASK                    0x00000200
#define _SPI2CON2_IGNROV_LENGTH                  0x00000001

#define _SPI2CON2_SPITUREN_POSITION              0x0000000A
#define _SPI2CON2_SPITUREN_MASK                  0x00000400
#define _SPI2CON2_SPITUREN_LENGTH                0x00000001

#define _SPI2CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI2CON2_SPIROVEN_MASK                  0x00000800
#define _SPI2CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI2CON2_FRMERREN_POSITION              0x0000000C
#define _SPI2CON2_FRMERREN_MASK                  0x00001000
#define _SPI2CON2_FRMERREN_LENGTH                0x00000001

#define _SPI2CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI2CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI2CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI2CON2_AUDMOD0_POSITION               0x00000000
#define _SPI2CON2_AUDMOD0_MASK                   0x00000001
#define _SPI2CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI2CON2_AUDMOD1_POSITION               0x00000001
#define _SPI2CON2_AUDMOD1_MASK                   0x00000002
#define _SPI2CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI2CON2_w_POSITION                     0x00000000
#define _SPI2CON2_w_MASK                         0xFFFFFFFF
#define _SPI2CON2_w_LENGTH                       0x00000020

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_SIDL_POSITION                    0x0000000D
#define _U1MODE_SIDL_MASK                        0x00002000
#define _U1MODE_SIDL_LENGTH                      0x00000001

#define _U1MODE_ON_POSITION                      0x0000000F
#define _U1MODE_ON_MASK                          0x00008000
#define _U1MODE_ON_LENGTH                        0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_w_POSITION                       0x00000000
#define _U1MODE_w_MASK                           0xFFFFFFFF
#define _U1MODE_w_LENGTH                         0x00000020

#define _UDCMODE_STSEL_POSITION                  0x00000000
#define _UDCMODE_STSEL_MASK                      0x00000001
#define _UDCMODE_STSEL_LENGTH                    0x00000001

#define _UDCMODE_PDSEL_POSITION                  0x00000001
#define _UDCMODE_PDSEL_MASK                      0x00000006
#define _UDCMODE_PDSEL_LENGTH                    0x00000002

#define _UDCMODE_BRGH_POSITION                   0x00000003
#define _UDCMODE_BRGH_MASK                       0x00000008
#define _UDCMODE_BRGH_LENGTH                     0x00000001

#define _UDCMODE_RXINV_POSITION                  0x00000004
#define _UDCMODE_RXINV_MASK                      0x00000010
#define _UDCMODE_RXINV_LENGTH                    0x00000001

#define _UDCMODE_ABAUD_POSITION                  0x00000005
#define _UDCMODE_ABAUD_MASK                      0x00000020
#define _UDCMODE_ABAUD_LENGTH                    0x00000001

#define _UDCMODE_LPBACK_POSITION                 0x00000006
#define _UDCMODE_LPBACK_MASK                     0x00000040
#define _UDCMODE_LPBACK_LENGTH                   0x00000001

#define _UDCMODE_WAKE_POSITION                   0x00000007
#define _UDCMODE_WAKE_MASK                       0x00000080
#define _UDCMODE_WAKE_LENGTH                     0x00000001

#define _UDCMODE_UEN_POSITION                    0x00000008
#define _UDCMODE_UEN_MASK                        0x00000300
#define _UDCMODE_UEN_LENGTH                      0x00000002

#define _UDCMODE_RTSMD_POSITION                  0x0000000B
#define _UDCMODE_RTSMD_MASK                      0x00000800
#define _UDCMODE_RTSMD_LENGTH                    0x00000001

#define _UDCMODE_IREN_POSITION                   0x0000000C
#define _UDCMODE_IREN_MASK                       0x00001000
#define _UDCMODE_IREN_LENGTH                     0x00000001

#define _UDCMODE_SIDL_POSITION                   0x0000000D
#define _UDCMODE_SIDL_MASK                       0x00002000
#define _UDCMODE_SIDL_LENGTH                     0x00000001

#define _UDCMODE_ON_POSITION                     0x0000000F
#define _UDCMODE_ON_MASK                         0x00008000
#define _UDCMODE_ON_LENGTH                       0x00000001

#define _UDCMODE_PDSEL0_POSITION                 0x00000001
#define _UDCMODE_PDSEL0_MASK                     0x00000002
#define _UDCMODE_PDSEL0_LENGTH                   0x00000001

#define _UDCMODE_PDSEL1_POSITION                 0x00000002
#define _UDCMODE_PDSEL1_MASK                     0x00000004
#define _UDCMODE_PDSEL1_LENGTH                   0x00000001

#define _UDCMODE_UEN0_POSITION                   0x00000008
#define _UDCMODE_UEN0_MASK                       0x00000100
#define _UDCMODE_UEN0_LENGTH                     0x00000001

#define _UDCMODE_UEN1_POSITION                   0x00000009
#define _UDCMODE_UEN1_MASK                       0x00000200
#define _UDCMODE_UEN1_LENGTH                     0x00000001

#define _UDCMODE_USIDL_POSITION                  0x0000000D
#define _UDCMODE_USIDL_MASK                      0x00002000
#define _UDCMODE_USIDL_LENGTH                    0x00000001

#define _UDCMODE_UARTEN_POSITION                 0x0000000F
#define _UDCMODE_UARTEN_MASK                     0x00008000
#define _UDCMODE_UARTEN_LENGTH                   0x00000001

#define _UDCMODE_w_POSITION                      0x00000000
#define _UDCMODE_w_MASK                          0xFFFFFFFF
#define _UDCMODE_w_LENGTH                        0x00000020

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_URXEN_POSITION                    0x0000000C
#define _U1STA_URXEN_MASK                        0x00001000
#define _U1STA_URXEN_LENGTH                      0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000D
#define _U1STA_UTXINV_MASK                       0x00002000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL_POSITION                  0x0000000E
#define _U1STA_UTXISEL_MASK                      0x0000C000
#define _U1STA_UTXISEL_LENGTH                    0x00000002

#define _U1STA_ADDR_POSITION                     0x00000010
#define _U1STA_ADDR_MASK                         0x00FF0000
#define _U1STA_ADDR_LENGTH                       0x00000008

#define _U1STA_ADM_EN_POSITION                   0x00000018
#define _U1STA_ADM_EN_MASK                       0x01000000
#define _U1STA_ADM_EN_LENGTH                     0x00000001

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000E
#define _U1STA_UTXISEL0_MASK                     0x00004000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXSEL_POSITION                   0x0000000E
#define _U1STA_UTXSEL_MASK                       0x0000C000
#define _U1STA_UTXSEL_LENGTH                     0x00000002

#define _U1STA_w_POSITION                        0x00000000
#define _U1STA_w_MASK                            0xFFFFFFFF
#define _U1STA_w_LENGTH                          0x00000020

#define _UDCSTA_URXDA_POSITION                   0x00000000
#define _UDCSTA_URXDA_MASK                       0x00000001
#define _UDCSTA_URXDA_LENGTH                     0x00000001

#define _UDCSTA_OERR_POSITION                    0x00000001
#define _UDCSTA_OERR_MASK                        0x00000002
#define _UDCSTA_OERR_LENGTH                      0x00000001

#define _UDCSTA_FERR_POSITION                    0x00000002
#define _UDCSTA_FERR_MASK                        0x00000004
#define _UDCSTA_FERR_LENGTH                      0x00000001

#define _UDCSTA_PERR_POSITION                    0x00000003
#define _UDCSTA_PERR_MASK                        0x00000008
#define _UDCSTA_PERR_LENGTH                      0x00000001

#define _UDCSTA_RIDLE_POSITION                   0x00000004
#define _UDCSTA_RIDLE_MASK                       0x00000010
#define _UDCSTA_RIDLE_LENGTH                     0x00000001

#define _UDCSTA_ADDEN_POSITION                   0x00000005
#define _UDCSTA_ADDEN_MASK                       0x00000020
#define _UDCSTA_ADDEN_LENGTH                     0x00000001

#define _UDCSTA_URXISEL_POSITION                 0x00000006
#define _UDCSTA_URXISEL_MASK                     0x000000C0
#define _UDCSTA_URXISEL_LENGTH                   0x00000002

#define _UDCSTA_TRMT_POSITION                    0x00000008
#define _UDCSTA_TRMT_MASK                        0x00000100
#define _UDCSTA_TRMT_LENGTH                      0x00000001

#define _UDCSTA_UTXBF_POSITION                   0x00000009
#define _UDCSTA_UTXBF_MASK                       0x00000200
#define _UDCSTA_UTXBF_LENGTH                     0x00000001

#define _UDCSTA_UTXEN_POSITION                   0x0000000A
#define _UDCSTA_UTXEN_MASK                       0x00000400
#define _UDCSTA_UTXEN_LENGTH                     0x00000001

#define _UDCSTA_UTXBRK_POSITION                  0x0000000B
#define _UDCSTA_UTXBRK_MASK                      0x00000800
#define _UDCSTA_UTXBRK_LENGTH                    0x00000001

#define _UDCSTA_URXEN_POSITION                   0x0000000C
#define _UDCSTA_URXEN_MASK                       0x00001000
#define _UDCSTA_URXEN_LENGTH                     0x00000001

#define _UDCSTA_UTXINV_POSITION                  0x0000000D
#define _UDCSTA_UTXINV_MASK                      0x00002000
#define _UDCSTA_UTXINV_LENGTH                    0x00000001

#define _UDCSTA_UTXISEL_POSITION                 0x0000000E
#define _UDCSTA_UTXISEL_MASK                     0x0000C000
#define _UDCSTA_UTXISEL_LENGTH                   0x00000002

#define _UDCSTA_ADDR_POSITION                    0x00000010
#define _UDCSTA_ADDR_MASK                        0x00FF0000
#define _UDCSTA_ADDR_LENGTH                      0x00000008

#define _UDCSTA_ADM_EN_POSITION                  0x00000018
#define _UDCSTA_ADM_EN_MASK                      0x01000000
#define _UDCSTA_ADM_EN_LENGTH                    0x00000001

#define _UDCSTA_URXISEL0_POSITION                0x00000006
#define _UDCSTA_URXISEL0_MASK                    0x00000040
#define _UDCSTA_URXISEL0_LENGTH                  0x00000001

#define _UDCSTA_URXISEL1_POSITION                0x00000007
#define _UDCSTA_URXISEL1_MASK                    0x00000080
#define _UDCSTA_URXISEL1_LENGTH                  0x00000001

#define _UDCSTA_UTXISEL0_POSITION                0x0000000E
#define _UDCSTA_UTXISEL0_MASK                    0x00004000
#define _UDCSTA_UTXISEL0_LENGTH                  0x00000001

#define _UDCSTA_UTXISEL1_POSITION                0x0000000F
#define _UDCSTA_UTXISEL1_MASK                    0x00008000
#define _UDCSTA_UTXISEL1_LENGTH                  0x00000001

#define _UDCSTA_UTXSEL_POSITION                  0x0000000E
#define _UDCSTA_UTXSEL_MASK                      0x0000C000
#define _UDCSTA_UTXSEL_LENGTH                    0x00000002

#define _UDCSTA_w_POSITION                       0x00000000
#define _UDCSTA_w_MASK                           0xFFFFFFFF
#define _UDCSTA_w_LENGTH                         0x00000020

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_SIDL_POSITION                    0x0000000D
#define _U2MODE_SIDL_MASK                        0x00002000
#define _U2MODE_SIDL_LENGTH                      0x00000001

#define _U2MODE_ON_POSITION                      0x0000000F
#define _U2MODE_ON_MASK                          0x00008000
#define _U2MODE_ON_LENGTH                        0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_w_POSITION                       0x00000000
#define _U2MODE_w_MASK                           0xFFFFFFFF
#define _U2MODE_w_LENGTH                         0x00000020

#define _U8932MODE_STSEL_POSITION                0x00000000
#define _U8932MODE_STSEL_MASK                    0x00000001
#define _U8932MODE_STSEL_LENGTH                  0x00000001

#define _U8932MODE_PDSEL_POSITION                0x00000001
#define _U8932MODE_PDSEL_MASK                    0x00000006
#define _U8932MODE_PDSEL_LENGTH                  0x00000002

#define _U8932MODE_BRGH_POSITION                 0x00000003
#define _U8932MODE_BRGH_MASK                     0x00000008
#define _U8932MODE_BRGH_LENGTH                   0x00000001

#define _U8932MODE_RXINV_POSITION                0x00000004
#define _U8932MODE_RXINV_MASK                    0x00000010
#define _U8932MODE_RXINV_LENGTH                  0x00000001

#define _U8932MODE_ABAUD_POSITION                0x00000005
#define _U8932MODE_ABAUD_MASK                    0x00000020
#define _U8932MODE_ABAUD_LENGTH                  0x00000001

#define _U8932MODE_LPBACK_POSITION               0x00000006
#define _U8932MODE_LPBACK_MASK                   0x00000040
#define _U8932MODE_LPBACK_LENGTH                 0x00000001

#define _U8932MODE_WAKE_POSITION                 0x00000007
#define _U8932MODE_WAKE_MASK                     0x00000080
#define _U8932MODE_WAKE_LENGTH                   0x00000001

#define _U8932MODE_UEN_POSITION                  0x00000008
#define _U8932MODE_UEN_MASK                      0x00000300
#define _U8932MODE_UEN_LENGTH                    0x00000002

#define _U8932MODE_RTSMD_POSITION                0x0000000B
#define _U8932MODE_RTSMD_MASK                    0x00000800
#define _U8932MODE_RTSMD_LENGTH                  0x00000001

#define _U8932MODE_IREN_POSITION                 0x0000000C
#define _U8932MODE_IREN_MASK                     0x00001000
#define _U8932MODE_IREN_LENGTH                   0x00000001

#define _U8932MODE_SIDL_POSITION                 0x0000000D
#define _U8932MODE_SIDL_MASK                     0x00002000
#define _U8932MODE_SIDL_LENGTH                   0x00000001

#define _U8932MODE_ON_POSITION                   0x0000000F
#define _U8932MODE_ON_MASK                       0x00008000
#define _U8932MODE_ON_LENGTH                     0x00000001

#define _U8932MODE_PDSEL0_POSITION               0x00000001
#define _U8932MODE_PDSEL0_MASK                   0x00000002
#define _U8932MODE_PDSEL0_LENGTH                 0x00000001

#define _U8932MODE_PDSEL1_POSITION               0x00000002
#define _U8932MODE_PDSEL1_MASK                   0x00000004
#define _U8932MODE_PDSEL1_LENGTH                 0x00000001

#define _U8932MODE_UEN0_POSITION                 0x00000008
#define _U8932MODE_UEN0_MASK                     0x00000100
#define _U8932MODE_UEN0_LENGTH                   0x00000001

#define _U8932MODE_UEN1_POSITION                 0x00000009
#define _U8932MODE_UEN1_MASK                     0x00000200
#define _U8932MODE_UEN1_LENGTH                   0x00000001

#define _U8932MODE_USIDL_POSITION                0x0000000D
#define _U8932MODE_USIDL_MASK                    0x00002000
#define _U8932MODE_USIDL_LENGTH                  0x00000001

#define _U8932MODE_UARTEN_POSITION               0x0000000F
#define _U8932MODE_UARTEN_MASK                   0x00008000
#define _U8932MODE_UARTEN_LENGTH                 0x00000001

#define _U8932MODE_w_POSITION                    0x00000000
#define _U8932MODE_w_MASK                        0xFFFFFFFF
#define _U8932MODE_w_LENGTH                      0x00000020

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_URXEN_POSITION                    0x0000000C
#define _U2STA_URXEN_MASK                        0x00001000
#define _U2STA_URXEN_LENGTH                      0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000D
#define _U2STA_UTXINV_MASK                       0x00002000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL_POSITION                  0x0000000E
#define _U2STA_UTXISEL_MASK                      0x0000C000
#define _U2STA_UTXISEL_LENGTH                    0x00000002

#define _U2STA_ADDR_POSITION                     0x00000010
#define _U2STA_ADDR_MASK                         0x00FF0000
#define _U2STA_ADDR_LENGTH                       0x00000008

#define _U2STA_ADM_EN_POSITION                   0x00000018
#define _U2STA_ADM_EN_MASK                       0x01000000
#define _U2STA_ADM_EN_LENGTH                     0x00000001

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000E
#define _U2STA_UTXISEL0_MASK                     0x00004000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXSEL_POSITION                   0x0000000E
#define _U2STA_UTXSEL_MASK                       0x0000C000
#define _U2STA_UTXSEL_LENGTH                     0x00000002

#define _U2STA_w_POSITION                        0x00000000
#define _U2STA_w_MASK                            0xFFFFFFFF
#define _U2STA_w_LENGTH                          0x00000020

#define _U8932STA_URXDA_POSITION                 0x00000000
#define _U8932STA_URXDA_MASK                     0x00000001
#define _U8932STA_URXDA_LENGTH                   0x00000001

#define _U8932STA_OERR_POSITION                  0x00000001
#define _U8932STA_OERR_MASK                      0x00000002
#define _U8932STA_OERR_LENGTH                    0x00000001

#define _U8932STA_FERR_POSITION                  0x00000002
#define _U8932STA_FERR_MASK                      0x00000004
#define _U8932STA_FERR_LENGTH                    0x00000001

#define _U8932STA_PERR_POSITION                  0x00000003
#define _U8932STA_PERR_MASK                      0x00000008
#define _U8932STA_PERR_LENGTH                    0x00000001

#define _U8932STA_RIDLE_POSITION                 0x00000004
#define _U8932STA_RIDLE_MASK                     0x00000010
#define _U8932STA_RIDLE_LENGTH                   0x00000001

#define _U8932STA_ADDEN_POSITION                 0x00000005
#define _U8932STA_ADDEN_MASK                     0x00000020
#define _U8932STA_ADDEN_LENGTH                   0x00000001

#define _U8932STA_URXISEL_POSITION               0x00000006
#define _U8932STA_URXISEL_MASK                   0x000000C0
#define _U8932STA_URXISEL_LENGTH                 0x00000002

#define _U8932STA_TRMT_POSITION                  0x00000008
#define _U8932STA_TRMT_MASK                      0x00000100
#define _U8932STA_TRMT_LENGTH                    0x00000001

#define _U8932STA_UTXBF_POSITION                 0x00000009
#define _U8932STA_UTXBF_MASK                     0x00000200
#define _U8932STA_UTXBF_LENGTH                   0x00000001

#define _U8932STA_UTXEN_POSITION                 0x0000000A
#define _U8932STA_UTXEN_MASK                     0x00000400
#define _U8932STA_UTXEN_LENGTH                   0x00000001

#define _U8932STA_UTXBRK_POSITION                0x0000000B
#define _U8932STA_UTXBRK_MASK                    0x00000800
#define _U8932STA_UTXBRK_LENGTH                  0x00000001

#define _U8932STA_URXEN_POSITION                 0x0000000C
#define _U8932STA_URXEN_MASK                     0x00001000
#define _U8932STA_URXEN_LENGTH                   0x00000001

#define _U8932STA_UTXINV_POSITION                0x0000000D
#define _U8932STA_UTXINV_MASK                    0x00002000
#define _U8932STA_UTXINV_LENGTH                  0x00000001

#define _U8932STA_UTXISEL_POSITION               0x0000000E
#define _U8932STA_UTXISEL_MASK                   0x0000C000
#define _U8932STA_UTXISEL_LENGTH                 0x00000002

#define _U8932STA_ADDR_POSITION                  0x00000010
#define _U8932STA_ADDR_MASK                      0x00FF0000
#define _U8932STA_ADDR_LENGTH                    0x00000008

#define _U8932STA_ADM_EN_POSITION                0x00000018
#define _U8932STA_ADM_EN_MASK                    0x01000000
#define _U8932STA_ADM_EN_LENGTH                  0x00000001

#define _U8932STA_URXISEL0_POSITION              0x00000006
#define _U8932STA_URXISEL0_MASK                  0x00000040
#define _U8932STA_URXISEL0_LENGTH                0x00000001

#define _U8932STA_URXISEL1_POSITION              0x00000007
#define _U8932STA_URXISEL1_MASK                  0x00000080
#define _U8932STA_URXISEL1_LENGTH                0x00000001

#define _U8932STA_UTXISEL0_POSITION              0x0000000E
#define _U8932STA_UTXISEL0_MASK                  0x00004000
#define _U8932STA_UTXISEL0_LENGTH                0x00000001

#define _U8932STA_UTXISEL1_POSITION              0x0000000F
#define _U8932STA_UTXISEL1_MASK                  0x00008000
#define _U8932STA_UTXISEL1_LENGTH                0x00000001

#define _U8932STA_UTXSEL_POSITION                0x0000000E
#define _U8932STA_UTXSEL_MASK                    0x0000C000
#define _U8932STA_UTXSEL_LENGTH                  0x00000002

#define _U8932STA_w_POSITION                     0x00000000
#define _U8932STA_w_MASK                         0xFFFFFFFF
#define _U8932STA_w_LENGTH                       0x00000020

#define _U39MODE_STSEL_POSITION                  0x00000000
#define _U39MODE_STSEL_MASK                      0x00000001
#define _U39MODE_STSEL_LENGTH                    0x00000001

#define _U39MODE_PDSEL_POSITION                  0x00000001
#define _U39MODE_PDSEL_MASK                      0x00000006
#define _U39MODE_PDSEL_LENGTH                    0x00000002

#define _U39MODE_BRGH_POSITION                   0x00000003
#define _U39MODE_BRGH_MASK                       0x00000008
#define _U39MODE_BRGH_LENGTH                     0x00000001

#define _U39MODE_RXINV_POSITION                  0x00000004
#define _U39MODE_RXINV_MASK                      0x00000010
#define _U39MODE_RXINV_LENGTH                    0x00000001

#define _U39MODE_ABAUD_POSITION                  0x00000005
#define _U39MODE_ABAUD_MASK                      0x00000020
#define _U39MODE_ABAUD_LENGTH                    0x00000001

#define _U39MODE_LPBACK_POSITION                 0x00000006
#define _U39MODE_LPBACK_MASK                     0x00000040
#define _U39MODE_LPBACK_LENGTH                   0x00000001

#define _U39MODE_WAKE_POSITION                   0x00000007
#define _U39MODE_WAKE_MASK                       0x00000080
#define _U39MODE_WAKE_LENGTH                     0x00000001

#define _U39MODE_UEN_POSITION                    0x00000008
#define _U39MODE_UEN_MASK                        0x00000300
#define _U39MODE_UEN_LENGTH                      0x00000002

#define _U39MODE_RTSMD_POSITION                  0x0000000B
#define _U39MODE_RTSMD_MASK                      0x00000800
#define _U39MODE_RTSMD_LENGTH                    0x00000001

#define _U39MODE_IREN_POSITION                   0x0000000C
#define _U39MODE_IREN_MASK                       0x00001000
#define _U39MODE_IREN_LENGTH                     0x00000001

#define _U39MODE_SIDL_POSITION                   0x0000000D
#define _U39MODE_SIDL_MASK                       0x00002000
#define _U39MODE_SIDL_LENGTH                     0x00000001

#define _U39MODE_ON_POSITION                     0x0000000F
#define _U39MODE_ON_MASK                         0x00008000
#define _U39MODE_ON_LENGTH                       0x00000001

#define _U39MODE_PDSEL0_POSITION                 0x00000001
#define _U39MODE_PDSEL0_MASK                     0x00000002
#define _U39MODE_PDSEL0_LENGTH                   0x00000001

#define _U39MODE_PDSEL1_POSITION                 0x00000002
#define _U39MODE_PDSEL1_MASK                     0x00000004
#define _U39MODE_PDSEL1_LENGTH                   0x00000001

#define _U39MODE_UEN0_POSITION                   0x00000008
#define _U39MODE_UEN0_MASK                       0x00000100
#define _U39MODE_UEN0_LENGTH                     0x00000001

#define _U39MODE_UEN1_POSITION                   0x00000009
#define _U39MODE_UEN1_MASK                       0x00000200
#define _U39MODE_UEN1_LENGTH                     0x00000001

#define _U39MODE_USIDL_POSITION                  0x0000000D
#define _U39MODE_USIDL_MASK                      0x00002000
#define _U39MODE_USIDL_LENGTH                    0x00000001

#define _U39MODE_UARTEN_POSITION                 0x0000000F
#define _U39MODE_UARTEN_MASK                     0x00008000
#define _U39MODE_UARTEN_LENGTH                   0x00000001

#define _U39MODE_w_POSITION                      0x00000000
#define _U39MODE_w_MASK                          0xFFFFFFFF
#define _U39MODE_w_LENGTH                        0x00000020

#define _U3MODE_STSEL_POSITION                   0x00000000
#define _U3MODE_STSEL_MASK                       0x00000001
#define _U3MODE_STSEL_LENGTH                     0x00000001

#define _U3MODE_PDSEL_POSITION                   0x00000001
#define _U3MODE_PDSEL_MASK                       0x00000006
#define _U3MODE_PDSEL_LENGTH                     0x00000002

#define _U3MODE_BRGH_POSITION                    0x00000003
#define _U3MODE_BRGH_MASK                        0x00000008
#define _U3MODE_BRGH_LENGTH                      0x00000001

#define _U3MODE_RXINV_POSITION                   0x00000004
#define _U3MODE_RXINV_MASK                       0x00000010
#define _U3MODE_RXINV_LENGTH                     0x00000001

#define _U3MODE_ABAUD_POSITION                   0x00000005
#define _U3MODE_ABAUD_MASK                       0x00000020
#define _U3MODE_ABAUD_LENGTH                     0x00000001

#define _U3MODE_LPBACK_POSITION                  0x00000006
#define _U3MODE_LPBACK_MASK                      0x00000040
#define _U3MODE_LPBACK_LENGTH                    0x00000001

#define _U3MODE_WAKE_POSITION                    0x00000007
#define _U3MODE_WAKE_MASK                        0x00000080
#define _U3MODE_WAKE_LENGTH                      0x00000001

#define _U3MODE_UEN_POSITION                     0x00000008
#define _U3MODE_UEN_MASK                         0x00000300
#define _U3MODE_UEN_LENGTH                       0x00000002

#define _U3MODE_RTSMD_POSITION                   0x0000000B
#define _U3MODE_RTSMD_MASK                       0x00000800
#define _U3MODE_RTSMD_LENGTH                     0x00000001

#define _U3MODE_IREN_POSITION                    0x0000000C
#define _U3MODE_IREN_MASK                        0x00001000
#define _U3MODE_IREN_LENGTH                      0x00000001

#define _U3MODE_SIDL_POSITION                    0x0000000D
#define _U3MODE_SIDL_MASK                        0x00002000
#define _U3MODE_SIDL_LENGTH                      0x00000001

#define _U3MODE_ON_POSITION                      0x0000000F
#define _U3MODE_ON_MASK                          0x00008000
#define _U3MODE_ON_LENGTH                        0x00000001

#define _U3MODE_PDSEL0_POSITION                  0x00000001
#define _U3MODE_PDSEL0_MASK                      0x00000002
#define _U3MODE_PDSEL0_LENGTH                    0x00000001

#define _U3MODE_PDSEL1_POSITION                  0x00000002
#define _U3MODE_PDSEL1_MASK                      0x00000004
#define _U3MODE_PDSEL1_LENGTH                    0x00000001

#define _U3MODE_UEN0_POSITION                    0x00000008
#define _U3MODE_UEN0_MASK                        0x00000100
#define _U3MODE_UEN0_LENGTH                      0x00000001

#define _U3MODE_UEN1_POSITION                    0x00000009
#define _U3MODE_UEN1_MASK                        0x00000200
#define _U3MODE_UEN1_LENGTH                      0x00000001

#define _U3MODE_USIDL_POSITION                   0x0000000D
#define _U3MODE_USIDL_MASK                       0x00002000
#define _U3MODE_USIDL_LENGTH                     0x00000001

#define _U3MODE_UARTEN_POSITION                  0x0000000F
#define _U3MODE_UARTEN_MASK                      0x00008000
#define _U3MODE_UARTEN_LENGTH                    0x00000001

#define _U3MODE_w_POSITION                       0x00000000
#define _U3MODE_w_MASK                           0xFFFFFFFF
#define _U3MODE_w_LENGTH                         0x00000020

#define _U39STA_URXDA_POSITION                   0x00000000
#define _U39STA_URXDA_MASK                       0x00000001
#define _U39STA_URXDA_LENGTH                     0x00000001

#define _U39STA_OERR_POSITION                    0x00000001
#define _U39STA_OERR_MASK                        0x00000002
#define _U39STA_OERR_LENGTH                      0x00000001

#define _U39STA_FERR_POSITION                    0x00000002
#define _U39STA_FERR_MASK                        0x00000004
#define _U39STA_FERR_LENGTH                      0x00000001

#define _U39STA_PERR_POSITION                    0x00000003
#define _U39STA_PERR_MASK                        0x00000008
#define _U39STA_PERR_LENGTH                      0x00000001

#define _U39STA_RIDLE_POSITION                   0x00000004
#define _U39STA_RIDLE_MASK                       0x00000010
#define _U39STA_RIDLE_LENGTH                     0x00000001

#define _U39STA_ADDEN_POSITION                   0x00000005
#define _U39STA_ADDEN_MASK                       0x00000020
#define _U39STA_ADDEN_LENGTH                     0x00000001

#define _U39STA_URXISEL_POSITION                 0x00000006
#define _U39STA_URXISEL_MASK                     0x000000C0
#define _U39STA_URXISEL_LENGTH                   0x00000002

#define _U39STA_TRMT_POSITION                    0x00000008
#define _U39STA_TRMT_MASK                        0x00000100
#define _U39STA_TRMT_LENGTH                      0x00000001

#define _U39STA_UTXBF_POSITION                   0x00000009
#define _U39STA_UTXBF_MASK                       0x00000200
#define _U39STA_UTXBF_LENGTH                     0x00000001

#define _U39STA_UTXEN_POSITION                   0x0000000A
#define _U39STA_UTXEN_MASK                       0x00000400
#define _U39STA_UTXEN_LENGTH                     0x00000001

#define _U39STA_UTXBRK_POSITION                  0x0000000B
#define _U39STA_UTXBRK_MASK                      0x00000800
#define _U39STA_UTXBRK_LENGTH                    0x00000001

#define _U39STA_URXEN_POSITION                   0x0000000C
#define _U39STA_URXEN_MASK                       0x00001000
#define _U39STA_URXEN_LENGTH                     0x00000001

#define _U39STA_UTXINV_POSITION                  0x0000000D
#define _U39STA_UTXINV_MASK                      0x00002000
#define _U39STA_UTXINV_LENGTH                    0x00000001

#define _U39STA_UTXISEL_POSITION                 0x0000000E
#define _U39STA_UTXISEL_MASK                     0x0000C000
#define _U39STA_UTXISEL_LENGTH                   0x00000002

#define _U39STA_ADDR_POSITION                    0x00000010
#define _U39STA_ADDR_MASK                        0x00FF0000
#define _U39STA_ADDR_LENGTH                      0x00000008

#define _U39STA_ADM_EN_POSITION                  0x00000018
#define _U39STA_ADM_EN_MASK                      0x01000000
#define _U39STA_ADM_EN_LENGTH                    0x00000001

#define _U39STA_URXISEL0_POSITION                0x00000006
#define _U39STA_URXISEL0_MASK                    0x00000040
#define _U39STA_URXISEL0_LENGTH                  0x00000001

#define _U39STA_URXISEL1_POSITION                0x00000007
#define _U39STA_URXISEL1_MASK                    0x00000080
#define _U39STA_URXISEL1_LENGTH                  0x00000001

#define _U39STA_UTXISEL0_POSITION                0x0000000E
#define _U39STA_UTXISEL0_MASK                    0x00004000
#define _U39STA_UTXISEL0_LENGTH                  0x00000001

#define _U39STA_UTXISEL1_POSITION                0x0000000F
#define _U39STA_UTXISEL1_MASK                    0x00008000
#define _U39STA_UTXISEL1_LENGTH                  0x00000001

#define _U39STA_UTXSEL_POSITION                  0x0000000E
#define _U39STA_UTXSEL_MASK                      0x0000C000
#define _U39STA_UTXSEL_LENGTH                    0x00000002

#define _U39STA_w_POSITION                       0x00000000
#define _U39STA_w_MASK                           0xFFFFFFFF
#define _U39STA_w_LENGTH                         0x00000020

#define _U3STA_URXDA_POSITION                    0x00000000
#define _U3STA_URXDA_MASK                        0x00000001
#define _U3STA_URXDA_LENGTH                      0x00000001

#define _U3STA_OERR_POSITION                     0x00000001
#define _U3STA_OERR_MASK                         0x00000002
#define _U3STA_OERR_LENGTH                       0x00000001

#define _U3STA_FERR_POSITION                     0x00000002
#define _U3STA_FERR_MASK                         0x00000004
#define _U3STA_FERR_LENGTH                       0x00000001

#define _U3STA_PERR_POSITION                     0x00000003
#define _U3STA_PERR_MASK                         0x00000008
#define _U3STA_PERR_LENGTH                       0x00000001

#define _U3STA_RIDLE_POSITION                    0x00000004
#define _U3STA_RIDLE_MASK                        0x00000010
#define _U3STA_RIDLE_LENGTH                      0x00000001

#define _U3STA_ADDEN_POSITION                    0x00000005
#define _U3STA_ADDEN_MASK                        0x00000020
#define _U3STA_ADDEN_LENGTH                      0x00000001

#define _U3STA_URXISEL_POSITION                  0x00000006
#define _U3STA_URXISEL_MASK                      0x000000C0
#define _U3STA_URXISEL_LENGTH                    0x00000002

#define _U3STA_TRMT_POSITION                     0x00000008
#define _U3STA_TRMT_MASK                         0x00000100
#define _U3STA_TRMT_LENGTH                       0x00000001

#define _U3STA_UTXBF_POSITION                    0x00000009
#define _U3STA_UTXBF_MASK                        0x00000200
#define _U3STA_UTXBF_LENGTH                      0x00000001

#define _U3STA_UTXEN_POSITION                    0x0000000A
#define _U3STA_UTXEN_MASK                        0x00000400
#define _U3STA_UTXEN_LENGTH                      0x00000001

#define _U3STA_UTXBRK_POSITION                   0x0000000B
#define _U3STA_UTXBRK_MASK                       0x00000800
#define _U3STA_UTXBRK_LENGTH                     0x00000001

#define _U3STA_URXEN_POSITION                    0x0000000C
#define _U3STA_URXEN_MASK                        0x00001000
#define _U3STA_URXEN_LENGTH                      0x00000001

#define _U3STA_UTXINV_POSITION                   0x0000000D
#define _U3STA_UTXINV_MASK                       0x00002000
#define _U3STA_UTXINV_LENGTH                     0x00000001

#define _U3STA_UTXISEL_POSITION                  0x0000000E
#define _U3STA_UTXISEL_MASK                      0x0000C000
#define _U3STA_UTXISEL_LENGTH                    0x00000002

#define _U3STA_ADDR_POSITION                     0x00000010
#define _U3STA_ADDR_MASK                         0x00FF0000
#define _U3STA_ADDR_LENGTH                       0x00000008

#define _U3STA_ADM_EN_POSITION                   0x00000018
#define _U3STA_ADM_EN_MASK                       0x01000000
#define _U3STA_ADM_EN_LENGTH                     0x00000001

#define _U3STA_URXISEL0_POSITION                 0x00000006
#define _U3STA_URXISEL0_MASK                     0x00000040
#define _U3STA_URXISEL0_LENGTH                   0x00000001

#define _U3STA_URXISEL1_POSITION                 0x00000007
#define _U3STA_URXISEL1_MASK                     0x00000080
#define _U3STA_URXISEL1_LENGTH                   0x00000001

#define _U3STA_UTXISEL0_POSITION                 0x0000000E
#define _U3STA_UTXISEL0_MASK                     0x00004000
#define _U3STA_UTXISEL0_LENGTH                   0x00000001

#define _U3STA_UTXISEL1_POSITION                 0x0000000F
#define _U3STA_UTXISEL1_MASK                     0x00008000
#define _U3STA_UTXISEL1_LENGTH                   0x00000001

#define _U3STA_UTXSEL_POSITION                   0x0000000E
#define _U3STA_UTXSEL_MASK                       0x0000C000
#define _U3STA_UTXSEL_LENGTH                     0x00000002

#define _U3STA_w_POSITION                        0x00000000
#define _U3STA_w_MASK                            0xFFFFFFFF
#define _U3STA_w_LENGTH                          0x00000020

#define _U4MODE_STSEL_POSITION                   0x00000000
#define _U4MODE_STSEL_MASK                       0x00000001
#define _U4MODE_STSEL_LENGTH                     0x00000001

#define _U4MODE_PDSEL_POSITION                   0x00000001
#define _U4MODE_PDSEL_MASK                       0x00000006
#define _U4MODE_PDSEL_LENGTH                     0x00000002

#define _U4MODE_BRGH_POSITION                    0x00000003
#define _U4MODE_BRGH_MASK                        0x00000008
#define _U4MODE_BRGH_LENGTH                      0x00000001

#define _U4MODE_RXINV_POSITION                   0x00000004
#define _U4MODE_RXINV_MASK                       0x00000010
#define _U4MODE_RXINV_LENGTH                     0x00000001

#define _U4MODE_ABAUD_POSITION                   0x00000005
#define _U4MODE_ABAUD_MASK                       0x00000020
#define _U4MODE_ABAUD_LENGTH                     0x00000001

#define _U4MODE_LPBACK_POSITION                  0x00000006
#define _U4MODE_LPBACK_MASK                      0x00000040
#define _U4MODE_LPBACK_LENGTH                    0x00000001

#define _U4MODE_WAKE_POSITION                    0x00000007
#define _U4MODE_WAKE_MASK                        0x00000080
#define _U4MODE_WAKE_LENGTH                      0x00000001

#define _U4MODE_UEN_POSITION                     0x00000008
#define _U4MODE_UEN_MASK                         0x00000300
#define _U4MODE_UEN_LENGTH                       0x00000002

#define _U4MODE_RTSMD_POSITION                   0x0000000B
#define _U4MODE_RTSMD_MASK                       0x00000800
#define _U4MODE_RTSMD_LENGTH                     0x00000001

#define _U4MODE_IREN_POSITION                    0x0000000C
#define _U4MODE_IREN_MASK                        0x00001000
#define _U4MODE_IREN_LENGTH                      0x00000001

#define _U4MODE_SIDL_POSITION                    0x0000000D
#define _U4MODE_SIDL_MASK                        0x00002000
#define _U4MODE_SIDL_LENGTH                      0x00000001

#define _U4MODE_ON_POSITION                      0x0000000F
#define _U4MODE_ON_MASK                          0x00008000
#define _U4MODE_ON_LENGTH                        0x00000001

#define _U4MODE_PDSEL0_POSITION                  0x00000001
#define _U4MODE_PDSEL0_MASK                      0x00000002
#define _U4MODE_PDSEL0_LENGTH                    0x00000001

#define _U4MODE_PDSEL1_POSITION                  0x00000002
#define _U4MODE_PDSEL1_MASK                      0x00000004
#define _U4MODE_PDSEL1_LENGTH                    0x00000001

#define _U4MODE_UEN0_POSITION                    0x00000008
#define _U4MODE_UEN0_MASK                        0x00000100
#define _U4MODE_UEN0_LENGTH                      0x00000001

#define _U4MODE_UEN1_POSITION                    0x00000009
#define _U4MODE_UEN1_MASK                        0x00000200
#define _U4MODE_UEN1_LENGTH                      0x00000001

#define _U4MODE_USIDL_POSITION                   0x0000000D
#define _U4MODE_USIDL_MASK                       0x00002000
#define _U4MODE_USIDL_LENGTH                     0x00000001

#define _U4MODE_UARTEN_POSITION                  0x0000000F
#define _U4MODE_UARTEN_MASK                      0x00008000
#define _U4MODE_UARTEN_LENGTH                    0x00000001

#define _U4MODE_w_POSITION                       0x00000000
#define _U4MODE_w_MASK                           0xFFFFFFFF
#define _U4MODE_w_LENGTH                         0x00000020

#define _UodMODE_STSEL_POSITION                  0x00000000
#define _UodMODE_STSEL_MASK                      0x00000001
#define _UodMODE_STSEL_LENGTH                    0x00000001

#define _UodMODE_PDSEL_POSITION                  0x00000001
#define _UodMODE_PDSEL_MASK                      0x00000006
#define _UodMODE_PDSEL_LENGTH                    0x00000002

#define _UodMODE_BRGH_POSITION                   0x00000003
#define _UodMODE_BRGH_MASK                       0x00000008
#define _UodMODE_BRGH_LENGTH                     0x00000001

#define _UodMODE_RXINV_POSITION                  0x00000004
#define _UodMODE_RXINV_MASK                      0x00000010
#define _UodMODE_RXINV_LENGTH                    0x00000001

#define _UodMODE_ABAUD_POSITION                  0x00000005
#define _UodMODE_ABAUD_MASK                      0x00000020
#define _UodMODE_ABAUD_LENGTH                    0x00000001

#define _UodMODE_LPBACK_POSITION                 0x00000006
#define _UodMODE_LPBACK_MASK                     0x00000040
#define _UodMODE_LPBACK_LENGTH                   0x00000001

#define _UodMODE_WAKE_POSITION                   0x00000007
#define _UodMODE_WAKE_MASK                       0x00000080
#define _UodMODE_WAKE_LENGTH                     0x00000001

#define _UodMODE_UEN_POSITION                    0x00000008
#define _UodMODE_UEN_MASK                        0x00000300
#define _UodMODE_UEN_LENGTH                      0x00000002

#define _UodMODE_RTSMD_POSITION                  0x0000000B
#define _UodMODE_RTSMD_MASK                      0x00000800
#define _UodMODE_RTSMD_LENGTH                    0x00000001

#define _UodMODE_IREN_POSITION                   0x0000000C
#define _UodMODE_IREN_MASK                       0x00001000
#define _UodMODE_IREN_LENGTH                     0x00000001

#define _UodMODE_SIDL_POSITION                   0x0000000D
#define _UodMODE_SIDL_MASK                       0x00002000
#define _UodMODE_SIDL_LENGTH                     0x00000001

#define _UodMODE_ON_POSITION                     0x0000000F
#define _UodMODE_ON_MASK                         0x00008000
#define _UodMODE_ON_LENGTH                       0x00000001

#define _UodMODE_PDSEL0_POSITION                 0x00000001
#define _UodMODE_PDSEL0_MASK                     0x00000002
#define _UodMODE_PDSEL0_LENGTH                   0x00000001

#define _UodMODE_PDSEL1_POSITION                 0x00000002
#define _UodMODE_PDSEL1_MASK                     0x00000004
#define _UodMODE_PDSEL1_LENGTH                   0x00000001

#define _UodMODE_UEN0_POSITION                   0x00000008
#define _UodMODE_UEN0_MASK                       0x00000100
#define _UodMODE_UEN0_LENGTH                     0x00000001

#define _UodMODE_UEN1_POSITION                   0x00000009
#define _UodMODE_UEN1_MASK                       0x00000200
#define _UodMODE_UEN1_LENGTH                     0x00000001

#define _UodMODE_USIDL_POSITION                  0x0000000D
#define _UodMODE_USIDL_MASK                      0x00002000
#define _UodMODE_USIDL_LENGTH                    0x00000001

#define _UodMODE_UARTEN_POSITION                 0x0000000F
#define _UodMODE_UARTEN_MASK                     0x00008000
#define _UodMODE_UARTEN_LENGTH                   0x00000001

#define _UodMODE_w_POSITION                      0x00000000
#define _UodMODE_w_MASK                          0xFFFFFFFF
#define _UodMODE_w_LENGTH                        0x00000020

#define _U4STA_URXDA_POSITION                    0x00000000
#define _U4STA_URXDA_MASK                        0x00000001
#define _U4STA_URXDA_LENGTH                      0x00000001

#define _U4STA_OERR_POSITION                     0x00000001
#define _U4STA_OERR_MASK                         0x00000002
#define _U4STA_OERR_LENGTH                       0x00000001

#define _U4STA_FERR_POSITION                     0x00000002
#define _U4STA_FERR_MASK                         0x00000004
#define _U4STA_FERR_LENGTH                       0x00000001

#define _U4STA_PERR_POSITION                     0x00000003
#define _U4STA_PERR_MASK                         0x00000008
#define _U4STA_PERR_LENGTH                       0x00000001

#define _U4STA_RIDLE_POSITION                    0x00000004
#define _U4STA_RIDLE_MASK                        0x00000010
#define _U4STA_RIDLE_LENGTH                      0x00000001

#define _U4STA_ADDEN_POSITION                    0x00000005
#define _U4STA_ADDEN_MASK                        0x00000020
#define _U4STA_ADDEN_LENGTH                      0x00000001

#define _U4STA_URXISEL_POSITION                  0x00000006
#define _U4STA_URXISEL_MASK                      0x000000C0
#define _U4STA_URXISEL_LENGTH                    0x00000002

#define _U4STA_TRMT_POSITION                     0x00000008
#define _U4STA_TRMT_MASK                         0x00000100
#define _U4STA_TRMT_LENGTH                       0x00000001

#define _U4STA_UTXBF_POSITION                    0x00000009
#define _U4STA_UTXBF_MASK                        0x00000200
#define _U4STA_UTXBF_LENGTH                      0x00000001

#define _U4STA_UTXEN_POSITION                    0x0000000A
#define _U4STA_UTXEN_MASK                        0x00000400
#define _U4STA_UTXEN_LENGTH                      0x00000001

#define _U4STA_UTXBRK_POSITION                   0x0000000B
#define _U4STA_UTXBRK_MASK                       0x00000800
#define _U4STA_UTXBRK_LENGTH                     0x00000001

#define _U4STA_URXEN_POSITION                    0x0000000C
#define _U4STA_URXEN_MASK                        0x00001000
#define _U4STA_URXEN_LENGTH                      0x00000001

#define _U4STA_UTXINV_POSITION                   0x0000000D
#define _U4STA_UTXINV_MASK                       0x00002000
#define _U4STA_UTXINV_LENGTH                     0x00000001

#define _U4STA_UTXISEL_POSITION                  0x0000000E
#define _U4STA_UTXISEL_MASK                      0x0000C000
#define _U4STA_UTXISEL_LENGTH                    0x00000002

#define _U4STA_ADDR_POSITION                     0x00000010
#define _U4STA_ADDR_MASK                         0x00FF0000
#define _U4STA_ADDR_LENGTH                       0x00000008

#define _U4STA_ADM_EN_POSITION                   0x00000018
#define _U4STA_ADM_EN_MASK                       0x01000000
#define _U4STA_ADM_EN_LENGTH                     0x00000001

#define _U4STA_URXISEL0_POSITION                 0x00000006
#define _U4STA_URXISEL0_MASK                     0x00000040
#define _U4STA_URXISEL0_LENGTH                   0x00000001

#define _U4STA_URXISEL1_POSITION                 0x00000007
#define _U4STA_URXISEL1_MASK                     0x00000080
#define _U4STA_URXISEL1_LENGTH                   0x00000001

#define _U4STA_UTXISEL0_POSITION                 0x0000000E
#define _U4STA_UTXISEL0_MASK                     0x00004000
#define _U4STA_UTXISEL0_LENGTH                   0x00000001

#define _U4STA_UTXISEL1_POSITION                 0x0000000F
#define _U4STA_UTXISEL1_MASK                     0x00008000
#define _U4STA_UTXISEL1_LENGTH                   0x00000001

#define _U4STA_UTXSEL_POSITION                   0x0000000E
#define _U4STA_UTXSEL_MASK                       0x0000C000
#define _U4STA_UTXSEL_LENGTH                     0x00000002

#define _U4STA_w_POSITION                        0x00000000
#define _U4STA_w_MASK                            0xFFFFFFFF
#define _U4STA_w_LENGTH                          0x00000020

#define _UodSTA_URXDA_POSITION                   0x00000000
#define _UodSTA_URXDA_MASK                       0x00000001
#define _UodSTA_URXDA_LENGTH                     0x00000001

#define _UodSTA_OERR_POSITION                    0x00000001
#define _UodSTA_OERR_MASK                        0x00000002
#define _UodSTA_OERR_LENGTH                      0x00000001

#define _UodSTA_FERR_POSITION                    0x00000002
#define _UodSTA_FERR_MASK                        0x00000004
#define _UodSTA_FERR_LENGTH                      0x00000001

#define _UodSTA_PERR_POSITION                    0x00000003
#define _UodSTA_PERR_MASK                        0x00000008
#define _UodSTA_PERR_LENGTH                      0x00000001

#define _UodSTA_RIDLE_POSITION                   0x00000004
#define _UodSTA_RIDLE_MASK                       0x00000010
#define _UodSTA_RIDLE_LENGTH                     0x00000001

#define _UodSTA_ADDEN_POSITION                   0x00000005
#define _UodSTA_ADDEN_MASK                       0x00000020
#define _UodSTA_ADDEN_LENGTH                     0x00000001

#define _UodSTA_URXISEL_POSITION                 0x00000006
#define _UodSTA_URXISEL_MASK                     0x000000C0
#define _UodSTA_URXISEL_LENGTH                   0x00000002

#define _UodSTA_TRMT_POSITION                    0x00000008
#define _UodSTA_TRMT_MASK                        0x00000100
#define _UodSTA_TRMT_LENGTH                      0x00000001

#define _UodSTA_UTXBF_POSITION                   0x00000009
#define _UodSTA_UTXBF_MASK                       0x00000200
#define _UodSTA_UTXBF_LENGTH                     0x00000001

#define _UodSTA_UTXEN_POSITION                   0x0000000A
#define _UodSTA_UTXEN_MASK                       0x00000400
#define _UodSTA_UTXEN_LENGTH                     0x00000001

#define _UodSTA_UTXBRK_POSITION                  0x0000000B
#define _UodSTA_UTXBRK_MASK                      0x00000800
#define _UodSTA_UTXBRK_LENGTH                    0x00000001

#define _UodSTA_URXEN_POSITION                   0x0000000C
#define _UodSTA_URXEN_MASK                       0x00001000
#define _UodSTA_URXEN_LENGTH                     0x00000001

#define _UodSTA_UTXINV_POSITION                  0x0000000D
#define _UodSTA_UTXINV_MASK                      0x00002000
#define _UodSTA_UTXINV_LENGTH                    0x00000001

#define _UodSTA_UTXISEL_POSITION                 0x0000000E
#define _UodSTA_UTXISEL_MASK                     0x0000C000
#define _UodSTA_UTXISEL_LENGTH                   0x00000002

#define _UodSTA_ADDR_POSITION                    0x00000010
#define _UodSTA_ADDR_MASK                        0x00FF0000
#define _UodSTA_ADDR_LENGTH                      0x00000008

#define _UodSTA_ADM_EN_POSITION                  0x00000018
#define _UodSTA_ADM_EN_MASK                      0x01000000
#define _UodSTA_ADM_EN_LENGTH                    0x00000001

#define _UodSTA_URXISEL0_POSITION                0x00000006
#define _UodSTA_URXISEL0_MASK                    0x00000040
#define _UodSTA_URXISEL0_LENGTH                  0x00000001

#define _UodSTA_URXISEL1_POSITION                0x00000007
#define _UodSTA_URXISEL1_MASK                    0x00000080
#define _UodSTA_URXISEL1_LENGTH                  0x00000001

#define _UodSTA_UTXISEL0_POSITION                0x0000000E
#define _UodSTA_UTXISEL0_MASK                    0x00004000
#define _UodSTA_UTXISEL0_LENGTH                  0x00000001

#define _UodSTA_UTXISEL1_POSITION                0x0000000F
#define _UodSTA_UTXISEL1_MASK                    0x00008000
#define _UodSTA_UTXISEL1_LENGTH                  0x00000001

#define _UodSTA_UTXSEL_POSITION                  0x0000000E
#define _UodSTA_UTXSEL_MASK                      0x0000C000
#define _UodSTA_UTXSEL_LENGTH                    0x00000002

#define _UodSTA_w_POSITION                       0x00000000
#define _UodSTA_w_MASK                           0xFFFFFFFF
#define _UodSTA_w_LENGTH                         0x00000020

#define _U5MODE_STSEL_POSITION                   0x00000000
#define _U5MODE_STSEL_MASK                       0x00000001
#define _U5MODE_STSEL_LENGTH                     0x00000001

#define _U5MODE_PDSEL_POSITION                   0x00000001
#define _U5MODE_PDSEL_MASK                       0x00000006
#define _U5MODE_PDSEL_LENGTH                     0x00000002

#define _U5MODE_BRGH_POSITION                    0x00000003
#define _U5MODE_BRGH_MASK                        0x00000008
#define _U5MODE_BRGH_LENGTH                      0x00000001

#define _U5MODE_RXINV_POSITION                   0x00000004
#define _U5MODE_RXINV_MASK                       0x00000010
#define _U5MODE_RXINV_LENGTH                     0x00000001

#define _U5MODE_ABAUD_POSITION                   0x00000005
#define _U5MODE_ABAUD_MASK                       0x00000020
#define _U5MODE_ABAUD_LENGTH                     0x00000001

#define _U5MODE_LPBACK_POSITION                  0x00000006
#define _U5MODE_LPBACK_MASK                      0x00000040
#define _U5MODE_LPBACK_LENGTH                    0x00000001

#define _U5MODE_WAKE_POSITION                    0x00000007
#define _U5MODE_WAKE_MASK                        0x00000080
#define _U5MODE_WAKE_LENGTH                      0x00000001

#define _U5MODE_UEN_POSITION                     0x00000008
#define _U5MODE_UEN_MASK                         0x00000300
#define _U5MODE_UEN_LENGTH                       0x00000002

#define _U5MODE_RTSMD_POSITION                   0x0000000B
#define _U5MODE_RTSMD_MASK                       0x00000800
#define _U5MODE_RTSMD_LENGTH                     0x00000001

#define _U5MODE_IREN_POSITION                    0x0000000C
#define _U5MODE_IREN_MASK                        0x00001000
#define _U5MODE_IREN_LENGTH                      0x00000001

#define _U5MODE_SIDL_POSITION                    0x0000000D
#define _U5MODE_SIDL_MASK                        0x00002000
#define _U5MODE_SIDL_LENGTH                      0x00000001

#define _U5MODE_ON_POSITION                      0x0000000F
#define _U5MODE_ON_MASK                          0x00008000
#define _U5MODE_ON_LENGTH                        0x00000001

#define _U5MODE_PDSEL0_POSITION                  0x00000001
#define _U5MODE_PDSEL0_MASK                      0x00000002
#define _U5MODE_PDSEL0_LENGTH                    0x00000001

#define _U5MODE_PDSEL1_POSITION                  0x00000002
#define _U5MODE_PDSEL1_MASK                      0x00000004
#define _U5MODE_PDSEL1_LENGTH                    0x00000001

#define _U5MODE_UEN0_POSITION                    0x00000008
#define _U5MODE_UEN0_MASK                        0x00000100
#define _U5MODE_UEN0_LENGTH                      0x00000001

#define _U5MODE_UEN1_POSITION                    0x00000009
#define _U5MODE_UEN1_MASK                        0x00000200
#define _U5MODE_UEN1_LENGTH                      0x00000001

#define _U5MODE_USIDL_POSITION                   0x0000000D
#define _U5MODE_USIDL_MASK                       0x00002000
#define _U5MODE_USIDL_LENGTH                     0x00000001

#define _U5MODE_UARTEN_POSITION                  0x0000000F
#define _U5MODE_UARTEN_MASK                      0x00008000
#define _U5MODE_UARTEN_LENGTH                    0x00000001

#define _U5MODE_w_POSITION                       0x00000000
#define _U5MODE_w_MASK                           0xFFFFFFFF
#define _U5MODE_w_LENGTH                         0x00000020

#define _UabMODE_STSEL_POSITION                  0x00000000
#define _UabMODE_STSEL_MASK                      0x00000001
#define _UabMODE_STSEL_LENGTH                    0x00000001

#define _UabMODE_PDSEL_POSITION                  0x00000001
#define _UabMODE_PDSEL_MASK                      0x00000006
#define _UabMODE_PDSEL_LENGTH                    0x00000002

#define _UabMODE_BRGH_POSITION                   0x00000003
#define _UabMODE_BRGH_MASK                       0x00000008
#define _UabMODE_BRGH_LENGTH                     0x00000001

#define _UabMODE_RXINV_POSITION                  0x00000004
#define _UabMODE_RXINV_MASK                      0x00000010
#define _UabMODE_RXINV_LENGTH                    0x00000001

#define _UabMODE_ABAUD_POSITION                  0x00000005
#define _UabMODE_ABAUD_MASK                      0x00000020
#define _UabMODE_ABAUD_LENGTH                    0x00000001

#define _UabMODE_LPBACK_POSITION                 0x00000006
#define _UabMODE_LPBACK_MASK                     0x00000040
#define _UabMODE_LPBACK_LENGTH                   0x00000001

#define _UabMODE_WAKE_POSITION                   0x00000007
#define _UabMODE_WAKE_MASK                       0x00000080
#define _UabMODE_WAKE_LENGTH                     0x00000001

#define _UabMODE_UEN_POSITION                    0x00000008
#define _UabMODE_UEN_MASK                        0x00000300
#define _UabMODE_UEN_LENGTH                      0x00000002

#define _UabMODE_RTSMD_POSITION                  0x0000000B
#define _UabMODE_RTSMD_MASK                      0x00000800
#define _UabMODE_RTSMD_LENGTH                    0x00000001

#define _UabMODE_IREN_POSITION                   0x0000000C
#define _UabMODE_IREN_MASK                       0x00001000
#define _UabMODE_IREN_LENGTH                     0x00000001

#define _UabMODE_SIDL_POSITION                   0x0000000D
#define _UabMODE_SIDL_MASK                       0x00002000
#define _UabMODE_SIDL_LENGTH                     0x00000001

#define _UabMODE_ON_POSITION                     0x0000000F
#define _UabMODE_ON_MASK                         0x00008000
#define _UabMODE_ON_LENGTH                       0x00000001

#define _UabMODE_PDSEL0_POSITION                 0x00000001
#define _UabMODE_PDSEL0_MASK                     0x00000002
#define _UabMODE_PDSEL0_LENGTH                   0x00000001

#define _UabMODE_PDSEL1_POSITION                 0x00000002
#define _UabMODE_PDSEL1_MASK                     0x00000004
#define _UabMODE_PDSEL1_LENGTH                   0x00000001

#define _UabMODE_UEN0_POSITION                   0x00000008
#define _UabMODE_UEN0_MASK                       0x00000100
#define _UabMODE_UEN0_LENGTH                     0x00000001

#define _UabMODE_UEN1_POSITION                   0x00000009
#define _UabMODE_UEN1_MASK                       0x00000200
#define _UabMODE_UEN1_LENGTH                     0x00000001

#define _UabMODE_USIDL_POSITION                  0x0000000D
#define _UabMODE_USIDL_MASK                      0x00002000
#define _UabMODE_USIDL_LENGTH                    0x00000001

#define _UabMODE_UARTEN_POSITION                 0x0000000F
#define _UabMODE_UARTEN_MASK                     0x00008000
#define _UabMODE_UARTEN_LENGTH                   0x00000001

#define _UabMODE_w_POSITION                      0x00000000
#define _UabMODE_w_MASK                          0xFFFFFFFF
#define _UabMODE_w_LENGTH                        0x00000020

#define _U5STA_URXDA_POSITION                    0x00000000
#define _U5STA_URXDA_MASK                        0x00000001
#define _U5STA_URXDA_LENGTH                      0x00000001

#define _U5STA_OERR_POSITION                     0x00000001
#define _U5STA_OERR_MASK                         0x00000002
#define _U5STA_OERR_LENGTH                       0x00000001

#define _U5STA_FERR_POSITION                     0x00000002
#define _U5STA_FERR_MASK                         0x00000004
#define _U5STA_FERR_LENGTH                       0x00000001

#define _U5STA_PERR_POSITION                     0x00000003
#define _U5STA_PERR_MASK                         0x00000008
#define _U5STA_PERR_LENGTH                       0x00000001

#define _U5STA_RIDLE_POSITION                    0x00000004
#define _U5STA_RIDLE_MASK                        0x00000010
#define _U5STA_RIDLE_LENGTH                      0x00000001

#define _U5STA_ADDEN_POSITION                    0x00000005
#define _U5STA_ADDEN_MASK                        0x00000020
#define _U5STA_ADDEN_LENGTH                      0x00000001

#define _U5STA_URXISEL_POSITION                  0x00000006
#define _U5STA_URXISEL_MASK                      0x000000C0
#define _U5STA_URXISEL_LENGTH                    0x00000002

#define _U5STA_TRMT_POSITION                     0x00000008
#define _U5STA_TRMT_MASK                         0x00000100
#define _U5STA_TRMT_LENGTH                       0x00000001

#define _U5STA_UTXBF_POSITION                    0x00000009
#define _U5STA_UTXBF_MASK                        0x00000200
#define _U5STA_UTXBF_LENGTH                      0x00000001

#define _U5STA_UTXEN_POSITION                    0x0000000A
#define _U5STA_UTXEN_MASK                        0x00000400
#define _U5STA_UTXEN_LENGTH                      0x00000001

#define _U5STA_UTXBRK_POSITION                   0x0000000B
#define _U5STA_UTXBRK_MASK                       0x00000800
#define _U5STA_UTXBRK_LENGTH                     0x00000001

#define _U5STA_URXEN_POSITION                    0x0000000C
#define _U5STA_URXEN_MASK                        0x00001000
#define _U5STA_URXEN_LENGTH                      0x00000001

#define _U5STA_UTXINV_POSITION                   0x0000000D
#define _U5STA_UTXINV_MASK                       0x00002000
#define _U5STA_UTXINV_LENGTH                     0x00000001

#define _U5STA_UTXISEL_POSITION                  0x0000000E
#define _U5STA_UTXISEL_MASK                      0x0000C000
#define _U5STA_UTXISEL_LENGTH                    0x00000002

#define _U5STA_ADDR_POSITION                     0x00000010
#define _U5STA_ADDR_MASK                         0x00FF0000
#define _U5STA_ADDR_LENGTH                       0x00000008

#define _U5STA_ADM_EN_POSITION                   0x00000018
#define _U5STA_ADM_EN_MASK                       0x01000000
#define _U5STA_ADM_EN_LENGTH                     0x00000001

#define _U5STA_URXISEL0_POSITION                 0x00000006
#define _U5STA_URXISEL0_MASK                     0x00000040
#define _U5STA_URXISEL0_LENGTH                   0x00000001

#define _U5STA_URXISEL1_POSITION                 0x00000007
#define _U5STA_URXISEL1_MASK                     0x00000080
#define _U5STA_URXISEL1_LENGTH                   0x00000001

#define _U5STA_UTXISEL0_POSITION                 0x0000000E
#define _U5STA_UTXISEL0_MASK                     0x00004000
#define _U5STA_UTXISEL0_LENGTH                   0x00000001

#define _U5STA_UTXISEL1_POSITION                 0x0000000F
#define _U5STA_UTXISEL1_MASK                     0x00008000
#define _U5STA_UTXISEL1_LENGTH                   0x00000001

#define _U5STA_UTXSEL_POSITION                   0x0000000E
#define _U5STA_UTXSEL_MASK                       0x0000C000
#define _U5STA_UTXSEL_LENGTH                     0x00000002

#define _U5STA_w_POSITION                        0x00000000
#define _U5STA_w_MASK                            0xFFFFFFFF
#define _U5STA_w_LENGTH                          0x00000020

#define _UabSTA_URXDA_POSITION                   0x00000000
#define _UabSTA_URXDA_MASK                       0x00000001
#define _UabSTA_URXDA_LENGTH                     0x00000001

#define _UabSTA_OERR_POSITION                    0x00000001
#define _UabSTA_OERR_MASK                        0x00000002
#define _UabSTA_OERR_LENGTH                      0x00000001

#define _UabSTA_FERR_POSITION                    0x00000002
#define _UabSTA_FERR_MASK                        0x00000004
#define _UabSTA_FERR_LENGTH                      0x00000001

#define _UabSTA_PERR_POSITION                    0x00000003
#define _UabSTA_PERR_MASK                        0x00000008
#define _UabSTA_PERR_LENGTH                      0x00000001

#define _UabSTA_RIDLE_POSITION                   0x00000004
#define _UabSTA_RIDLE_MASK                       0x00000010
#define _UabSTA_RIDLE_LENGTH                     0x00000001

#define _UabSTA_ADDEN_POSITION                   0x00000005
#define _UabSTA_ADDEN_MASK                       0x00000020
#define _UabSTA_ADDEN_LENGTH                     0x00000001

#define _UabSTA_URXISEL_POSITION                 0x00000006
#define _UabSTA_URXISEL_MASK                     0x000000C0
#define _UabSTA_URXISEL_LENGTH                   0x00000002

#define _UabSTA_TRMT_POSITION                    0x00000008
#define _UabSTA_TRMT_MASK                        0x00000100
#define _UabSTA_TRMT_LENGTH                      0x00000001

#define _UabSTA_UTXBF_POSITION                   0x00000009
#define _UabSTA_UTXBF_MASK                       0x00000200
#define _UabSTA_UTXBF_LENGTH                     0x00000001

#define _UabSTA_UTXEN_POSITION                   0x0000000A
#define _UabSTA_UTXEN_MASK                       0x00000400
#define _UabSTA_UTXEN_LENGTH                     0x00000001

#define _UabSTA_UTXBRK_POSITION                  0x0000000B
#define _UabSTA_UTXBRK_MASK                      0x00000800
#define _UabSTA_UTXBRK_LENGTH                    0x00000001

#define _UabSTA_URXEN_POSITION                   0x0000000C
#define _UabSTA_URXEN_MASK                       0x00001000
#define _UabSTA_URXEN_LENGTH                     0x00000001

#define _UabSTA_UTXINV_POSITION                  0x0000000D
#define _UabSTA_UTXINV_MASK                      0x00002000
#define _UabSTA_UTXINV_LENGTH                    0x00000001

#define _UabSTA_UTXISEL_POSITION                 0x0000000E
#define _UabSTA_UTXISEL_MASK                     0x0000C000
#define _UabSTA_UTXISEL_LENGTH                   0x00000002

#define _UabSTA_ADDR_POSITION                    0x00000010
#define _UabSTA_ADDR_MASK                        0x00FF0000
#define _UabSTA_ADDR_LENGTH                      0x00000008

#define _UabSTA_ADM_EN_POSITION                  0x00000018
#define _UabSTA_ADM_EN_MASK                      0x01000000
#define _UabSTA_ADM_EN_LENGTH                    0x00000001

#define _UabSTA_URXISEL0_POSITION                0x00000006
#define _UabSTA_URXISEL0_MASK                    0x00000040
#define _UabSTA_URXISEL0_LENGTH                  0x00000001

#define _UabSTA_URXISEL1_POSITION                0x00000007
#define _UabSTA_URXISEL1_MASK                    0x00000080
#define _UabSTA_URXISEL1_LENGTH                  0x00000001

#define _UabSTA_UTXISEL0_POSITION                0x0000000E
#define _UabSTA_UTXISEL0_MASK                    0x00004000
#define _UabSTA_UTXISEL0_LENGTH                  0x00000001

#define _UabSTA_UTXISEL1_POSITION                0x0000000F
#define _UabSTA_UTXISEL1_MASK                    0x00008000
#define _UabSTA_UTXISEL1_LENGTH                  0x00000001

#define _UabSTA_UTXSEL_POSITION                  0x0000000E
#define _UabSTA_UTXSEL_MASK                      0x0000C000
#define _UabSTA_UTXSEL_LENGTH                    0x00000002

#define _UabSTA_w_POSITION                       0x00000000
#define _UabSTA_w_MASK                           0xFFFFFFFF
#define _UabSTA_w_LENGTH                         0x00000020

#define _PMCON_RDSP_POSITION                     0x00000000
#define _PMCON_RDSP_MASK                         0x00000001
#define _PMCON_RDSP_LENGTH                       0x00000001

#define _PMCON_WRSP_POSITION                     0x00000001
#define _PMCON_WRSP_MASK                         0x00000002
#define _PMCON_WRSP_LENGTH                       0x00000001

#define _PMCON_CS1P_POSITION                     0x00000003
#define _PMCON_CS1P_MASK                         0x00000008
#define _PMCON_CS1P_LENGTH                       0x00000001

#define _PMCON_CS2P_POSITION                     0x00000004
#define _PMCON_CS2P_MASK                         0x00000010
#define _PMCON_CS2P_LENGTH                       0x00000001

#define _PMCON_ALP_POSITION                      0x00000005
#define _PMCON_ALP_MASK                          0x00000020
#define _PMCON_ALP_LENGTH                        0x00000001

#define _PMCON_CSF_POSITION                      0x00000006
#define _PMCON_CSF_MASK                          0x000000C0
#define _PMCON_CSF_LENGTH                        0x00000002

#define _PMCON_PTRDEN_POSITION                   0x00000008
#define _PMCON_PTRDEN_MASK                       0x00000100
#define _PMCON_PTRDEN_LENGTH                     0x00000001

#define _PMCON_PTWREN_POSITION                   0x00000009
#define _PMCON_PTWREN_MASK                       0x00000200
#define _PMCON_PTWREN_LENGTH                     0x00000001

#define _PMCON_PMPTTL_POSITION                   0x0000000A
#define _PMCON_PMPTTL_MASK                       0x00000400
#define _PMCON_PMPTTL_LENGTH                     0x00000001

#define _PMCON_ADRMUX_POSITION                   0x0000000B
#define _PMCON_ADRMUX_MASK                       0x00001800
#define _PMCON_ADRMUX_LENGTH                     0x00000002

#define _PMCON_SIDL_POSITION                     0x0000000D
#define _PMCON_SIDL_MASK                         0x00002000
#define _PMCON_SIDL_LENGTH                       0x00000001

#define _PMCON_ON_POSITION                       0x0000000F
#define _PMCON_ON_MASK                           0x00008000
#define _PMCON_ON_LENGTH                         0x00000001

#define _PMCON_CSF0_POSITION                     0x00000006
#define _PMCON_CSF0_MASK                         0x00000040
#define _PMCON_CSF0_LENGTH                       0x00000001

#define _PMCON_CSF1_POSITION                     0x00000007
#define _PMCON_CSF1_MASK                         0x00000080
#define _PMCON_CSF1_LENGTH                       0x00000001

#define _PMCON_ADRMUX0_POSITION                  0x0000000B
#define _PMCON_ADRMUX0_MASK                      0x00000800
#define _PMCON_ADRMUX0_LENGTH                    0x00000001

#define _PMCON_ADRMUX1_POSITION                  0x0000000C
#define _PMCON_ADRMUX1_MASK                      0x00001000
#define _PMCON_ADRMUX1_LENGTH                    0x00000001

#define _PMCON_PSIDL_POSITION                    0x0000000D
#define _PMCON_PSIDL_MASK                        0x00002000
#define _PMCON_PSIDL_LENGTH                      0x00000001

#define _PMCON_PMPEN_POSITION                    0x0000000F
#define _PMCON_PMPEN_MASK                        0x00008000
#define _PMCON_PMPEN_LENGTH                      0x00000001

#define _PMCON_w_POSITION                        0x00000000
#define _PMCON_w_MASK                            0xFFFFFFFF
#define _PMCON_w_LENGTH                          0x00000020

#define _PMMODE_WAITE_POSITION                   0x00000000
#define _PMMODE_WAITE_MASK                       0x00000003
#define _PMMODE_WAITE_LENGTH                     0x00000002

#define _PMMODE_WAITM_POSITION                   0x00000002
#define _PMMODE_WAITM_MASK                       0x0000003C
#define _PMMODE_WAITM_LENGTH                     0x00000004

#define _PMMODE_WAITB_POSITION                   0x00000006
#define _PMMODE_WAITB_MASK                       0x000000C0
#define _PMMODE_WAITB_LENGTH                     0x00000002

#define _PMMODE_MODE_POSITION                    0x00000008
#define _PMMODE_MODE_MASK                        0x00000300
#define _PMMODE_MODE_LENGTH                      0x00000002

#define _PMMODE_MODE16_POSITION                  0x0000000A
#define _PMMODE_MODE16_MASK                      0x00000400
#define _PMMODE_MODE16_LENGTH                    0x00000001

#define _PMMODE_INCM_POSITION                    0x0000000B
#define _PMMODE_INCM_MASK                        0x00001800
#define _PMMODE_INCM_LENGTH                      0x00000002

#define _PMMODE_IRQM_POSITION                    0x0000000D
#define _PMMODE_IRQM_MASK                        0x00006000
#define _PMMODE_IRQM_LENGTH                      0x00000002

#define _PMMODE_BUSY_POSITION                    0x0000000F
#define _PMMODE_BUSY_MASK                        0x00008000
#define _PMMODE_BUSY_LENGTH                      0x00000001

#define _PMMODE_WAITE0_POSITION                  0x00000000
#define _PMMODE_WAITE0_MASK                      0x00000001
#define _PMMODE_WAITE0_LENGTH                    0x00000001

#define _PMMODE_WAITE1_POSITION                  0x00000001
#define _PMMODE_WAITE1_MASK                      0x00000002
#define _PMMODE_WAITE1_LENGTH                    0x00000001

#define _PMMODE_WAITM0_POSITION                  0x00000002
#define _PMMODE_WAITM0_MASK                      0x00000004
#define _PMMODE_WAITM0_LENGTH                    0x00000001

#define _PMMODE_WAITM1_POSITION                  0x00000003
#define _PMMODE_WAITM1_MASK                      0x00000008
#define _PMMODE_WAITM1_LENGTH                    0x00000001

#define _PMMODE_WAITM2_POSITION                  0x00000004
#define _PMMODE_WAITM2_MASK                      0x00000010
#define _PMMODE_WAITM2_LENGTH                    0x00000001

#define _PMMODE_WAITM3_POSITION                  0x00000005
#define _PMMODE_WAITM3_MASK                      0x00000020
#define _PMMODE_WAITM3_LENGTH                    0x00000001

#define _PMMODE_WAITB0_POSITION                  0x00000006
#define _PMMODE_WAITB0_MASK                      0x00000040
#define _PMMODE_WAITB0_LENGTH                    0x00000001

#define _PMMODE_WAITB1_POSITION                  0x00000007
#define _PMMODE_WAITB1_MASK                      0x00000080
#define _PMMODE_WAITB1_LENGTH                    0x00000001

#define _PMMODE_MODE0_POSITION                   0x00000008
#define _PMMODE_MODE0_MASK                       0x00000100
#define _PMMODE_MODE0_LENGTH                     0x00000001

#define _PMMODE_MODE1_POSITION                   0x00000009
#define _PMMODE_MODE1_MASK                       0x00000200
#define _PMMODE_MODE1_LENGTH                     0x00000001

#define _PMMODE_INCM0_POSITION                   0x0000000B
#define _PMMODE_INCM0_MASK                       0x00000800
#define _PMMODE_INCM0_LENGTH                     0x00000001

#define _PMMODE_INCM1_POSITION                   0x0000000C
#define _PMMODE_INCM1_MASK                       0x00001000
#define _PMMODE_INCM1_LENGTH                     0x00000001

#define _PMMODE_IRQM0_POSITION                   0x0000000D
#define _PMMODE_IRQM0_MASK                       0x00002000
#define _PMMODE_IRQM0_LENGTH                     0x00000001

#define _PMMODE_IRQM1_POSITION                   0x0000000E
#define _PMMODE_IRQM1_MASK                       0x00004000
#define _PMMODE_IRQM1_LENGTH                     0x00000001

#define _PMMODE_w_POSITION                       0x00000000
#define _PMMODE_w_MASK                           0xFFFFFFFF
#define _PMMODE_w_LENGTH                         0x00000020

#define _PMADDR_ADDR_POSITION                    0x00000000
#define _PMADDR_ADDR_MASK                        0x00003FFF
#define _PMADDR_ADDR_LENGTH                      0x0000000E

#define _PMADDR_CS_POSITION                      0x0000000E
#define _PMADDR_CS_MASK                          0x0000C000
#define _PMADDR_CS_LENGTH                        0x00000002

#define _PMADDR_PADDR_POSITION                   0x00000000
#define _PMADDR_PADDR_MASK                       0x00003FFF
#define _PMADDR_PADDR_LENGTH                     0x0000000E

#define _PMADDR_CS1_POSITION                     0x0000000E
#define _PMADDR_CS1_MASK                         0x00004000
#define _PMADDR_CS1_LENGTH                       0x00000001

#define _PMADDR_CS2_POSITION                     0x0000000F
#define _PMADDR_CS2_MASK                         0x00008000
#define _PMADDR_CS2_LENGTH                       0x00000001

#define _PMADDR_w_POSITION                       0x00000000
#define _PMADDR_w_MASK                           0xFFFFFFFF
#define _PMADDR_w_LENGTH                         0x00000020

#define _PMDOUT_DATAOUT_POSITION                 0x00000000
#define _PMDOUT_DATAOUT_MASK                     0xFFFFFFFF
#define _PMDOUT_DATAOUT_LENGTH                   0x00000020

#define _PMDOUT_w_POSITION                       0x00000000
#define _PMDOUT_w_MASK                           0xFFFFFFFF
#define _PMDOUT_w_LENGTH                         0x00000020

#define _PMDIN_DATAIN_POSITION                   0x00000000
#define _PMDIN_DATAIN_MASK                       0xFFFFFFFF
#define _PMDIN_DATAIN_LENGTH                     0x00000020

#define _PMDIN_w_POSITION                        0x00000000
#define _PMDIN_w_MASK                            0xFFFFFFFF
#define _PMDIN_w_LENGTH                          0x00000020

#define _PMAEN_PTEN_POSITION                     0x00000000
#define _PMAEN_PTEN_MASK                         0x0000FFFF
#define _PMAEN_PTEN_LENGTH                       0x00000010

#define _PMAEN_PTEN0_POSITION                    0x00000000
#define _PMAEN_PTEN0_MASK                        0x00000001
#define _PMAEN_PTEN0_LENGTH                      0x00000001

#define _PMAEN_PTEN1_POSITION                    0x00000001
#define _PMAEN_PTEN1_MASK                        0x00000002
#define _PMAEN_PTEN1_LENGTH                      0x00000001

#define _PMAEN_PTEN2_POSITION                    0x00000002
#define _PMAEN_PTEN2_MASK                        0x00000004
#define _PMAEN_PTEN2_LENGTH                      0x00000001

#define _PMAEN_PTEN3_POSITION                    0x00000003
#define _PMAEN_PTEN3_MASK                        0x00000008
#define _PMAEN_PTEN3_LENGTH                      0x00000001

#define _PMAEN_PTEN4_POSITION                    0x00000004
#define _PMAEN_PTEN4_MASK                        0x00000010
#define _PMAEN_PTEN4_LENGTH                      0x00000001

#define _PMAEN_PTEN5_POSITION                    0x00000005
#define _PMAEN_PTEN5_MASK                        0x00000020
#define _PMAEN_PTEN5_LENGTH                      0x00000001

#define _PMAEN_PTEN6_POSITION                    0x00000006
#define _PMAEN_PTEN6_MASK                        0x00000040
#define _PMAEN_PTEN6_LENGTH                      0x00000001

#define _PMAEN_PTEN7_POSITION                    0x00000007
#define _PMAEN_PTEN7_MASK                        0x00000080
#define _PMAEN_PTEN7_LENGTH                      0x00000001

#define _PMAEN_PTEN8_POSITION                    0x00000008
#define _PMAEN_PTEN8_MASK                        0x00000100
#define _PMAEN_PTEN8_LENGTH                      0x00000001

#define _PMAEN_PTEN9_POSITION                    0x00000009
#define _PMAEN_PTEN9_MASK                        0x00000200
#define _PMAEN_PTEN9_LENGTH                      0x00000001

#define _PMAEN_PTEN10_POSITION                   0x0000000A
#define _PMAEN_PTEN10_MASK                       0x00000400
#define _PMAEN_PTEN10_LENGTH                     0x00000001

#define _PMAEN_PTEN11_POSITION                   0x0000000B
#define _PMAEN_PTEN11_MASK                       0x00000800
#define _PMAEN_PTEN11_LENGTH                     0x00000001

#define _PMAEN_PTEN12_POSITION                   0x0000000C
#define _PMAEN_PTEN12_MASK                       0x00001000
#define _PMAEN_PTEN12_LENGTH                     0x00000001

#define _PMAEN_PTEN13_POSITION                   0x0000000D
#define _PMAEN_PTEN13_MASK                       0x00002000
#define _PMAEN_PTEN13_LENGTH                     0x00000001

#define _PMAEN_PTEN14_POSITION                   0x0000000E
#define _PMAEN_PTEN14_MASK                       0x00004000
#define _PMAEN_PTEN14_LENGTH                     0x00000001

#define _PMAEN_PTEN15_POSITION                   0x0000000F
#define _PMAEN_PTEN15_MASK                       0x00008000
#define _PMAEN_PTEN15_LENGTH                     0x00000001

#define _PMAEN_w_POSITION                        0x00000000
#define _PMAEN_w_MASK                            0xFFFFFFFF
#define _PMAEN_w_LENGTH                          0x00000020

#define _PMSTAT_OB0E_POSITION                    0x00000000
#define _PMSTAT_OB0E_MASK                        0x00000001
#define _PMSTAT_OB0E_LENGTH                      0x00000001

#define _PMSTAT_OB1E_POSITION                    0x00000001
#define _PMSTAT_OB1E_MASK                        0x00000002
#define _PMSTAT_OB1E_LENGTH                      0x00000001

#define _PMSTAT_OB2E_POSITION                    0x00000002
#define _PMSTAT_OB2E_MASK                        0x00000004
#define _PMSTAT_OB2E_LENGTH                      0x00000001

#define _PMSTAT_OB3E_POSITION                    0x00000003
#define _PMSTAT_OB3E_MASK                        0x00000008
#define _PMSTAT_OB3E_LENGTH                      0x00000001

#define _PMSTAT_OBUF_POSITION                    0x00000006
#define _PMSTAT_OBUF_MASK                        0x00000040
#define _PMSTAT_OBUF_LENGTH                      0x00000001

#define _PMSTAT_OBE_POSITION                     0x00000007
#define _PMSTAT_OBE_MASK                         0x00000080
#define _PMSTAT_OBE_LENGTH                       0x00000001

#define _PMSTAT_IB0F_POSITION                    0x00000008
#define _PMSTAT_IB0F_MASK                        0x00000100
#define _PMSTAT_IB0F_LENGTH                      0x00000001

#define _PMSTAT_IB1F_POSITION                    0x00000009
#define _PMSTAT_IB1F_MASK                        0x00000200
#define _PMSTAT_IB1F_LENGTH                      0x00000001

#define _PMSTAT_IB2F_POSITION                    0x0000000A
#define _PMSTAT_IB2F_MASK                        0x00000400
#define _PMSTAT_IB2F_LENGTH                      0x00000001

#define _PMSTAT_IB3F_POSITION                    0x0000000B
#define _PMSTAT_IB3F_MASK                        0x00000800
#define _PMSTAT_IB3F_LENGTH                      0x00000001

#define _PMSTAT_IBOV_POSITION                    0x0000000E
#define _PMSTAT_IBOV_MASK                        0x00004000
#define _PMSTAT_IBOV_LENGTH                      0x00000001

#define _PMSTAT_IBF_POSITION                     0x0000000F
#define _PMSTAT_IBF_MASK                         0x00008000
#define _PMSTAT_IBF_LENGTH                       0x00000001

#define _PMSTAT_w_POSITION                       0x00000000
#define _PMSTAT_w_MASK                           0xFFFFFFFF
#define _PMSTAT_w_LENGTH                         0x00000020

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_CLRASAM_POSITION                0x00000004
#define _AD1CON1_CLRASAM_MASK                    0x00000010
#define _AD1CON1_CLRASAM_LENGTH                  0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000700
#define _AD1CON1_FORM_LENGTH                     0x00000003

#define _AD1CON1_SIDL_POSITION                   0x0000000D
#define _AD1CON1_SIDL_MASK                       0x00002000
#define _AD1CON1_SIDL_LENGTH                     0x00000001

#define _AD1CON1_ON_POSITION                     0x0000000F
#define _AD1CON1_ON_MASK                         0x00008000
#define _AD1CON1_ON_LENGTH                       0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000005
#define _AD1CON1_SSRC0_MASK                      0x00000020
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000006
#define _AD1CON1_SSRC1_MASK                      0x00000040
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000007
#define _AD1CON1_SSRC2_MASK                      0x00000080
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_FORM0_POSITION                  0x00000008
#define _AD1CON1_FORM0_MASK                      0x00000100
#define _AD1CON1_FORM0_LENGTH                    0x00000001

#define _AD1CON1_FORM1_POSITION                  0x00000009
#define _AD1CON1_FORM1_MASK                      0x00000200
#define _AD1CON1_FORM1_LENGTH                    0x00000001

#define _AD1CON1_FORM2_POSITION                  0x0000000A
#define _AD1CON1_FORM2_MASK                      0x00000400
#define _AD1CON1_FORM2_LENGTH                    0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_w_POSITION                      0x00000000
#define _AD1CON1_w_MASK                          0xFFFFFFFF
#define _AD1CON1_w_LENGTH                        0x00000020

#define _AD1CON2_ALTS_POSITION                   0x00000000
#define _AD1CON2_ALTS_MASK                       0x00000001
#define _AD1CON2_ALTS_LENGTH                     0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000003C
#define _AD1CON2_SMPI_LENGTH                     0x00000004

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON2_SMPI0_POSITION                  0x00000002
#define _AD1CON2_SMPI0_MASK                      0x00000004
#define _AD1CON2_SMPI0_LENGTH                    0x00000001

#define _AD1CON2_SMPI1_POSITION                  0x00000003
#define _AD1CON2_SMPI1_MASK                      0x00000008
#define _AD1CON2_SMPI1_LENGTH                    0x00000001

#define _AD1CON2_SMPI2_POSITION                  0x00000004
#define _AD1CON2_SMPI2_MASK                      0x00000010
#define _AD1CON2_SMPI2_LENGTH                    0x00000001

#define _AD1CON2_SMPI3_POSITION                  0x00000005
#define _AD1CON2_SMPI3_MASK                      0x00000020
#define _AD1CON2_SMPI3_LENGTH                    0x00000001

#define _AD1CON2_VCFG0_POSITION                  0x0000000D
#define _AD1CON2_VCFG0_MASK                      0x00002000
#define _AD1CON2_VCFG0_LENGTH                    0x00000001

#define _AD1CON2_VCFG1_POSITION                  0x0000000E
#define _AD1CON2_VCFG1_MASK                      0x00004000
#define _AD1CON2_VCFG1_LENGTH                    0x00000001

#define _AD1CON2_VCFG2_POSITION                  0x0000000F
#define _AD1CON2_VCFG2_MASK                      0x00008000
#define _AD1CON2_VCFG2_LENGTH                    0x00000001

#define _AD1CON2_w_POSITION                      0x00000000
#define _AD1CON2_w_MASK                          0xFFFFFFFF
#define _AD1CON2_w_LENGTH                        0x00000020

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CON3_ADCS0_POSITION                  0x00000000
#define _AD1CON3_ADCS0_MASK                      0x00000001
#define _AD1CON3_ADCS0_LENGTH                    0x00000001

#define _AD1CON3_ADCS1_POSITION                  0x00000001
#define _AD1CON3_ADCS1_MASK                      0x00000002
#define _AD1CON3_ADCS1_LENGTH                    0x00000001

#define _AD1CON3_ADCS2_POSITION                  0x00000002
#define _AD1CON3_ADCS2_MASK                      0x00000004
#define _AD1CON3_ADCS2_LENGTH                    0x00000001

#define _AD1CON3_ADCS3_POSITION                  0x00000003
#define _AD1CON3_ADCS3_MASK                      0x00000008
#define _AD1CON3_ADCS3_LENGTH                    0x00000001

#define _AD1CON3_ADCS4_POSITION                  0x00000004
#define _AD1CON3_ADCS4_MASK                      0x00000010
#define _AD1CON3_ADCS4_LENGTH                    0x00000001

#define _AD1CON3_ADCS5_POSITION                  0x00000005
#define _AD1CON3_ADCS5_MASK                      0x00000020
#define _AD1CON3_ADCS5_LENGTH                    0x00000001

#define _AD1CON3_ADCS6_POSITION                  0x00000006
#define _AD1CON3_ADCS6_MASK                      0x00000040
#define _AD1CON3_ADCS6_LENGTH                    0x00000001

#define _AD1CON3_ADCS7_POSITION                  0x00000007
#define _AD1CON3_ADCS7_MASK                      0x00000080
#define _AD1CON3_ADCS7_LENGTH                    0x00000001

#define _AD1CON3_SAMC0_POSITION                  0x00000008
#define _AD1CON3_SAMC0_MASK                      0x00000100
#define _AD1CON3_SAMC0_LENGTH                    0x00000001

#define _AD1CON3_SAMC1_POSITION                  0x00000009
#define _AD1CON3_SAMC1_MASK                      0x00000200
#define _AD1CON3_SAMC1_LENGTH                    0x00000001

#define _AD1CON3_SAMC2_POSITION                  0x0000000A
#define _AD1CON3_SAMC2_MASK                      0x00000400
#define _AD1CON3_SAMC2_LENGTH                    0x00000001

#define _AD1CON3_SAMC3_POSITION                  0x0000000B
#define _AD1CON3_SAMC3_MASK                      0x00000800
#define _AD1CON3_SAMC3_LENGTH                    0x00000001

#define _AD1CON3_SAMC4_POSITION                  0x0000000C
#define _AD1CON3_SAMC4_MASK                      0x00001000
#define _AD1CON3_SAMC4_LENGTH                    0x00000001

#define _AD1CON3_w_POSITION                      0x00000000
#define _AD1CON3_w_MASK                          0xFFFFFFFF
#define _AD1CON3_w_LENGTH                        0x00000020

#define _AD1CHS_CH0SA_POSITION                   0x00000010
#define _AD1CHS_CH0SA_MASK                       0x000F0000
#define _AD1CHS_CH0SA_LENGTH                     0x00000004

#define _AD1CHS_CH0NA_POSITION                   0x00000017
#define _AD1CHS_CH0NA_MASK                       0x00800000
#define _AD1CHS_CH0NA_LENGTH                     0x00000001

#define _AD1CHS_CH0SB_POSITION                   0x00000018
#define _AD1CHS_CH0SB_MASK                       0x0F000000
#define _AD1CHS_CH0SB_LENGTH                     0x00000004

#define _AD1CHS_CH0NB_POSITION                   0x0000001F
#define _AD1CHS_CH0NB_MASK                       0x80000000
#define _AD1CHS_CH0NB_LENGTH                     0x00000001

#define _AD1CHS_CH0SA0_POSITION                  0x00000010
#define _AD1CHS_CH0SA0_MASK                      0x00010000
#define _AD1CHS_CH0SA0_LENGTH                    0x00000001

#define _AD1CHS_CH0SA1_POSITION                  0x00000011
#define _AD1CHS_CH0SA1_MASK                      0x00020000
#define _AD1CHS_CH0SA1_LENGTH                    0x00000001

#define _AD1CHS_CH0SA2_POSITION                  0x00000012
#define _AD1CHS_CH0SA2_MASK                      0x00040000
#define _AD1CHS_CH0SA2_LENGTH                    0x00000001

#define _AD1CHS_CH0SA3_POSITION                  0x00000013
#define _AD1CHS_CH0SA3_MASK                      0x00080000
#define _AD1CHS_CH0SA3_LENGTH                    0x00000001

#define _AD1CHS_CH0SB0_POSITION                  0x00000018
#define _AD1CHS_CH0SB0_MASK                      0x01000000
#define _AD1CHS_CH0SB0_LENGTH                    0x00000001

#define _AD1CHS_CH0SB1_POSITION                  0x00000019
#define _AD1CHS_CH0SB1_MASK                      0x02000000
#define _AD1CHS_CH0SB1_LENGTH                    0x00000001

#define _AD1CHS_CH0SB2_POSITION                  0x0000001A
#define _AD1CHS_CH0SB2_MASK                      0x04000000
#define _AD1CHS_CH0SB2_LENGTH                    0x00000001

#define _AD1CHS_CH0SB3_POSITION                  0x0000001B
#define _AD1CHS_CH0SB3_MASK                      0x08000000
#define _AD1CHS_CH0SB3_LENGTH                    0x00000001

#define _AD1CHS_w_POSITION                       0x00000000
#define _AD1CHS_w_MASK                           0xFFFFFFFF
#define _AD1CHS_w_LENGTH                         0x00000020

#define _AD1CSSL_CSSL_POSITION                   0x00000000
#define _AD1CSSL_CSSL_MASK                       0x7FFFFFFF
#define _AD1CSSL_CSSL_LENGTH                     0x0000001F

#define _AD1CSSL_CSSL0_POSITION                  0x00000000
#define _AD1CSSL_CSSL0_MASK                      0x00000001
#define _AD1CSSL_CSSL0_LENGTH                    0x00000001

#define _AD1CSSL_CSSL1_POSITION                  0x00000001
#define _AD1CSSL_CSSL1_MASK                      0x00000002
#define _AD1CSSL_CSSL1_LENGTH                    0x00000001

#define _AD1CSSL_CSSL2_POSITION                  0x00000002
#define _AD1CSSL_CSSL2_MASK                      0x00000004
#define _AD1CSSL_CSSL2_LENGTH                    0x00000001

#define _AD1CSSL_CSSL3_POSITION                  0x00000003
#define _AD1CSSL_CSSL3_MASK                      0x00000008
#define _AD1CSSL_CSSL3_LENGTH                    0x00000001

#define _AD1CSSL_CSSL4_POSITION                  0x00000004
#define _AD1CSSL_CSSL4_MASK                      0x00000010
#define _AD1CSSL_CSSL4_LENGTH                    0x00000001

#define _AD1CSSL_CSSL5_POSITION                  0x00000005
#define _AD1CSSL_CSSL5_MASK                      0x00000020
#define _AD1CSSL_CSSL5_LENGTH                    0x00000001

#define _AD1CSSL_CSSL6_POSITION                  0x00000006
#define _AD1CSSL_CSSL6_MASK                      0x00000040
#define _AD1CSSL_CSSL6_LENGTH                    0x00000001

#define _AD1CSSL_CSSL7_POSITION                  0x00000007
#define _AD1CSSL_CSSL7_MASK                      0x00000080
#define _AD1CSSL_CSSL7_LENGTH                    0x00000001

#define _AD1CSSL_CSSL8_POSITION                  0x00000008
#define _AD1CSSL_CSSL8_MASK                      0x00000100
#define _AD1CSSL_CSSL8_LENGTH                    0x00000001

#define _AD1CSSL_CSSL9_POSITION                  0x00000009
#define _AD1CSSL_CSSL9_MASK                      0x00000200
#define _AD1CSSL_CSSL9_LENGTH                    0x00000001

#define _AD1CSSL_CSSL10_POSITION                 0x0000000A
#define _AD1CSSL_CSSL10_MASK                     0x00000400
#define _AD1CSSL_CSSL10_LENGTH                   0x00000001

#define _AD1CSSL_CSSL11_POSITION                 0x0000000B
#define _AD1CSSL_CSSL11_MASK                     0x00000800
#define _AD1CSSL_CSSL11_LENGTH                   0x00000001

#define _AD1CSSL_CSSL12_POSITION                 0x0000000C
#define _AD1CSSL_CSSL12_MASK                     0x00001000
#define _AD1CSSL_CSSL12_LENGTH                   0x00000001

#define _AD1CSSL_CSSL13_POSITION                 0x0000000D
#define _AD1CSSL_CSSL13_MASK                     0x00002000
#define _AD1CSSL_CSSL13_LENGTH                   0x00000001

#define _AD1CSSL_CSSL14_POSITION                 0x0000000E
#define _AD1CSSL_CSSL14_MASK                     0x00004000
#define _AD1CSSL_CSSL14_LENGTH                   0x00000001

#define _AD1CSSL_CSSL15_POSITION                 0x0000000F
#define _AD1CSSL_CSSL15_MASK                     0x00008000
#define _AD1CSSL_CSSL15_LENGTH                   0x00000001

#define _AD1CSSL_CSSL16_POSITION                 0x00000010
#define _AD1CSSL_CSSL16_MASK                     0x00010000
#define _AD1CSSL_CSSL16_LENGTH                   0x00000001

#define _AD1CSSL_CSSL17_POSITION                 0x00000011
#define _AD1CSSL_CSSL17_MASK                     0x00020000
#define _AD1CSSL_CSSL17_LENGTH                   0x00000001

#define _AD1CSSL_CSSL18_POSITION                 0x00000012
#define _AD1CSSL_CSSL18_MASK                     0x00040000
#define _AD1CSSL_CSSL18_LENGTH                   0x00000001

#define _AD1CSSL_CSSL19_POSITION                 0x00000013
#define _AD1CSSL_CSSL19_MASK                     0x00080000
#define _AD1CSSL_CSSL19_LENGTH                   0x00000001

#define _AD1CSSL_CSSL20_POSITION                 0x00000014
#define _AD1CSSL_CSSL20_MASK                     0x00100000
#define _AD1CSSL_CSSL20_LENGTH                   0x00000001

#define _AD1CSSL_CSSL21_POSITION                 0x00000015
#define _AD1CSSL_CSSL21_MASK                     0x00200000
#define _AD1CSSL_CSSL21_LENGTH                   0x00000001

#define _AD1CSSL_CSSL22_POSITION                 0x00000016
#define _AD1CSSL_CSSL22_MASK                     0x00400000
#define _AD1CSSL_CSSL22_LENGTH                   0x00000001

#define _AD1CSSL_CSSL23_POSITION                 0x00000017
#define _AD1CSSL_CSSL23_MASK                     0x00800000
#define _AD1CSSL_CSSL23_LENGTH                   0x00000001

#define _AD1CSSL_CSSL24_POSITION                 0x00000018
#define _AD1CSSL_CSSL24_MASK                     0x01000000
#define _AD1CSSL_CSSL24_LENGTH                   0x00000001

#define _AD1CSSL_CSSL25_POSITION                 0x00000019
#define _AD1CSSL_CSSL25_MASK                     0x02000000
#define _AD1CSSL_CSSL25_LENGTH                   0x00000001

#define _AD1CSSL_CSSL26_POSITION                 0x0000001A
#define _AD1CSSL_CSSL26_MASK                     0x04000000
#define _AD1CSSL_CSSL26_LENGTH                   0x00000001

#define _AD1CSSL_CSSL27_POSITION                 0x0000001B
#define _AD1CSSL_CSSL27_MASK                     0x08000000
#define _AD1CSSL_CSSL27_LENGTH                   0x00000001

#define _AD1CSSL_CSSL28_POSITION                 0x0000001C
#define _AD1CSSL_CSSL28_MASK                     0x10000000
#define _AD1CSSL_CSSL28_LENGTH                   0x00000001

#define _AD1CSSL_CSSL29_POSITION                 0x0000001D
#define _AD1CSSL_CSSL29_MASK                     0x20000000
#define _AD1CSSL_CSSL29_LENGTH                   0x00000001

#define _AD1CSSL_CSSL30_POSITION                 0x0000001E
#define _AD1CSSL_CSSL30_MASK                     0x40000000
#define _AD1CSSL_CSSL30_LENGTH                   0x00000001

#define _AD1CSSL_w_POSITION                      0x00000000
#define _AD1CSSL_w_MASK                          0xFFFFFFFF
#define _AD1CSSL_w_LENGTH                        0x00000020

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000000F
#define _CVRCON_CVR_LENGTH                       0x00000004

#define _CVRCON_CVRSS_POSITION                   0x00000004
#define _CVRCON_CVRSS_MASK                       0x00000010
#define _CVRCON_CVRSS_LENGTH                     0x00000001

#define _CVRCON_CVRR_POSITION                    0x00000005
#define _CVRCON_CVRR_MASK                        0x00000020
#define _CVRCON_CVRR_LENGTH                      0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_BGSEL_POSITION                   0x00000008
#define _CVRCON_BGSEL_MASK                       0x00000300
#define _CVRCON_BGSEL_LENGTH                     0x00000002

#define _CVRCON_VREFSEL_POSITION                 0x0000000A
#define _CVRCON_VREFSEL_MASK                     0x00000400
#define _CVRCON_VREFSEL_LENGTH                   0x00000001

#define _CVRCON_ON_POSITION                      0x0000000F
#define _CVRCON_ON_MASK                          0x00008000
#define _CVRCON_ON_LENGTH                        0x00000001

#define _CVRCON_CVR0_POSITION                    0x00000000
#define _CVRCON_CVR0_MASK                        0x00000001
#define _CVRCON_CVR0_LENGTH                      0x00000001

#define _CVRCON_CVR1_POSITION                    0x00000001
#define _CVRCON_CVR1_MASK                        0x00000002
#define _CVRCON_CVR1_LENGTH                      0x00000001

#define _CVRCON_CVR2_POSITION                    0x00000002
#define _CVRCON_CVR2_MASK                        0x00000004
#define _CVRCON_CVR2_LENGTH                      0x00000001

#define _CVRCON_CVR3_POSITION                    0x00000003
#define _CVRCON_CVR3_MASK                        0x00000008
#define _CVRCON_CVR3_LENGTH                      0x00000001

#define _CVRCON_BGSEL0_POSITION                  0x00000008
#define _CVRCON_BGSEL0_MASK                      0x00000100
#define _CVRCON_BGSEL0_LENGTH                    0x00000001

#define _CVRCON_BGSEL1_POSITION                  0x00000009
#define _CVRCON_BGSEL1_MASK                      0x00000200
#define _CVRCON_BGSEL1_LENGTH                    0x00000001

#define _CVRCON_w_POSITION                       0x00000000
#define _CVRCON_w_MASK                           0xFFFFFFFF
#define _CVRCON_w_LENGTH                         0x00000020

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CLPWR_POSITION                   0x0000000C
#define _CM1CON_CLPWR_MASK                       0x00001000
#define _CM1CON_CLPWR_LENGTH                     0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_ON_POSITION                      0x0000000F
#define _CM1CON_ON_MASK                          0x00008000
#define _CM1CON_ON_LENGTH                        0x00000001

#define _CM1CON_CCH0_POSITION                    0x00000000
#define _CM1CON_CCH0_MASK                        0x00000001
#define _CM1CON_CCH0_LENGTH                      0x00000001

#define _CM1CON_CCH1_POSITION                    0x00000001
#define _CM1CON_CCH1_MASK                        0x00000002
#define _CM1CON_CCH1_LENGTH                      0x00000001

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

#define _CM1CON_w_POSITION                       0x00000000
#define _CM1CON_w_MASK                           0xFFFFFFFF
#define _CM1CON_w_LENGTH                         0x00000020

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CLPWR_POSITION                   0x0000000C
#define _CM2CON_CLPWR_MASK                       0x00001000
#define _CM2CON_CLPWR_LENGTH                     0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_ON_POSITION                      0x0000000F
#define _CM2CON_ON_MASK                          0x00008000
#define _CM2CON_ON_LENGTH                        0x00000001

#define _CM2CON_CCH0_POSITION                    0x00000000
#define _CM2CON_CCH0_MASK                        0x00000001
#define _CM2CON_CCH0_LENGTH                      0x00000001

#define _CM2CON_CCH1_POSITION                    0x00000001
#define _CM2CON_CCH1_MASK                        0x00000002
#define _CM2CON_CCH1_LENGTH                      0x00000001

#define _CM2CON_EVPOL0_POSITION                  0x00000006
#define _CM2CON_EVPOL0_MASK                      0x00000040
#define _CM2CON_EVPOL0_LENGTH                    0x00000001

#define _CM2CON_EVPOL1_POSITION                  0x00000007
#define _CM2CON_EVPOL1_MASK                      0x00000080
#define _CM2CON_EVPOL1_LENGTH                    0x00000001

#define _CM2CON_w_POSITION                       0x00000000
#define _CM2CON_w_MASK                           0xFFFFFFFF
#define _CM2CON_w_LENGTH                         0x00000020

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_C4OUT_POSITION                   0x00000003
#define _CMSTAT_C4OUT_MASK                       0x00000008
#define _CMSTAT_C4OUT_LENGTH                     0x00000001

#define _CMSTAT_C5OUT_POSITION                   0x00000004
#define _CMSTAT_C5OUT_MASK                       0x00000010
#define _CMSTAT_C5OUT_LENGTH                     0x00000001

#define _CMSTAT_C6OUT_POSITION                   0x00000005
#define _CMSTAT_C6OUT_MASK                       0x00000020
#define _CMSTAT_C6OUT_LENGTH                     0x00000001

#define _CMSTAT_SIDL_POSITION                    0x0000000D
#define _CMSTAT_SIDL_MASK                        0x00002000
#define _CMSTAT_SIDL_LENGTH                      0x00000001

#define _CMSTAT_w_POSITION                       0x00000000
#define _CMSTAT_w_MASK                           0xFFFFFFFF
#define _CMSTAT_w_LENGTH                         0x00000020

#define _CTMUCON_IRNG_POSITION                   0x00000000
#define _CTMUCON_IRNG_MASK                       0x00000003
#define _CTMUCON_IRNG_LENGTH                     0x00000002

#define _CTMUCON_ITRIM_POSITION                  0x00000002
#define _CTMUCON_ITRIM_MASK                      0x000000FC
#define _CTMUCON_ITRIM_LENGTH                    0x00000006

#define _CTMUCON_CTTRIG_POSITION                 0x00000008
#define _CTMUCON_CTTRIG_MASK                     0x00000100
#define _CTMUCON_CTTRIG_LENGTH                   0x00000001

#define _CTMUCON_IDISSEN_POSITION                0x00000009
#define _CTMUCON_IDISSEN_MASK                    0x00000200
#define _CTMUCON_IDISSEN_LENGTH                  0x00000001

#define _CTMUCON_EDGSEQEN_POSITION               0x0000000A
#define _CTMUCON_EDGSEQEN_MASK                   0x00000400
#define _CTMUCON_EDGSEQEN_LENGTH                 0x00000001

#define _CTMUCON_EDGEN_POSITION                  0x0000000B
#define _CTMUCON_EDGEN_MASK                      0x00000800
#define _CTMUCON_EDGEN_LENGTH                    0x00000001

#define _CTMUCON_TGEN_POSITION                   0x0000000C
#define _CTMUCON_TGEN_MASK                       0x00001000
#define _CTMUCON_TGEN_LENGTH                     0x00000001

#define _CTMUCON_CTMUSIDL_POSITION               0x0000000D
#define _CTMUCON_CTMUSIDL_MASK                   0x00002000
#define _CTMUCON_CTMUSIDL_LENGTH                 0x00000001

#define _CTMUCON_ON_POSITION                     0x0000000F
#define _CTMUCON_ON_MASK                         0x00008000
#define _CTMUCON_ON_LENGTH                       0x00000001

#define _CTMUCON_EDG2SEL_POSITION                0x00000012
#define _CTMUCON_EDG2SEL_MASK                    0x003C0000
#define _CTMUCON_EDG2SEL_LENGTH                  0x00000004

#define _CTMUCON_EDG2POL_POSITION                0x00000016
#define _CTMUCON_EDG2POL_MASK                    0x00400000
#define _CTMUCON_EDG2POL_LENGTH                  0x00000001

#define _CTMUCON_EDG2MOD_POSITION                0x00000017
#define _CTMUCON_EDG2MOD_MASK                    0x00800000
#define _CTMUCON_EDG2MOD_LENGTH                  0x00000001

#define _CTMUCON_EDG1STAT_POSITION               0x00000018
#define _CTMUCON_EDG1STAT_MASK                   0x01000000
#define _CTMUCON_EDG1STAT_LENGTH                 0x00000001

#define _CTMUCON_EDG2STAT_POSITION               0x00000019
#define _CTMUCON_EDG2STAT_MASK                   0x02000000
#define _CTMUCON_EDG2STAT_LENGTH                 0x00000001

#define _CTMUCON_EDG1SEL_POSITION                0x0000001A
#define _CTMUCON_EDG1SEL_MASK                    0x3C000000
#define _CTMUCON_EDG1SEL_LENGTH                  0x00000004

#define _CTMUCON_EDG1POL_POSITION                0x0000001E
#define _CTMUCON_EDG1POL_MASK                    0x40000000
#define _CTMUCON_EDG1POL_LENGTH                  0x00000001

#define _CTMUCON_EDG1MOD_POSITION                0x0000001F
#define _CTMUCON_EDG1MOD_MASK                    0x80000000
#define _CTMUCON_EDG1MOD_LENGTH                  0x00000001

#define _CTMUCON_w_POSITION                      0x00000000
#define _CTMUCON_w_MASK                          0xFFFFFFFF
#define _CTMUCON_w_LENGTH                        0x00000020

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_UFRCEN_POSITION                  0x00000002
#define _OSCCON_UFRCEN_MASK                      0x00000004
#define _OSCCON_UFRCEN_LENGTH                    0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_SLPEN_POSITION                   0x00000004
#define _OSCCON_SLPEN_MASK                       0x00000010
#define _OSCCON_SLPEN_LENGTH                     0x00000001

#define _OSCCON_SLOCK_POSITION                   0x00000005
#define _OSCCON_SLOCK_MASK                       0x00000020
#define _OSCCON_SLOCK_LENGTH                     0x00000001

#define _OSCCON_ULOCK_POSITION                   0x00000006
#define _OSCCON_ULOCK_MASK                       0x00000040
#define _OSCCON_ULOCK_LENGTH                     0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_PLLMULT_POSITION                 0x00000010
#define _OSCCON_PLLMULT_MASK                     0x00070000
#define _OSCCON_PLLMULT_LENGTH                   0x00000003

#define _OSCCON_PBDIV_POSITION                   0x00000013
#define _OSCCON_PBDIV_MASK                       0x00180000
#define _OSCCON_PBDIV_LENGTH                     0x00000002

#define _OSCCON_PBDIVRDY_POSITION                0x00000015
#define _OSCCON_PBDIVRDY_MASK                    0x00200000
#define _OSCCON_PBDIVRDY_LENGTH                  0x00000001

#define _OSCCON_SOSCRDY_POSITION                 0x00000016
#define _OSCCON_SOSCRDY_MASK                     0x00400000
#define _OSCCON_SOSCRDY_LENGTH                   0x00000001

#define _OSCCON_FRCDIV_POSITION                  0x00000018
#define _OSCCON_FRCDIV_MASK                      0x07000000
#define _OSCCON_FRCDIV_LENGTH                    0x00000003

#define _OSCCON_PLLODIV_POSITION                 0x0000001B
#define _OSCCON_PLLODIV_MASK                     0x38000000
#define _OSCCON_PLLODIV_LENGTH                   0x00000003

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _OSCCON_PLLMULT0_POSITION                0x00000010
#define _OSCCON_PLLMULT0_MASK                    0x00010000
#define _OSCCON_PLLMULT0_LENGTH                  0x00000001

#define _OSCCON_PLLMULT1_POSITION                0x00000011
#define _OSCCON_PLLMULT1_MASK                    0x00020000
#define _OSCCON_PLLMULT1_LENGTH                  0x00000001

#define _OSCCON_PLLMULT2_POSITION                0x00000012
#define _OSCCON_PLLMULT2_MASK                    0x00040000
#define _OSCCON_PLLMULT2_LENGTH                  0x00000001

#define _OSCCON_PBDIV0_POSITION                  0x00000013
#define _OSCCON_PBDIV0_MASK                      0x00080000
#define _OSCCON_PBDIV0_LENGTH                    0x00000001

#define _OSCCON_PBDIV1_POSITION                  0x00000014
#define _OSCCON_PBDIV1_MASK                      0x00100000
#define _OSCCON_PBDIV1_LENGTH                    0x00000001

#define _OSCCON_FRCDIV0_POSITION                 0x00000018
#define _OSCCON_FRCDIV0_MASK                     0x01000000
#define _OSCCON_FRCDIV0_LENGTH                   0x00000001

#define _OSCCON_FRCDIV1_POSITION                 0x00000019
#define _OSCCON_FRCDIV1_MASK                     0x02000000
#define _OSCCON_FRCDIV1_LENGTH                   0x00000001

#define _OSCCON_FRCDIV2_POSITION                 0x0000001A
#define _OSCCON_FRCDIV2_MASK                     0x04000000
#define _OSCCON_FRCDIV2_LENGTH                   0x00000001

#define _OSCCON_PLLODIV0_POSITION                0x0000001B
#define _OSCCON_PLLODIV0_MASK                    0x08000000
#define _OSCCON_PLLODIV0_LENGTH                  0x00000001

#define _OSCCON_PLLODIV1_POSITION                0x0000001C
#define _OSCCON_PLLODIV1_MASK                    0x10000000
#define _OSCCON_PLLODIV1_LENGTH                  0x00000001

#define _OSCCON_PLLODIV2_POSITION                0x0000001D
#define _OSCCON_PLLODIV2_MASK                    0x20000000
#define _OSCCON_PLLODIV2_LENGTH                  0x00000001

#define _OSCCON_w_POSITION                       0x00000000
#define _OSCCON_w_MASK                           0xFFFFFFFF
#define _OSCCON_w_LENGTH                         0x00000020

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _OSCTUN_w_POSITION                       0x00000000
#define _OSCTUN_w_MASK                           0xFFFFFFFF
#define _OSCTUN_w_LENGTH                         0x00000020

#define _REFOCON_ROSEL_POSITION                  0x00000000
#define _REFOCON_ROSEL_MASK                      0x0000000F
#define _REFOCON_ROSEL_LENGTH                    0x00000004

#define _REFOCON_ACTIVE_POSITION                 0x00000008
#define _REFOCON_ACTIVE_MASK                     0x00000100
#define _REFOCON_ACTIVE_LENGTH                   0x00000001

#define _REFOCON_DIVSWEN_POSITION                0x00000009
#define _REFOCON_DIVSWEN_MASK                    0x00000200
#define _REFOCON_DIVSWEN_LENGTH                  0x00000001

#define _REFOCON_RSLP_POSITION                   0x0000000B
#define _REFOCON_RSLP_MASK                       0x00000800
#define _REFOCON_RSLP_LENGTH                     0x00000001

#define _REFOCON_OE_POSITION                     0x0000000C
#define _REFOCON_OE_MASK                         0x00001000
#define _REFOCON_OE_LENGTH                       0x00000001

#define _REFOCON_SIDL_POSITION                   0x0000000D
#define _REFOCON_SIDL_MASK                       0x00002000
#define _REFOCON_SIDL_LENGTH                     0x00000001

#define _REFOCON_ON_POSITION                     0x0000000F
#define _REFOCON_ON_MASK                         0x00008000
#define _REFOCON_ON_LENGTH                       0x00000001

#define _REFOCON_RODIV_POSITION                  0x00000010
#define _REFOCON_RODIV_MASK                      0x7FFF0000
#define _REFOCON_RODIV_LENGTH                    0x0000000F

#define _REFOCON_w_POSITION                      0x00000000
#define _REFOCON_w_MASK                          0xFFFFFFFF
#define _REFOCON_w_LENGTH                        0x00000020

#define _REFOTRIM_ROTRIM_POSITION                0x00000017
#define _REFOTRIM_ROTRIM_MASK                    0xFF800000
#define _REFOTRIM_ROTRIM_LENGTH                  0x00000009

#define _REFOTRIM_w_POSITION                     0x00000000
#define _REFOTRIM_w_MASK                         0xFFFFFFFF
#define _REFOTRIM_w_LENGTH                       0x00000020

#define _CFGCON_TDOEN_POSITION                   0x00000000
#define _CFGCON_TDOEN_MASK                       0x00000001
#define _CFGCON_TDOEN_LENGTH                     0x00000001

#define _CFGCON_TROEN_POSITION                   0x00000002
#define _CFGCON_TROEN_MASK                       0x00000004
#define _CFGCON_TROEN_LENGTH                     0x00000001

#define _CFGCON_JTAGEN_POSITION                  0x00000003
#define _CFGCON_JTAGEN_MASK                      0x00000008
#define _CFGCON_JTAGEN_LENGTH                    0x00000001

#define _CFGCON_PMDLOCK_POSITION                 0x0000000C
#define _CFGCON_PMDLOCK_MASK                     0x00001000
#define _CFGCON_PMDLOCK_LENGTH                   0x00000001

#define _CFGCON_IOLOCK_POSITION                  0x0000000D
#define _CFGCON_IOLOCK_MASK                      0x00002000
#define _CFGCON_IOLOCK_LENGTH                    0x00000001

#define _DDPCON_TDOEN_POSITION                   0x00000000
#define _DDPCON_TDOEN_MASK                       0x00000001
#define _DDPCON_TDOEN_LENGTH                     0x00000001

#define _DDPCON_TROEN_POSITION                   0x00000002
#define _DDPCON_TROEN_MASK                       0x00000004
#define _DDPCON_TROEN_LENGTH                     0x00000001

#define _DDPCON_JTAGEN_POSITION                  0x00000003
#define _DDPCON_JTAGEN_MASK                      0x00000008
#define _DDPCON_JTAGEN_LENGTH                    0x00000001

#define _DDPCON_PMDLOCK_POSITION                 0x0000000C
#define _DDPCON_PMDLOCK_MASK                     0x00001000
#define _DDPCON_PMDLOCK_LENGTH                   0x00000001

#define _DDPCON_IOLOCK_POSITION                  0x0000000D
#define _DDPCON_IOLOCK_MASK                      0x00002000
#define _DDPCON_IOLOCK_LENGTH                    0x00000001

#define _DEVID_DEVID_POSITION                    0x00000000
#define _DEVID_DEVID_MASK                        0x0FFFFFFF
#define _DEVID_DEVID_LENGTH                      0x0000001C

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

#define _PMD1_AD1MD_POSITION                     0x00000000
#define _PMD1_AD1MD_MASK                         0x00000001
#define _PMD1_AD1MD_LENGTH                       0x00000001

#define _PMD1_CTMUMD_POSITION                    0x00000008
#define _PMD1_CTMUMD_MASK                        0x00000100
#define _PMD1_CTMUMD_LENGTH                      0x00000001

#define _PMD1_CVRMD_POSITION                     0x0000000C
#define _PMD1_CVRMD_MASK                         0x00001000
#define _PMD1_CVRMD_LENGTH                       0x00000001

#define _PMD2_CMP1MD_POSITION                    0x00000000
#define _PMD2_CMP1MD_MASK                        0x00000001
#define _PMD2_CMP1MD_LENGTH                      0x00000001

#define _PMD2_CMP2MD_POSITION                    0x00000001
#define _PMD2_CMP2MD_MASK                        0x00000002
#define _PMD2_CMP2MD_LENGTH                      0x00000001

#define _PMD3_IC1MD_POSITION                     0x00000000
#define _PMD3_IC1MD_MASK                         0x00000001
#define _PMD3_IC1MD_LENGTH                       0x00000001

#define _PMD3_IC2MD_POSITION                     0x00000001
#define _PMD3_IC2MD_MASK                         0x00000002
#define _PMD3_IC2MD_LENGTH                       0x00000001

#define _PMD3_IC3MD_POSITION                     0x00000002
#define _PMD3_IC3MD_MASK                         0x00000004
#define _PMD3_IC3MD_LENGTH                       0x00000001

#define _PMD3_IC4MD_POSITION                     0x00000003
#define _PMD3_IC4MD_MASK                         0x00000008
#define _PMD3_IC4MD_LENGTH                       0x00000001

#define _PMD3_IC5MD_POSITION                     0x00000004
#define _PMD3_IC5MD_MASK                         0x00000010
#define _PMD3_IC5MD_LENGTH                       0x00000001

#define _PMD3_OC1MD_POSITION                     0x00000010
#define _PMD3_OC1MD_MASK                         0x00010000
#define _PMD3_OC1MD_LENGTH                       0x00000001

#define _PMD3_OC2MD_POSITION                     0x00000011
#define _PMD3_OC2MD_MASK                         0x00020000
#define _PMD3_OC2MD_LENGTH                       0x00000001

#define _PMD3_OC3MD_POSITION                     0x00000012
#define _PMD3_OC3MD_MASK                         0x00040000
#define _PMD3_OC3MD_LENGTH                       0x00000001

#define _PMD3_OC4MD_POSITION                     0x00000013
#define _PMD3_OC4MD_MASK                         0x00080000
#define _PMD3_OC4MD_LENGTH                       0x00000001

#define _PMD3_OC5MD_POSITION                     0x00000014
#define _PMD3_OC5MD_MASK                         0x00100000
#define _PMD3_OC5MD_LENGTH                       0x00000001

#define _PMD4_T1MD_POSITION                      0x00000000
#define _PMD4_T1MD_MASK                          0x00000001
#define _PMD4_T1MD_LENGTH                        0x00000001

#define _PMD4_T2MD_POSITION                      0x00000001
#define _PMD4_T2MD_MASK                          0x00000002
#define _PMD4_T2MD_LENGTH                        0x00000001

#define _PMD4_T3MD_POSITION                      0x00000002
#define _PMD4_T3MD_MASK                          0x00000004
#define _PMD4_T3MD_LENGTH                        0x00000001

#define _PMD4_T4MD_POSITION                      0x00000003
#define _PMD4_T4MD_MASK                          0x00000008
#define _PMD4_T4MD_LENGTH                        0x00000001

#define _PMD4_T5MD_POSITION                      0x00000004
#define _PMD4_T5MD_MASK                          0x00000010
#define _PMD4_T5MD_LENGTH                        0x00000001

#define _PMD5_U1MD_POSITION                      0x00000000
#define _PMD5_U1MD_MASK                          0x00000001
#define _PMD5_U1MD_LENGTH                        0x00000001

#define _PMD5_U2MD_POSITION                      0x00000001
#define _PMD5_U2MD_MASK                          0x00000002
#define _PMD5_U2MD_LENGTH                        0x00000001

#define _PMD5_U3MD_POSITION                      0x00000002
#define _PMD5_U3MD_MASK                          0x00000004
#define _PMD5_U3MD_LENGTH                        0x00000001

#define _PMD5_U4MD_POSITION                      0x00000003
#define _PMD5_U4MD_MASK                          0x00000008
#define _PMD5_U4MD_LENGTH                        0x00000001

#define _PMD5_U5MD_POSITION                      0x00000004
#define _PMD5_U5MD_MASK                          0x00000010
#define _PMD5_U5MD_LENGTH                        0x00000001

#define _PMD5_SPI1MD_POSITION                    0x00000008
#define _PMD5_SPI1MD_MASK                        0x00000100
#define _PMD5_SPI1MD_LENGTH                      0x00000001

#define _PMD5_SPI2MD_POSITION                    0x00000009
#define _PMD5_SPI2MD_MASK                        0x00000200
#define _PMD5_SPI2MD_LENGTH                      0x00000001

#define _PMD5_I2C1MD_POSITION                    0x00000010
#define _PMD5_I2C1MD_MASK                        0x00010000
#define _PMD5_I2C1MD_LENGTH                      0x00000001

#define _PMD5_I2C2MD_POSITION                    0x00000011
#define _PMD5_I2C2MD_MASK                        0x00020000
#define _PMD5_I2C2MD_LENGTH                      0x00000001

#define _PMD6_RTCCMD_POSITION                    0x00000000
#define _PMD6_RTCCMD_MASK                        0x00000001
#define _PMD6_RTCCMD_LENGTH                      0x00000001

#define _PMD6_REFOMD_POSITION                    0x00000001
#define _PMD6_REFOMD_MASK                        0x00000002
#define _PMD6_REFOMD_LENGTH                      0x00000001

#define _PMD6_PMPMD_POSITION                     0x00000010
#define _PMD6_PMPMD_MASK                         0x00010000
#define _PMD6_PMPMD_LENGTH                       0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_LVDSTAT_POSITION                 0x0000000B
#define _NVMCON_LVDSTAT_MASK                     0x00000800
#define _NVMCON_LVDSTAT_LENGTH                   0x00000001

#define _NVMCON_LVDERR_POSITION                  0x0000000C
#define _NVMCON_LVDERR_MASK                      0x00001000
#define _NVMCON_LVDERR_LENGTH                    0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _NVMCON_PROGOP_POSITION                  0x00000000
#define _NVMCON_PROGOP_MASK                      0x0000000F
#define _NVMCON_PROGOP_LENGTH                    0x00000004

#define _NVMCON_PROGOP0_POSITION                 0x00000000
#define _NVMCON_PROGOP0_MASK                     0x00000001
#define _NVMCON_PROGOP0_LENGTH                   0x00000001

#define _NVMCON_PROGOP1_POSITION                 0x00000001
#define _NVMCON_PROGOP1_MASK                     0x00000002
#define _NVMCON_PROGOP1_LENGTH                   0x00000001

#define _NVMCON_PROGOP2_POSITION                 0x00000002
#define _NVMCON_PROGOP2_MASK                     0x00000004
#define _NVMCON_PROGOP2_LENGTH                   0x00000001

#define _NVMCON_PROGOP3_POSITION                 0x00000003
#define _NVMCON_PROGOP3_MASK                     0x00000008
#define _NVMCON_PROGOP3_LENGTH                   0x00000001

#define _NVMCON_w_POSITION                       0x00000000
#define _NVMCON_w_MASK                           0xFFFFFFFF
#define _NVMCON_w_LENGTH                         0x00000020

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_CMR_POSITION                       0x00000009
#define _RCON_CMR_MASK                           0x00000200
#define _RCON_CMR_LENGTH                         0x00000001

#define _RCON_HVDR_POSITION                      0x0000001D
#define _RCON_HVDR_MASK                          0x20000000
#define _RCON_HVDR_LENGTH                        0x00000001

#define _RCON_w_POSITION                         0x00000000
#define _RCON_w_MASK                             0xFFFFFFFF
#define _RCON_w_LENGTH                           0x00000020

#define _RSWRST_SWRST_POSITION                   0x00000000
#define _RSWRST_SWRST_MASK                       0x00000001
#define _RSWRST_SWRST_LENGTH                     0x00000001

#define _RSWRST_w_POSITION                       0x00000000
#define _RSWRST_w_MASK                           0xFFFFFFFF
#define _RSWRST_w_LENGTH                         0x00000020

#define _INT1R_INT1R_POSITION                    0x00000000
#define _INT1R_INT1R_MASK                        0x0000000F
#define _INT1R_INT1R_LENGTH                      0x00000004

#define _INT2R_INT2R_POSITION                    0x00000000
#define _INT2R_INT2R_MASK                        0x0000000F
#define _INT2R_INT2R_LENGTH                      0x00000004

#define _INT3R_INT3R_POSITION                    0x00000000
#define _INT3R_INT3R_MASK                        0x0000000F
#define _INT3R_INT3R_LENGTH                      0x00000004

#define _INT4R_INT4R_POSITION                    0x00000000
#define _INT4R_INT4R_MASK                        0x0000000F
#define _INT4R_INT4R_LENGTH                      0x00000004

#define _T2CKR_T2CKR_POSITION                    0x00000000
#define _T2CKR_T2CKR_MASK                        0x0000000F
#define _T2CKR_T2CKR_LENGTH                      0x00000004

#define _T3CKR_T3CKR_POSITION                    0x00000000
#define _T3CKR_T3CKR_MASK                        0x0000000F
#define _T3CKR_T3CKR_LENGTH                      0x00000004

#define _T4CKR_T4CKR_POSITION                    0x00000000
#define _T4CKR_T4CKR_MASK                        0x0000000F
#define _T4CKR_T4CKR_LENGTH                      0x00000004

#define _T5CKR_T5CKR_POSITION                    0x00000000
#define _T5CKR_T5CKR_MASK                        0x0000000F
#define _T5CKR_T5CKR_LENGTH                      0x00000004

#define _IC1R_IC1R_POSITION                      0x00000000
#define _IC1R_IC1R_MASK                          0x0000000F
#define _IC1R_IC1R_LENGTH                        0x00000004

#define _IC2R_IC2R_POSITION                      0x00000000
#define _IC2R_IC2R_MASK                          0x0000000F
#define _IC2R_IC2R_LENGTH                        0x00000004

#define _IC3R_IC3R_POSITION                      0x00000000
#define _IC3R_IC3R_MASK                          0x0000000F
#define _IC3R_IC3R_LENGTH                        0x00000004

#define _IC4R_IC4R_POSITION                      0x00000000
#define _IC4R_IC4R_MASK                          0x0000000F
#define _IC4R_IC4R_LENGTH                        0x00000004

#define _IC5R_IC5R_POSITION                      0x00000000
#define _IC5R_IC5R_MASK                          0x0000000F
#define _IC5R_IC5R_LENGTH                        0x00000004

#define _OCFAR_OCFAR_POSITION                    0x00000000
#define _OCFAR_OCFAR_MASK                        0x0000000F
#define _OCFAR_OCFAR_LENGTH                      0x00000004

#define _OCFBR_OCFBR_POSITION                    0x00000000
#define _OCFBR_OCFBR_MASK                        0x0000000F
#define _OCFBR_OCFBR_LENGTH                      0x00000004

#define _U1RXR_U1RXR_POSITION                    0x00000000
#define _U1RXR_U1RXR_MASK                        0x0000000F
#define _U1RXR_U1RXR_LENGTH                      0x00000004

#define _U1CTSR_U1CTSR_POSITION                  0x00000000
#define _U1CTSR_U1CTSR_MASK                      0x0000000F
#define _U1CTSR_U1CTSR_LENGTH                    0x00000004

#define _U2RXR_U2RXR_POSITION                    0x00000000
#define _U2RXR_U2RXR_MASK                        0x0000000F
#define _U2RXR_U2RXR_LENGTH                      0x00000004

#define _U2CTSR_U2CTSR_POSITION                  0x00000000
#define _U2CTSR_U2CTSR_MASK                      0x0000000F
#define _U2CTSR_U2CTSR_LENGTH                    0x00000004

#define _U3RXR_U3RXR_POSITION                    0x00000000
#define _U3RXR_U3RXR_MASK                        0x0000000F
#define _U3RXR_U3RXR_LENGTH                      0x00000004

#define _U3CTSR_U3CTSR_POSITION                  0x00000000
#define _U3CTSR_U3CTSR_MASK                      0x0000000F
#define _U3CTSR_U3CTSR_LENGTH                    0x00000004

#define _U4RXR_U4RXR_POSITION                    0x00000000
#define _U4RXR_U4RXR_MASK                        0x0000000F
#define _U4RXR_U4RXR_LENGTH                      0x00000004

#define _U4CTSR_U4CTSR_POSITION                  0x00000000
#define _U4CTSR_U4CTSR_MASK                      0x0000000F
#define _U4CTSR_U4CTSR_LENGTH                    0x00000004

#define _U5RXR_U5RXR_POSITION                    0x00000000
#define _U5RXR_U5RXR_MASK                        0x0000000F
#define _U5RXR_U5RXR_LENGTH                      0x00000004

#define _U5CTSR_U5CTSR_POSITION                  0x00000000
#define _U5CTSR_U5CTSR_MASK                      0x0000000F
#define _U5CTSR_U5CTSR_LENGTH                    0x00000004

#define _SDI1R_SDI1R_POSITION                    0x00000000
#define _SDI1R_SDI1R_MASK                        0x0000000F
#define _SDI1R_SDI1R_LENGTH                      0x00000004

#define _SS1R_SS1R_POSITION                      0x00000000
#define _SS1R_SS1R_MASK                          0x0000000F
#define _SS1R_SS1R_LENGTH                        0x00000004

#define _SDI2R_SDI2R_POSITION                    0x00000000
#define _SDI2R_SDI2R_MASK                        0x0000000F
#define _SDI2R_SDI2R_LENGTH                      0x00000004

#define _SS2R_SS2R_POSITION                      0x00000000
#define _SS2R_SS2R_MASK                          0x0000000F
#define _SS2R_SS2R_LENGTH                        0x00000004

#define _REFCLKIR_REFCLKIR_POSITION              0x00000000
#define _REFCLKIR_REFCLKIR_MASK                  0x0000000F
#define _REFCLKIR_REFCLKIR_LENGTH                0x00000004

#define _RPA14R_RPA14R_POSITION                  0x00000000
#define _RPA14R_RPA14R_MASK                      0x0000000F
#define _RPA14R_RPA14R_LENGTH                    0x00000004

#define _RPA15R_RPA15R_POSITION                  0x00000000
#define _RPA15R_RPA15R_MASK                      0x0000000F
#define _RPA15R_RPA15R_LENGTH                    0x00000004

#define _RPB0R_RPB0R_POSITION                    0x00000000
#define _RPB0R_RPB0R_MASK                        0x0000000F
#define _RPB0R_RPB0R_LENGTH                      0x00000004

#define _RPB1R_RPB1R_POSITION                    0x00000000
#define _RPB1R_RPB1R_MASK                        0x0000000F
#define _RPB1R_RPB1R_LENGTH                      0x00000004

#define _RPB2R_RPB2R_POSITION                    0x00000000
#define _RPB2R_RPB2R_MASK                        0x0000000F
#define _RPB2R_RPB2R_LENGTH                      0x00000004

#define _RPB3R_RPB3R_POSITION                    0x00000000
#define _RPB3R_RPB3R_MASK                        0x0000000F
#define _RPB3R_RPB3R_LENGTH                      0x00000004

#define _RPB4R_RPB4R_POSITION                    0x00000000
#define _RPB4R_RPB4R_MASK                        0x0000000F
#define _RPB4R_RPB4R_LENGTH                      0x00000004

#define _RPB5R_RPB5R_POSITION                    0x00000000
#define _RPB5R_RPB5R_MASK                        0x0000000F
#define _RPB5R_RPB5R_LENGTH                      0x00000004

#define _RPB6R_RPB6R_POSITION                    0x00000000
#define _RPB6R_RPB6R_MASK                        0x0000000F
#define _RPB6R_RPB6R_LENGTH                      0x00000004

#define _RPB7R_RPB7R_POSITION                    0x00000000
#define _RPB7R_RPB7R_MASK                        0x0000000F
#define _RPB7R_RPB7R_LENGTH                      0x00000004

#define _RPB8R_RPB8R_POSITION                    0x00000000
#define _RPB8R_RPB8R_MASK                        0x0000000F
#define _RPB8R_RPB8R_LENGTH                      0x00000004

#define _RPB9R_RPB9R_POSITION                    0x00000000
#define _RPB9R_RPB9R_MASK                        0x0000000F
#define _RPB9R_RPB9R_LENGTH                      0x00000004

#define _RPB10R_RPB10R_POSITION                  0x00000000
#define _RPB10R_RPB10R_MASK                      0x0000000F
#define _RPB10R_RPB10R_LENGTH                    0x00000004

#define _RPB11R_RPB11R_POSITION                  0x00000000
#define _RPB11R_RPB11R_MASK                      0x0000000F
#define _RPB11R_RPB11R_LENGTH                    0x00000004

#define _RPB12R_RPB12R_POSITION                  0x00000000
#define _RPB12R_RPB12R_MASK                      0x0000000F
#define _RPB12R_RPB12R_LENGTH                    0x00000004

#define _RPB13R_RPB13R_POSITION                  0x00000000
#define _RPB13R_RPB13R_MASK                      0x0000000F
#define _RPB13R_RPB13R_LENGTH                    0x00000004

#define _RPB14R_RPB14R_POSITION                  0x00000000
#define _RPB14R_RPB14R_MASK                      0x0000000F
#define _RPB14R_RPB14R_LENGTH                    0x00000004

#define _RPB15R_RPB15R_POSITION                  0x00000000
#define _RPB15R_RPB15R_MASK                      0x0000000F
#define _RPB15R_RPB15R_LENGTH                    0x00000004

#define _RPC1R_RPC1R_POSITION                    0x00000000
#define _RPC1R_RPC1R_MASK                        0x0000000F
#define _RPC1R_RPC1R_LENGTH                      0x00000004

#define _RPC2R_RPC2R_POSITION                    0x00000000
#define _RPC2R_RPC2R_MASK                        0x0000000F
#define _RPC2R_RPC2R_LENGTH                      0x00000004

#define _RPC3R_RPC3R_POSITION                    0x00000000
#define _RPC3R_RPC3R_MASK                        0x0000000F
#define _RPC3R_RPC3R_LENGTH                      0x00000004

#define _RPC4R_RPC4R_POSITION                    0x00000000
#define _RPC4R_RPC4R_MASK                        0x0000000F
#define _RPC4R_RPC4R_LENGTH                      0x00000004

#define _RPC13R_RPC13R_POSITION                  0x00000000
#define _RPC13R_RPC13R_MASK                      0x0000000F
#define _RPC13R_RPC13R_LENGTH                    0x00000004

#define _RPC14R_RPC14R_POSITION                  0x00000000
#define _RPC14R_RPC14R_MASK                      0x0000000F
#define _RPC14R_RPC14R_LENGTH                    0x00000004

#define _RPD0R_RPD0R_POSITION                    0x00000000
#define _RPD0R_RPD0R_MASK                        0x0000000F
#define _RPD0R_RPD0R_LENGTH                      0x00000004

#define _RPD1R_RPD1R_POSITION                    0x00000000
#define _RPD1R_RPD1R_MASK                        0x0000000F
#define _RPD1R_RPD1R_LENGTH                      0x00000004

#define _RPD2R_RPD2R_POSITION                    0x00000000
#define _RPD2R_RPD2R_MASK                        0x0000000F
#define _RPD2R_RPD2R_LENGTH                      0x00000004

#define _RPD3R_RPD3R_POSITION                    0x00000000
#define _RPD3R_RPD3R_MASK                        0x0000000F
#define _RPD3R_RPD3R_LENGTH                      0x00000004

#define _RPD4R_RPD4R_POSITION                    0x00000000
#define _RPD4R_RPD4R_MASK                        0x0000000F
#define _RPD4R_RPD4R_LENGTH                      0x00000004

#define _RPD5R_RPD5R_POSITION                    0x00000000
#define _RPD5R_RPD5R_MASK                        0x0000000F
#define _RPD5R_RPD5R_LENGTH                      0x00000004

#define _RPD8R_RPD8R_POSITION                    0x00000000
#define _RPD8R_RPD8R_MASK                        0x0000000F
#define _RPD8R_RPD8R_LENGTH                      0x00000004

#define _RPD9R_RPD9R_POSITION                    0x00000000
#define _RPD9R_RPD9R_MASK                        0x0000000F
#define _RPD9R_RPD9R_LENGTH                      0x00000004

#define _RPD10R_RPD10R_POSITION                  0x00000000
#define _RPD10R_RPD10R_MASK                      0x0000000F
#define _RPD10R_RPD10R_LENGTH                    0x00000004

#define _RPD11R_RPD11R_POSITION                  0x00000000
#define _RPD11R_RPD11R_MASK                      0x0000000F
#define _RPD11R_RPD11R_LENGTH                    0x00000004

#define _RPD12R_RPD12R_POSITION                  0x00000000
#define _RPD12R_RPD12R_MASK                      0x0000000F
#define _RPD12R_RPD12R_LENGTH                    0x00000004

#define _RPD14R_RPD14R_POSITION                  0x00000000
#define _RPD14R_RPD14R_MASK                      0x0000000F
#define _RPD14R_RPD14R_LENGTH                    0x00000004

#define _RPE3R_RPE3R_POSITION                    0x00000000
#define _RPE3R_RPE3R_MASK                        0x0000000F
#define _RPE3R_RPE3R_LENGTH                      0x00000004

#define _RPE5R_RPE5R_POSITION                    0x00000000
#define _RPE5R_RPE5R_MASK                        0x0000000F
#define _RPE5R_RPE5R_LENGTH                      0x00000004

#define _RPE8R_RPE8R_POSITION                    0x00000000
#define _RPE8R_RPE8R_MASK                        0x0000000F
#define _RPE8R_RPE8R_LENGTH                      0x00000004

#define _RPE9R_RPE9R_POSITION                    0x00000000
#define _RPE9R_RPE9R_MASK                        0x0000000F
#define _RPE9R_RPE9R_LENGTH                      0x00000004

#define _RPF0R_RPF0R_POSITION                    0x00000000
#define _RPF0R_RPF0R_MASK                        0x0000000F
#define _RPF0R_RPF0R_LENGTH                      0x00000004

#define _RPF1R_RPF1R_POSITION                    0x00000000
#define _RPF1R_RPF1R_MASK                        0x0000000F
#define _RPF1R_RPF1R_LENGTH                      0x00000004

#define _RPF2R_RPF2R_POSITION                    0x00000000
#define _RPF2R_RPF2R_MASK                        0x0000000F
#define _RPF2R_RPF2R_LENGTH                      0x00000004

#define _RPF3R_RPF3R_POSITION                    0x00000000
#define _RPF3R_RPF3R_MASK                        0x0000000F
#define _RPF3R_RPF3R_LENGTH                      0x00000004

#define _RPF4R_RPF4R_POSITION                    0x00000000
#define _RPF4R_RPF4R_MASK                        0x0000000F
#define _RPF4R_RPF4R_LENGTH                      0x00000004

#define _RPF5R_RPF5R_POSITION                    0x00000000
#define _RPF5R_RPF5R_MASK                        0x0000000F
#define _RPF5R_RPF5R_LENGTH                      0x00000004

#define _RPF6R_RPF6R_POSITION                    0x00000000
#define _RPF6R_RPF6R_MASK                        0x0000000F
#define _RPF6R_RPF6R_LENGTH                      0x00000004

#define _RPF7R_RPF7R_POSITION                    0x00000000
#define _RPF7R_RPF7R_MASK                        0x0000000F
#define _RPF7R_RPF7R_LENGTH                      0x00000004

#define _RPF8R_RPF8R_POSITION                    0x00000000
#define _RPF8R_RPF8R_MASK                        0x0000000F
#define _RPF8R_RPF8R_LENGTH                      0x00000004

#define _RPF12R_RPF12R_POSITION                  0x00000000
#define _RPF12R_RPF12R_MASK                      0x0000000F
#define _RPF12R_RPF12R_LENGTH                    0x00000004

#define _RPF13R_RPF13R_POSITION                  0x00000000
#define _RPF13R_RPF13R_MASK                      0x0000000F
#define _RPF13R_RPF13R_LENGTH                    0x00000004

#define _RPG0R_RPG0R_POSITION                    0x00000000
#define _RPG0R_RPG0R_MASK                        0x0000000F
#define _RPG0R_RPG0R_LENGTH                      0x00000004

#define _RPG1R_RPG1R_POSITION                    0x00000000
#define _RPG1R_RPG1R_MASK                        0x0000000F
#define _RPG1R_RPG1R_LENGTH                      0x00000004

#define _RPG6R_RPG6R_POSITION                    0x00000000
#define _RPG6R_RPG6R_MASK                        0x0000000F
#define _RPG6R_RPG6R_LENGTH                      0x00000004

#define _RPG7R_RPG7R_POSITION                    0x00000000
#define _RPG7R_RPG7R_MASK                        0x0000000F
#define _RPG7R_RPG7R_LENGTH                      0x00000004

#define _RPG8R_RPG8R_POSITION                    0x00000000
#define _RPG8R_RPG8R_MASK                        0x0000000F
#define _RPG8R_RPG8R_LENGTH                      0x00000004

#define _RPG9R_RPG9R_POSITION                    0x00000000
#define _RPG9R_RPG9R_MASK                        0x0000000F
#define _RPG9R_RPG9R_LENGTH                      0x00000004

#define _INTCON_INT0EP_POSITION                  0x00000000
#define _INTCON_INT0EP_MASK                      0x00000001
#define _INTCON_INT0EP_LENGTH                    0x00000001

#define _INTCON_INT1EP_POSITION                  0x00000001
#define _INTCON_INT1EP_MASK                      0x00000002
#define _INTCON_INT1EP_LENGTH                    0x00000001

#define _INTCON_INT2EP_POSITION                  0x00000002
#define _INTCON_INT2EP_MASK                      0x00000004
#define _INTCON_INT2EP_LENGTH                    0x00000001

#define _INTCON_INT3EP_POSITION                  0x00000003
#define _INTCON_INT3EP_MASK                      0x00000008
#define _INTCON_INT3EP_LENGTH                    0x00000001

#define _INTCON_INT4EP_POSITION                  0x00000004
#define _INTCON_INT4EP_MASK                      0x00000010
#define _INTCON_INT4EP_LENGTH                    0x00000001

#define _INTCON_TPC_POSITION                     0x00000008
#define _INTCON_TPC_MASK                         0x00000700
#define _INTCON_TPC_LENGTH                       0x00000003

#define _INTCON_MVEC_POSITION                    0x0000000C
#define _INTCON_MVEC_MASK                        0x00001000
#define _INTCON_MVEC_LENGTH                      0x00000001

#define _INTCON_SS0_POSITION                     0x00000010
#define _INTCON_SS0_MASK                         0x00010000
#define _INTCON_SS0_LENGTH                       0x00000001

#define _INTCON_w_POSITION                       0x00000000
#define _INTCON_w_MASK                           0xFFFFFFFF
#define _INTCON_w_LENGTH                         0x00000020

#define _INTSTAT_VEC_POSITION                    0x00000000
#define _INTSTAT_VEC_MASK                        0x0000003F
#define _INTSTAT_VEC_LENGTH                      0x00000006

#define _INTSTAT_SRIPL_POSITION                  0x00000008
#define _INTSTAT_SRIPL_MASK                      0x00000700
#define _INTSTAT_SRIPL_LENGTH                    0x00000003

#define _IFS0_CTIF_POSITION                      0x00000000
#define _IFS0_CTIF_MASK                          0x00000001
#define _IFS0_CTIF_LENGTH                        0x00000001

#define _IFS0_CS0IF_POSITION                     0x00000001
#define _IFS0_CS0IF_MASK                         0x00000002
#define _IFS0_CS0IF_LENGTH                       0x00000001

#define _IFS0_CS1IF_POSITION                     0x00000002
#define _IFS0_CS1IF_MASK                         0x00000004
#define _IFS0_CS1IF_LENGTH                       0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000003
#define _IFS0_INT0IF_MASK                        0x00000008
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000004
#define _IFS0_T1IF_MASK                          0x00000010
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_IC1EIF_POSITION                    0x00000005
#define _IFS0_IC1EIF_MASK                        0x00000020
#define _IFS0_IC1EIF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000006
#define _IFS0_IC1IF_MASK                         0x00000040
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000007
#define _IFS0_OC1IF_MASK                         0x00000080
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000008
#define _IFS0_INT1IF_MASK                        0x00000100
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_T2IF_POSITION                      0x00000009
#define _IFS0_T2IF_MASK                          0x00000200
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_IC2EIF_POSITION                    0x0000000A
#define _IFS0_IC2EIF_MASK                        0x00000400
#define _IFS0_IC2EIF_LENGTH                      0x00000001

#define _IFS0_IC2IF_POSITION                     0x0000000B
#define _IFS0_IC2IF_MASK                         0x00000800
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x0000000C
#define _IFS0_OC2IF_MASK                         0x00001000
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_INT2IF_POSITION                    0x0000000D
#define _IFS0_INT2IF_MASK                        0x00002000
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_T3IF_POSITION                      0x0000000E
#define _IFS0_T3IF_MASK                          0x00004000
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_IC3EIF_POSITION                    0x0000000F
#define _IFS0_IC3EIF_MASK                        0x00008000
#define _IFS0_IC3EIF_LENGTH                      0x00000001

#define _IFS0_IC3IF_POSITION                     0x00000010
#define _IFS0_IC3IF_MASK                         0x00010000
#define _IFS0_IC3IF_LENGTH                       0x00000001

#define _IFS0_OC3IF_POSITION                     0x00000011
#define _IFS0_OC3IF_MASK                         0x00020000
#define _IFS0_OC3IF_LENGTH                       0x00000001

#define _IFS0_INT3IF_POSITION                    0x00000012
#define _IFS0_INT3IF_MASK                        0x00040000
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_T4IF_POSITION                      0x00000013
#define _IFS0_T4IF_MASK                          0x00080000
#define _IFS0_T4IF_LENGTH                        0x00000001

#define _IFS0_IC4EIF_POSITION                    0x00000014
#define _IFS0_IC4EIF_MASK                        0x00100000
#define _IFS0_IC4EIF_LENGTH                      0x00000001

#define _IFS0_IC4IF_POSITION                     0x00000015
#define _IFS0_IC4IF_MASK                         0x00200000
#define _IFS0_IC4IF_LENGTH                       0x00000001

#define _IFS0_OC4IF_POSITION                     0x00000016
#define _IFS0_OC4IF_MASK                         0x00400000
#define _IFS0_OC4IF_LENGTH                       0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000017
#define _IFS0_INT4IF_MASK                        0x00800000
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_T5IF_POSITION                      0x00000018
#define _IFS0_T5IF_MASK                          0x01000000
#define _IFS0_T5IF_LENGTH                        0x00000001

#define _IFS0_IC5EIF_POSITION                    0x00000019
#define _IFS0_IC5EIF_MASK                        0x02000000
#define _IFS0_IC5EIF_LENGTH                      0x00000001

#define _IFS0_IC5IF_POSITION                     0x0000001A
#define _IFS0_IC5IF_MASK                         0x04000000
#define _IFS0_IC5IF_LENGTH                       0x00000001

#define _IFS0_OC5IF_POSITION                     0x0000001B
#define _IFS0_OC5IF_MASK                         0x08000000
#define _IFS0_OC5IF_LENGTH                       0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000001C
#define _IFS0_AD1IF_MASK                         0x10000000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_FSCMIF_POSITION                    0x0000001D
#define _IFS0_FSCMIF_MASK                        0x20000000
#define _IFS0_FSCMIF_LENGTH                      0x00000001

#define _IFS0_RTCCIF_POSITION                    0x0000001E
#define _IFS0_RTCCIF_MASK                        0x40000000
#define _IFS0_RTCCIF_LENGTH                      0x00000001

#define _IFS0_FCEIF_POSITION                     0x0000001F
#define _IFS0_FCEIF_MASK                         0x80000000
#define _IFS0_FCEIF_LENGTH                       0x00000001

#define _IFS0_w_POSITION                         0x00000000
#define _IFS0_w_MASK                             0xFFFFFFFF
#define _IFS0_w_LENGTH                           0x00000020

#define _IFS1_CMP1IF_POSITION                    0x00000000
#define _IFS1_CMP1IF_MASK                        0x00000001
#define _IFS1_CMP1IF_LENGTH                      0x00000001

#define _IFS1_CMP2IF_POSITION                    0x00000001
#define _IFS1_CMP2IF_MASK                        0x00000002
#define _IFS1_CMP2IF_LENGTH                      0x00000001

#define _IFS1_SPI1EIF_POSITION                   0x00000003
#define _IFS1_SPI1EIF_MASK                       0x00000008
#define _IFS1_SPI1EIF_LENGTH                     0x00000001

#define _IFS1_SPI1RXIF_POSITION                  0x00000004
#define _IFS1_SPI1RXIF_MASK                      0x00000010
#define _IFS1_SPI1RXIF_LENGTH                    0x00000001

#define _IFS1_SPI1TXIF_POSITION                  0x00000005
#define _IFS1_SPI1TXIF_MASK                      0x00000020
#define _IFS1_SPI1TXIF_LENGTH                    0x00000001

#define _IFS1_U1EIF_POSITION                     0x00000006
#define _IFS1_U1EIF_MASK                         0x00000040
#define _IFS1_U1EIF_LENGTH                       0x00000001

#define _IFS1_U1RXIF_POSITION                    0x00000007
#define _IFS1_U1RXIF_MASK                        0x00000080
#define _IFS1_U1RXIF_LENGTH                      0x00000001

#define _IFS1_U1TXIF_POSITION                    0x00000008
#define _IFS1_U1TXIF_MASK                        0x00000100
#define _IFS1_U1TXIF_LENGTH                      0x00000001

#define _IFS1_I2C1BIF_POSITION                   0x00000009
#define _IFS1_I2C1BIF_MASK                       0x00000200
#define _IFS1_I2C1BIF_LENGTH                     0x00000001

#define _IFS1_I2C1SIF_POSITION                   0x0000000A
#define _IFS1_I2C1SIF_MASK                       0x00000400
#define _IFS1_I2C1SIF_LENGTH                     0x00000001

#define _IFS1_I2C1MIF_POSITION                   0x0000000B
#define _IFS1_I2C1MIF_MASK                       0x00000800
#define _IFS1_I2C1MIF_LENGTH                     0x00000001

#define _IFS1_CNAIF_POSITION                     0x0000000C
#define _IFS1_CNAIF_MASK                         0x00001000
#define _IFS1_CNAIF_LENGTH                       0x00000001

#define _IFS1_CNBIF_POSITION                     0x0000000D
#define _IFS1_CNBIF_MASK                         0x00002000
#define _IFS1_CNBIF_LENGTH                       0x00000001

#define _IFS1_CNCIF_POSITION                     0x0000000E
#define _IFS1_CNCIF_MASK                         0x00004000
#define _IFS1_CNCIF_LENGTH                       0x00000001

#define _IFS1_CNDIF_POSITION                     0x0000000F
#define _IFS1_CNDIF_MASK                         0x00008000
#define _IFS1_CNDIF_LENGTH                       0x00000001

#define _IFS1_CNEIF_POSITION                     0x00000010
#define _IFS1_CNEIF_MASK                         0x00010000
#define _IFS1_CNEIF_LENGTH                       0x00000001

#define _IFS1_CNFIF_POSITION                     0x00000011
#define _IFS1_CNFIF_MASK                         0x00020000
#define _IFS1_CNFIF_LENGTH                       0x00000001

#define _IFS1_CNGIF_POSITION                     0x00000012
#define _IFS1_CNGIF_MASK                         0x00040000
#define _IFS1_CNGIF_LENGTH                       0x00000001

#define _IFS1_PMPIF_POSITION                     0x00000013
#define _IFS1_PMPIF_MASK                         0x00080000
#define _IFS1_PMPIF_LENGTH                       0x00000001

#define _IFS1_PMPEIF_POSITION                    0x00000014
#define _IFS1_PMPEIF_MASK                        0x00100000
#define _IFS1_PMPEIF_LENGTH                      0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x00000015
#define _IFS1_SPI2EIF_MASK                       0x00200000
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000016
#define _IFS1_SPI2RXIF_MASK                      0x00400000
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000017
#define _IFS1_SPI2TXIF_MASK                      0x00800000
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_U2EIF_POSITION                     0x00000018
#define _IFS1_U2EIF_MASK                         0x01000000
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000019
#define _IFS1_U2RXIF_MASK                        0x02000000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000001A
#define _IFS1_U2TXIF_MASK                        0x04000000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_I2C2BIF_POSITION                   0x0000001B
#define _IFS1_I2C2BIF_MASK                       0x08000000
#define _IFS1_I2C2BIF_LENGTH                     0x00000001

#define _IFS1_I2C2SIF_POSITION                   0x0000001C
#define _IFS1_I2C2SIF_MASK                       0x10000000
#define _IFS1_I2C2SIF_LENGTH                     0x00000001

#define _IFS1_I2C2MIF_POSITION                   0x0000001D
#define _IFS1_I2C2MIF_MASK                       0x20000000
#define _IFS1_I2C2MIF_LENGTH                     0x00000001

#define _IFS1_U3EIF_POSITION                     0x0000001E
#define _IFS1_U3EIF_MASK                         0x40000000
#define _IFS1_U3EIF_LENGTH                       0x00000001

#define _IFS1_U3RXIF_POSITION                    0x0000001F
#define _IFS1_U3RXIF_MASK                        0x80000000
#define _IFS1_U3RXIF_LENGTH                      0x00000001

#define _IFS1_w_POSITION                         0x00000000
#define _IFS1_w_MASK                             0xFFFFFFFF
#define _IFS1_w_LENGTH                           0x00000020

#define _IFS2_U3TXIF_POSITION                    0x00000000
#define _IFS2_U3TXIF_MASK                        0x00000001
#define _IFS2_U3TXIF_LENGTH                      0x00000001

#define _IFS2_U4EIF_POSITION                     0x00000001
#define _IFS2_U4EIF_MASK                         0x00000002
#define _IFS2_U4EIF_LENGTH                       0x00000001

#define _IFS2_U4RXIF_POSITION                    0x00000002
#define _IFS2_U4RXIF_MASK                        0x00000004
#define _IFS2_U4RXIF_LENGTH                      0x00000001

#define _IFS2_U4TXIF_POSITION                    0x00000003
#define _IFS2_U4TXIF_MASK                        0x00000008
#define _IFS2_U4TXIF_LENGTH                      0x00000001

#define _IFS2_U5EIF_POSITION                     0x00000004
#define _IFS2_U5EIF_MASK                         0x00000010
#define _IFS2_U5EIF_LENGTH                       0x00000001

#define _IFS2_U5RXIF_POSITION                    0x00000005
#define _IFS2_U5RXIF_MASK                        0x00000020
#define _IFS2_U5RXIF_LENGTH                      0x00000001

#define _IFS2_U5TXIF_POSITION                    0x00000006
#define _IFS2_U5TXIF_MASK                        0x00000040
#define _IFS2_U5TXIF_LENGTH                      0x00000001

#define _IFS2_CTMUIF_POSITION                    0x00000007
#define _IFS2_CTMUIF_MASK                        0x00000080
#define _IFS2_CTMUIF_LENGTH                      0x00000001

#define _IFS2_DMA0IF_POSITION                    0x00000008
#define _IFS2_DMA0IF_MASK                        0x00000100
#define _IFS2_DMA0IF_LENGTH                      0x00000001

#define _IFS2_DMA1IF_POSITION                    0x00000009
#define _IFS2_DMA1IF_MASK                        0x00000200
#define _IFS2_DMA1IF_LENGTH                      0x00000001

#define _IFS2_DMA2IF_POSITION                    0x0000000A
#define _IFS2_DMA2IF_MASK                        0x00000400
#define _IFS2_DMA2IF_LENGTH                      0x00000001

#define _IFS2_DMA3IF_POSITION                    0x0000000B
#define _IFS2_DMA3IF_MASK                        0x00000800
#define _IFS2_DMA3IF_LENGTH                      0x00000001

#define _IEC0_CTIE_POSITION                      0x00000000
#define _IEC0_CTIE_MASK                          0x00000001
#define _IEC0_CTIE_LENGTH                        0x00000001

#define _IEC0_CS0IE_POSITION                     0x00000001
#define _IEC0_CS0IE_MASK                         0x00000002
#define _IEC0_CS0IE_LENGTH                       0x00000001

#define _IEC0_CS1IE_POSITION                     0x00000002
#define _IEC0_CS1IE_MASK                         0x00000004
#define _IEC0_CS1IE_LENGTH                       0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000003
#define _IEC0_INT0IE_MASK                        0x00000008
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000004
#define _IEC0_T1IE_MASK                          0x00000010
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_IC1EIE_POSITION                    0x00000005
#define _IEC0_IC1EIE_MASK                        0x00000020
#define _IEC0_IC1EIE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000006
#define _IEC0_IC1IE_MASK                         0x00000040
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000007
#define _IEC0_OC1IE_MASK                         0x00000080
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000008
#define _IEC0_INT1IE_MASK                        0x00000100
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_T2IE_POSITION                      0x00000009
#define _IEC0_T2IE_MASK                          0x00000200
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_IC2EIE_POSITION                    0x0000000A
#define _IEC0_IC2EIE_MASK                        0x00000400
#define _IEC0_IC2EIE_LENGTH                      0x00000001

#define _IEC0_IC2IE_POSITION                     0x0000000B
#define _IEC0_IC2IE_MASK                         0x00000800
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x0000000C
#define _IEC0_OC2IE_MASK                         0x00001000
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_INT2IE_POSITION                    0x0000000D
#define _IEC0_INT2IE_MASK                        0x00002000
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_T3IE_POSITION                      0x0000000E
#define _IEC0_T3IE_MASK                          0x00004000
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_IC3EIE_POSITION                    0x0000000F
#define _IEC0_IC3EIE_MASK                        0x00008000
#define _IEC0_IC3EIE_LENGTH                      0x00000001

#define _IEC0_IC3IE_POSITION                     0x00000010
#define _IEC0_IC3IE_MASK                         0x00010000
#define _IEC0_IC3IE_LENGTH                       0x00000001

#define _IEC0_OC3IE_POSITION                     0x00000011
#define _IEC0_OC3IE_MASK                         0x00020000
#define _IEC0_OC3IE_LENGTH                       0x00000001

#define _IEC0_INT3IE_POSITION                    0x00000012
#define _IEC0_INT3IE_MASK                        0x00040000
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_T4IE_POSITION                      0x00000013
#define _IEC0_T4IE_MASK                          0x00080000
#define _IEC0_T4IE_LENGTH                        0x00000001

#define _IEC0_IC4EIE_POSITION                    0x00000014
#define _IEC0_IC4EIE_MASK                        0x00100000
#define _IEC0_IC4EIE_LENGTH                      0x00000001

#define _IEC0_IC4IE_POSITION                     0x00000015
#define _IEC0_IC4IE_MASK                         0x00200000
#define _IEC0_IC4IE_LENGTH                       0x00000001

#define _IEC0_OC4IE_POSITION                     0x00000016
#define _IEC0_OC4IE_MASK                         0x00400000
#define _IEC0_OC4IE_LENGTH                       0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000017
#define _IEC0_INT4IE_MASK                        0x00800000
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_T5IE_POSITION                      0x00000018
#define _IEC0_T5IE_MASK                          0x01000000
#define _IEC0_T5IE_LENGTH                        0x00000001

#define _IEC0_IC5EIE_POSITION                    0x00000019
#define _IEC0_IC5EIE_MASK                        0x02000000
#define _IEC0_IC5EIE_LENGTH                      0x00000001

#define _IEC0_IC5IE_POSITION                     0x0000001A
#define _IEC0_IC5IE_MASK                         0x04000000
#define _IEC0_IC5IE_LENGTH                       0x00000001

#define _IEC0_OC5IE_POSITION                     0x0000001B
#define _IEC0_OC5IE_MASK                         0x08000000
#define _IEC0_OC5IE_LENGTH                       0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000001C
#define _IEC0_AD1IE_MASK                         0x10000000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_FSCMIE_POSITION                    0x0000001D
#define _IEC0_FSCMIE_MASK                        0x20000000
#define _IEC0_FSCMIE_LENGTH                      0x00000001

#define _IEC0_RTCCIE_POSITION                    0x0000001E
#define _IEC0_RTCCIE_MASK                        0x40000000
#define _IEC0_RTCCIE_LENGTH                      0x00000001

#define _IEC0_FCEIE_POSITION                     0x0000001F
#define _IEC0_FCEIE_MASK                         0x80000000
#define _IEC0_FCEIE_LENGTH                       0x00000001

#define _IEC0_w_POSITION                         0x00000000
#define _IEC0_w_MASK                             0xFFFFFFFF
#define _IEC0_w_LENGTH                           0x00000020

#define _IEC1_CMP1IE_POSITION                    0x00000000
#define _IEC1_CMP1IE_MASK                        0x00000001
#define _IEC1_CMP1IE_LENGTH                      0x00000001

#define _IEC1_CMP2IE_POSITION                    0x00000001
#define _IEC1_CMP2IE_MASK                        0x00000002
#define _IEC1_CMP2IE_LENGTH                      0x00000001

#define _IEC1_SPI1EIE_POSITION                   0x00000003
#define _IEC1_SPI1EIE_MASK                       0x00000008
#define _IEC1_SPI1EIE_LENGTH                     0x00000001

#define _IEC1_SPI1RXIE_POSITION                  0x00000004
#define _IEC1_SPI1RXIE_MASK                      0x00000010
#define _IEC1_SPI1RXIE_LENGTH                    0x00000001

#define _IEC1_SPI1TXIE_POSITION                  0x00000005
#define _IEC1_SPI1TXIE_MASK                      0x00000020
#define _IEC1_SPI1TXIE_LENGTH                    0x00000001

#define _IEC1_U1EIE_POSITION                     0x00000006
#define _IEC1_U1EIE_MASK                         0x00000040
#define _IEC1_U1EIE_LENGTH                       0x00000001

#define _IEC1_U1RXIE_POSITION                    0x00000007
#define _IEC1_U1RXIE_MASK                        0x00000080
#define _IEC1_U1RXIE_LENGTH                      0x00000001

#define _IEC1_U1TXIE_POSITION                    0x00000008
#define _IEC1_U1TXIE_MASK                        0x00000100
#define _IEC1_U1TXIE_LENGTH                      0x00000001

#define _IEC1_I2C1BIE_POSITION                   0x00000009
#define _IEC1_I2C1BIE_MASK                       0x00000200
#define _IEC1_I2C1BIE_LENGTH                     0x00000001

#define _IEC1_I2C1SIE_POSITION                   0x0000000A
#define _IEC1_I2C1SIE_MASK                       0x00000400
#define _IEC1_I2C1SIE_LENGTH                     0x00000001

#define _IEC1_I2C1MIE_POSITION                   0x0000000B
#define _IEC1_I2C1MIE_MASK                       0x00000800
#define _IEC1_I2C1MIE_LENGTH                     0x00000001

#define _IEC1_CNAIE_POSITION                     0x0000000C
#define _IEC1_CNAIE_MASK                         0x00001000
#define _IEC1_CNAIE_LENGTH                       0x00000001

#define _IEC1_CNBIE_POSITION                     0x0000000D
#define _IEC1_CNBIE_MASK                         0x00002000
#define _IEC1_CNBIE_LENGTH                       0x00000001

#define _IEC1_CNCIE_POSITION                     0x0000000E
#define _IEC1_CNCIE_MASK                         0x00004000
#define _IEC1_CNCIE_LENGTH                       0x00000001

#define _IEC1_CNDIE_POSITION                     0x0000000F
#define _IEC1_CNDIE_MASK                         0x00008000
#define _IEC1_CNDIE_LENGTH                       0x00000001

#define _IEC1_CNEIE_POSITION                     0x00000010
#define _IEC1_CNEIE_MASK                         0x00010000
#define _IEC1_CNEIE_LENGTH                       0x00000001

#define _IEC1_CNFIE_POSITION                     0x00000011
#define _IEC1_CNFIE_MASK                         0x00020000
#define _IEC1_CNFIE_LENGTH                       0x00000001

#define _IEC1_CNGIE_POSITION                     0x00000012
#define _IEC1_CNGIE_MASK                         0x00040000
#define _IEC1_CNGIE_LENGTH                       0x00000001

#define _IEC1_PMPIE_POSITION                     0x00000013
#define _IEC1_PMPIE_MASK                         0x00080000
#define _IEC1_PMPIE_LENGTH                       0x00000001

#define _IEC1_PMPEIE_POSITION                    0x00000014
#define _IEC1_PMPEIE_MASK                        0x00100000
#define _IEC1_PMPEIE_LENGTH                      0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x00000015
#define _IEC1_SPI2EIE_MASK                       0x00200000
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000016
#define _IEC1_SPI2RXIE_MASK                      0x00400000
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000017
#define _IEC1_SPI2TXIE_MASK                      0x00800000
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_U2EIE_POSITION                     0x00000018
#define _IEC1_U2EIE_MASK                         0x01000000
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000019
#define _IEC1_U2RXIE_MASK                        0x02000000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000001A
#define _IEC1_U2TXIE_MASK                        0x04000000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_I2C2BIE_POSITION                   0x0000001B
#define _IEC1_I2C2BIE_MASK                       0x08000000
#define _IEC1_I2C2BIE_LENGTH                     0x00000001

#define _IEC1_I2C2SIE_POSITION                   0x0000001C
#define _IEC1_I2C2SIE_MASK                       0x10000000
#define _IEC1_I2C2SIE_LENGTH                     0x00000001

#define _IEC1_I2CMIE_POSITION                    0x0000001D
#define _IEC1_I2CMIE_MASK                        0x20000000
#define _IEC1_I2CMIE_LENGTH                      0x00000001

#define _IEC1_U3EIE_POSITION                     0x0000001E
#define _IEC1_U3EIE_MASK                         0x40000000
#define _IEC1_U3EIE_LENGTH                       0x00000001

#define _IEC1_U3RXIE_POSITION                    0x0000001F
#define _IEC1_U3RXIE_MASK                        0x80000000
#define _IEC1_U3RXIE_LENGTH                      0x00000001

#define _IEC1_w_POSITION                         0x00000000
#define _IEC1_w_MASK                             0xFFFFFFFF
#define _IEC1_w_LENGTH                           0x00000020

#define _IEC2_U3TXIE_POSITION                    0x00000000
#define _IEC2_U3TXIE_MASK                        0x00000001
#define _IEC2_U3TXIE_LENGTH                      0x00000001

#define _IEC2_U4EIE_POSITION                     0x00000001
#define _IEC2_U4EIE_MASK                         0x00000002
#define _IEC2_U4EIE_LENGTH                       0x00000001

#define _IEC2_U4RXIE_POSITION                    0x00000002
#define _IEC2_U4RXIE_MASK                        0x00000004
#define _IEC2_U4RXIE_LENGTH                      0x00000001

#define _IEC2_U4TXIE_POSITION                    0x00000003
#define _IEC2_U4TXIE_MASK                        0x00000008
#define _IEC2_U4TXIE_LENGTH                      0x00000001

#define _IEC2_U5EIE_POSITION                     0x00000004
#define _IEC2_U5EIE_MASK                         0x00000010
#define _IEC2_U5EIE_LENGTH                       0x00000001

#define _IEC2_U5RXIE_POSITION                    0x00000005
#define _IEC2_U5RXIE_MASK                        0x00000020
#define _IEC2_U5RXIE_LENGTH                      0x00000001

#define _IEC2_U5TXIE_POSITION                    0x00000006
#define _IEC2_U5TXIE_MASK                        0x00000040
#define _IEC2_U5TXIE_LENGTH                      0x00000001

#define _IEC2_CTMUIE_POSITION                    0x00000007
#define _IEC2_CTMUIE_MASK                        0x00000080
#define _IEC2_CTMUIE_LENGTH                      0x00000001

#define _IEC2_DMA0IE_POSITION                    0x00000008
#define _IEC2_DMA0IE_MASK                        0x00000100
#define _IEC2_DMA0IE_LENGTH                      0x00000001

#define _IEC2_DMA1IE_POSITION                    0x00000009
#define _IEC2_DMA1IE_MASK                        0x00000200
#define _IEC2_DMA1IE_LENGTH                      0x00000001

#define _IEC2_DMA2IE_POSITION                    0x0000000A
#define _IEC2_DMA2IE_MASK                        0x00000400
#define _IEC2_DMA2IE_LENGTH                      0x00000001

#define _IEC2_DMA3IE_POSITION                    0x0000000B
#define _IEC2_DMA3IE_MASK                        0x00000800
#define _IEC2_DMA3IE_LENGTH                      0x00000001

#define _IPC0_CTIS_POSITION                      0x00000000
#define _IPC0_CTIS_MASK                          0x00000003
#define _IPC0_CTIS_LENGTH                        0x00000002

#define _IPC0_CTIP_POSITION                      0x00000002
#define _IPC0_CTIP_MASK                          0x0000001C
#define _IPC0_CTIP_LENGTH                        0x00000003

#define _IPC0_CS0IS_POSITION                     0x00000008
#define _IPC0_CS0IS_MASK                         0x00000300
#define _IPC0_CS0IS_LENGTH                       0x00000002

#define _IPC0_CS0IP_POSITION                     0x0000000A
#define _IPC0_CS0IP_MASK                         0x00001C00
#define _IPC0_CS0IP_LENGTH                       0x00000003

#define _IPC0_CS1IS_POSITION                     0x00000010
#define _IPC0_CS1IS_MASK                         0x00030000
#define _IPC0_CS1IS_LENGTH                       0x00000002

#define _IPC0_CS1IP_POSITION                     0x00000012
#define _IPC0_CS1IP_MASK                         0x001C0000
#define _IPC0_CS1IP_LENGTH                       0x00000003

#define _IPC0_INT0IS_POSITION                    0x00000018
#define _IPC0_INT0IS_MASK                        0x03000000
#define _IPC0_INT0IS_LENGTH                      0x00000002

#define _IPC0_INT0IP_POSITION                    0x0000001A
#define _IPC0_INT0IP_MASK                        0x1C000000
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_w_POSITION                         0x00000000
#define _IPC0_w_MASK                             0xFFFFFFFF
#define _IPC0_w_LENGTH                           0x00000020

#define _IPC1_T1IS_POSITION                      0x00000000
#define _IPC1_T1IS_MASK                          0x00000003
#define _IPC1_T1IS_LENGTH                        0x00000002

#define _IPC1_T1IP_POSITION                      0x00000002
#define _IPC1_T1IP_MASK                          0x0000001C
#define _IPC1_T1IP_LENGTH                        0x00000003

#define _IPC1_IC1IS_POSITION                     0x00000008
#define _IPC1_IC1IS_MASK                         0x00000300
#define _IPC1_IC1IS_LENGTH                       0x00000002

#define _IPC1_IC1IP_POSITION                     0x0000000A
#define _IPC1_IC1IP_MASK                         0x00001C00
#define _IPC1_IC1IP_LENGTH                       0x00000003

#define _IPC1_OC1IS_POSITION                     0x00000010
#define _IPC1_OC1IS_MASK                         0x00030000
#define _IPC1_OC1IS_LENGTH                       0x00000002

#define _IPC1_OC1IP_POSITION                     0x00000012
#define _IPC1_OC1IP_MASK                         0x001C0000
#define _IPC1_OC1IP_LENGTH                       0x00000003

#define _IPC1_INT1IS_POSITION                    0x00000018
#define _IPC1_INT1IS_MASK                        0x03000000
#define _IPC1_INT1IS_LENGTH                      0x00000002

#define _IPC1_INT1IP_POSITION                    0x0000001A
#define _IPC1_INT1IP_MASK                        0x1C000000
#define _IPC1_INT1IP_LENGTH                      0x00000003

#define _IPC1_w_POSITION                         0x00000000
#define _IPC1_w_MASK                             0xFFFFFFFF
#define _IPC1_w_LENGTH                           0x00000020

#define _IPC2_T2IS_POSITION                      0x00000000
#define _IPC2_T2IS_MASK                          0x00000003
#define _IPC2_T2IS_LENGTH                        0x00000002

#define _IPC2_T2IP_POSITION                      0x00000002
#define _IPC2_T2IP_MASK                          0x0000001C
#define _IPC2_T2IP_LENGTH                        0x00000003

#define _IPC2_IC2IS_POSITION                     0x00000008
#define _IPC2_IC2IS_MASK                         0x00000300
#define _IPC2_IC2IS_LENGTH                       0x00000002

#define _IPC2_IC2IP_POSITION                     0x0000000A
#define _IPC2_IC2IP_MASK                         0x00001C00
#define _IPC2_IC2IP_LENGTH                       0x00000003

#define _IPC2_OC2IS_POSITION                     0x00000010
#define _IPC2_OC2IS_MASK                         0x00030000
#define _IPC2_OC2IS_LENGTH                       0x00000002

#define _IPC2_OC2IP_POSITION                     0x00000012
#define _IPC2_OC2IP_MASK                         0x001C0000
#define _IPC2_OC2IP_LENGTH                       0x00000003

#define _IPC2_INT2IS_POSITION                    0x00000018
#define _IPC2_INT2IS_MASK                        0x03000000
#define _IPC2_INT2IS_LENGTH                      0x00000002

#define _IPC2_INT2IP_POSITION                    0x0000001A
#define _IPC2_INT2IP_MASK                        0x1C000000
#define _IPC2_INT2IP_LENGTH                      0x00000003

#define _IPC2_w_POSITION                         0x00000000
#define _IPC2_w_MASK                             0xFFFFFFFF
#define _IPC2_w_LENGTH                           0x00000020

#define _IPC3_T3IS_POSITION                      0x00000000
#define _IPC3_T3IS_MASK                          0x00000003
#define _IPC3_T3IS_LENGTH                        0x00000002

#define _IPC3_T3IP_POSITION                      0x00000002
#define _IPC3_T3IP_MASK                          0x0000001C
#define _IPC3_T3IP_LENGTH                        0x00000003

#define _IPC3_IC3IS_POSITION                     0x00000008
#define _IPC3_IC3IS_MASK                         0x00000300
#define _IPC3_IC3IS_LENGTH                       0x00000002

#define _IPC3_IC3IP_POSITION                     0x0000000A
#define _IPC3_IC3IP_MASK                         0x00001C00
#define _IPC3_IC3IP_LENGTH                       0x00000003

#define _IPC3_OC3IS_POSITION                     0x00000010
#define _IPC3_OC3IS_MASK                         0x00030000
#define _IPC3_OC3IS_LENGTH                       0x00000002

#define _IPC3_OC3IP_POSITION                     0x00000012
#define _IPC3_OC3IP_MASK                         0x001C0000
#define _IPC3_OC3IP_LENGTH                       0x00000003

#define _IPC3_INT3IS_POSITION                    0x00000018
#define _IPC3_INT3IS_MASK                        0x03000000
#define _IPC3_INT3IS_LENGTH                      0x00000002

#define _IPC3_INT3IP_POSITION                    0x0000001A
#define _IPC3_INT3IP_MASK                        0x1C000000
#define _IPC3_INT3IP_LENGTH                      0x00000003

#define _IPC3_w_POSITION                         0x00000000
#define _IPC3_w_MASK                             0xFFFFFFFF
#define _IPC3_w_LENGTH                           0x00000020

#define _IPC4_T4IS_POSITION                      0x00000000
#define _IPC4_T4IS_MASK                          0x00000003
#define _IPC4_T4IS_LENGTH                        0x00000002

#define _IPC4_T4IP_POSITION                      0x00000002
#define _IPC4_T4IP_MASK                          0x0000001C
#define _IPC4_T4IP_LENGTH                        0x00000003

#define _IPC4_IC4IS_POSITION                     0x00000008
#define _IPC4_IC4IS_MASK                         0x00000300
#define _IPC4_IC4IS_LENGTH                       0x00000002

#define _IPC4_IC4IP_POSITION                     0x0000000A
#define _IPC4_IC4IP_MASK                         0x00001C00
#define _IPC4_IC4IP_LENGTH                       0x00000003

#define _IPC4_OC4IS_POSITION                     0x00000010
#define _IPC4_OC4IS_MASK                         0x00030000
#define _IPC4_OC4IS_LENGTH                       0x00000002

#define _IPC4_OC4IP_POSITION                     0x00000012
#define _IPC4_OC4IP_MASK                         0x001C0000
#define _IPC4_OC4IP_LENGTH                       0x00000003

#define _IPC4_INT4IS_POSITION                    0x00000018
#define _IPC4_INT4IS_MASK                        0x03000000
#define _IPC4_INT4IS_LENGTH                      0x00000002

#define _IPC4_INT4IP_POSITION                    0x0000001A
#define _IPC4_INT4IP_MASK                        0x1C000000
#define _IPC4_INT4IP_LENGTH                      0x00000003

#define _IPC4_w_POSITION                         0x00000000
#define _IPC4_w_MASK                             0xFFFFFFFF
#define _IPC4_w_LENGTH                           0x00000020

#define _IPC5_T5IS_POSITION                      0x00000000
#define _IPC5_T5IS_MASK                          0x00000003
#define _IPC5_T5IS_LENGTH                        0x00000002

#define _IPC5_T5IP_POSITION                      0x00000002
#define _IPC5_T5IP_MASK                          0x0000001C
#define _IPC5_T5IP_LENGTH                        0x00000003

#define _IPC5_IC5IS_POSITION                     0x00000008
#define _IPC5_IC5IS_MASK                         0x00000300
#define _IPC5_IC5IS_LENGTH                       0x00000002

#define _IPC5_IC5IP_POSITION                     0x0000000A
#define _IPC5_IC5IP_MASK                         0x00001C00
#define _IPC5_IC5IP_LENGTH                       0x00000003

#define _IPC5_OC5IS_POSITION                     0x00000010
#define _IPC5_OC5IS_MASK                         0x00030000
#define _IPC5_OC5IS_LENGTH                       0x00000002

#define _IPC5_OC5IP_POSITION                     0x00000012
#define _IPC5_OC5IP_MASK                         0x001C0000
#define _IPC5_OC5IP_LENGTH                       0x00000003

#define _IPC5_AD1IS_POSITION                     0x00000018
#define _IPC5_AD1IS_MASK                         0x03000000
#define _IPC5_AD1IS_LENGTH                       0x00000002

#define _IPC5_AD1IP_POSITION                     0x0000001A
#define _IPC5_AD1IP_MASK                         0x1C000000
#define _IPC5_AD1IP_LENGTH                       0x00000003

#define _IPC5_w_POSITION                         0x00000000
#define _IPC5_w_MASK                             0xFFFFFFFF
#define _IPC5_w_LENGTH                           0x00000020

#define _IPC6_FSCMIS_POSITION                    0x00000000
#define _IPC6_FSCMIS_MASK                        0x00000003
#define _IPC6_FSCMIS_LENGTH                      0x00000002

#define _IPC6_FSCMIP_POSITION                    0x00000002
#define _IPC6_FSCMIP_MASK                        0x0000001C
#define _IPC6_FSCMIP_LENGTH                      0x00000003

#define _IPC6_RTCCIS_POSITION                    0x00000008
#define _IPC6_RTCCIS_MASK                        0x00000300
#define _IPC6_RTCCIS_LENGTH                      0x00000002

#define _IPC6_RTCCIP_POSITION                    0x0000000A
#define _IPC6_RTCCIP_MASK                        0x00001C00
#define _IPC6_RTCCIP_LENGTH                      0x00000003

#define _IPC6_FCEIS_POSITION                     0x00000010
#define _IPC6_FCEIS_MASK                         0x00030000
#define _IPC6_FCEIS_LENGTH                       0x00000002

#define _IPC6_FCEIP_POSITION                     0x00000012
#define _IPC6_FCEIP_MASK                         0x001C0000
#define _IPC6_FCEIP_LENGTH                       0x00000003

#define _IPC6_CMP1IS_POSITION                    0x00000018
#define _IPC6_CMP1IS_MASK                        0x03000000
#define _IPC6_CMP1IS_LENGTH                      0x00000002

#define _IPC6_CMP1IP_POSITION                    0x0000001A
#define _IPC6_CMP1IP_MASK                        0x1C000000
#define _IPC6_CMP1IP_LENGTH                      0x00000003

#define _IPC6_w_POSITION                         0x00000000
#define _IPC6_w_MASK                             0xFFFFFFFF
#define _IPC6_w_LENGTH                           0x00000020

#define _IPC7_CMP2IS_POSITION                    0x00000000
#define _IPC7_CMP2IS_MASK                        0x00000003
#define _IPC7_CMP2IS_LENGTH                      0x00000002

#define _IPC7_CMP2IP_POSITION                    0x00000002
#define _IPC7_CMP2IP_MASK                        0x0000001C
#define _IPC7_CMP2IP_LENGTH                      0x00000003

#define _IPC7_SPI1IS_POSITION                    0x00000010
#define _IPC7_SPI1IS_MASK                        0x00030000
#define _IPC7_SPI1IS_LENGTH                      0x00000002

#define _IPC7_SPI1IP_POSITION                    0x00000012
#define _IPC7_SPI1IP_MASK                        0x001C0000
#define _IPC7_SPI1IP_LENGTH                      0x00000003

#define _IPC7_U1IS_POSITION                      0x00000018
#define _IPC7_U1IS_MASK                          0x03000000
#define _IPC7_U1IS_LENGTH                        0x00000002

#define _IPC7_U1IP_POSITION                      0x0000001A
#define _IPC7_U1IP_MASK                          0x1C000000
#define _IPC7_U1IP_LENGTH                        0x00000003

#define _IPC7_w_POSITION                         0x00000000
#define _IPC7_w_MASK                             0xFFFFFFFF
#define _IPC7_w_LENGTH                           0x00000020

#define _IPC8_I2C1IS_POSITION                    0x00000000
#define _IPC8_I2C1IS_MASK                        0x00000003
#define _IPC8_I2C1IS_LENGTH                      0x00000002

#define _IPC8_I2C1IP_POSITION                    0x00000002
#define _IPC8_I2C1IP_MASK                        0x0000001C
#define _IPC8_I2C1IP_LENGTH                      0x00000003

#define _IPC8_CNIS_POSITION                      0x00000008
#define _IPC8_CNIS_MASK                          0x00000300
#define _IPC8_CNIS_LENGTH                        0x00000002

#define _IPC8_CNIP_POSITION                      0x0000000A
#define _IPC8_CNIP_MASK                          0x00001C00
#define _IPC8_CNIP_LENGTH                        0x00000003

#define _IPC8_PMPIS_POSITION                     0x00000010
#define _IPC8_PMPIS_MASK                         0x00030000
#define _IPC8_PMPIS_LENGTH                       0x00000002

#define _IPC8_PMPIP_POSITION                     0x00000012
#define _IPC8_PMPIP_MASK                         0x001C0000
#define _IPC8_PMPIP_LENGTH                       0x00000003

#define _IPC8_SPI2IS_POSITION                    0x00000018
#define _IPC8_SPI2IS_MASK                        0x03000000
#define _IPC8_SPI2IS_LENGTH                      0x00000002

#define _IPC8_SPI2IP_POSITION                    0x0000001A
#define _IPC8_SPI2IP_MASK                        0x1C000000
#define _IPC8_SPI2IP_LENGTH                      0x00000003

#define _IPC8_w_POSITION                         0x00000000
#define _IPC8_w_MASK                             0xFFFFFFFF
#define _IPC8_w_LENGTH                           0x00000020

#define _IPC9_U2IS_POSITION                      0x00000000
#define _IPC9_U2IS_MASK                          0x00000003
#define _IPC9_U2IS_LENGTH                        0x00000002

#define _IPC9_U2IP_POSITION                      0x00000002
#define _IPC9_U2IP_MASK                          0x0000001C
#define _IPC9_U2IP_LENGTH                        0x00000003

#define _IPC9_I2C2IS_POSITION                    0x00000008
#define _IPC9_I2C2IS_MASK                        0x00000300
#define _IPC9_I2C2IS_LENGTH                      0x00000002

#define _IPC9_I2C2IP_POSITION                    0x0000000A
#define _IPC9_I2C2IP_MASK                        0x00001C00
#define _IPC9_I2C2IP_LENGTH                      0x00000003

#define _IPC9_U3IS_POSITION                      0x00000010
#define _IPC9_U3IS_MASK                          0x00030000
#define _IPC9_U3IS_LENGTH                        0x00000002

#define _IPC9_U3IP_POSITION                      0x00000012
#define _IPC9_U3IP_MASK                          0x001C0000
#define _IPC9_U3IP_LENGTH                        0x00000003

#define _IPC9_U4IS_POSITION                      0x00000018
#define _IPC9_U4IS_MASK                          0x03000000
#define _IPC9_U4IS_LENGTH                        0x00000002

#define _IPC9_U4IP_POSITION                      0x0000001A
#define _IPC9_U4IP_MASK                          0x1C000000
#define _IPC9_U4IP_LENGTH                        0x00000003

#define _IPC9_w_POSITION                         0x00000000
#define _IPC9_w_MASK                             0xFFFFFFFF
#define _IPC9_w_LENGTH                           0x00000020

#define _IPC10_U5IS_POSITION                     0x00000000
#define _IPC10_U5IS_MASK                         0x00000003
#define _IPC10_U5IS_LENGTH                       0x00000002

#define _IPC10_U5IP_POSITION                     0x00000002
#define _IPC10_U5IP_MASK                         0x0000001C
#define _IPC10_U5IP_LENGTH                       0x00000003

#define _IPC10_CTMUIP_POSITION                   0x00000008
#define _IPC10_CTMUIP_MASK                       0x00000300
#define _IPC10_CTMUIP_LENGTH                     0x00000002

#define _IPC10_CTMUIS_POSITION                   0x0000000A
#define _IPC10_CTMUIS_MASK                       0x00001C00
#define _IPC10_CTMUIS_LENGTH                     0x00000003

#define _IPC10_DMA0IS_POSITION                   0x00000010
#define _IPC10_DMA0IS_MASK                       0x00030000
#define _IPC10_DMA0IS_LENGTH                     0x00000002

#define _IPC10_DMA0IP_POSITION                   0x00000012
#define _IPC10_DMA0IP_MASK                       0x001C0000
#define _IPC10_DMA0IP_LENGTH                     0x00000003

#define _IPC10_DMA1IS_POSITION                   0x00000018
#define _IPC10_DMA1IS_MASK                       0x03000000
#define _IPC10_DMA1IS_LENGTH                     0x00000002

#define _IPC10_DMA1IP_POSITION                   0x0000001A
#define _IPC10_DMA1IP_MASK                       0x1C000000
#define _IPC10_DMA1IP_LENGTH                     0x00000003

#define _IPC10_w_POSITION                        0x00000000
#define _IPC10_w_MASK                            0xFFFFFFFF
#define _IPC10_w_LENGTH                          0x00000020

#define _IPC11_DMA2IS_POSITION                   0x00000000
#define _IPC11_DMA2IS_MASK                       0x00000003
#define _IPC11_DMA2IS_LENGTH                     0x00000002

#define _IPC11_DMA2IP_POSITION                   0x00000002
#define _IPC11_DMA2IP_MASK                       0x0000001C
#define _IPC11_DMA2IP_LENGTH                     0x00000003

#define _IPC11_DMA3IS_POSITION                   0x00000008
#define _IPC11_DMA3IS_MASK                       0x00000300
#define _IPC11_DMA3IS_LENGTH                     0x00000002

#define _IPC11_DMA3IP_POSITION                   0x0000000A
#define _IPC11_DMA3IP_MASK                       0x00001C00
#define _IPC11_DMA3IP_LENGTH                     0x00000003

#define _IPC11_w_POSITION                        0x00000000
#define _IPC11_w_MASK                            0xFFFFFFFF
#define _IPC11_w_LENGTH                          0x00000020

#define _BMXCON_BMXARB_POSITION                  0x00000000
#define _BMXCON_BMXARB_MASK                      0x00000007
#define _BMXCON_BMXARB_LENGTH                    0x00000003

#define _BMXCON_BMXWSDRM_POSITION                0x00000006
#define _BMXCON_BMXWSDRM_MASK                    0x00000040
#define _BMXCON_BMXWSDRM_LENGTH                  0x00000001

#define _BMXCON_BMXERRIS_POSITION                0x00000010
#define _BMXCON_BMXERRIS_MASK                    0x00010000
#define _BMXCON_BMXERRIS_LENGTH                  0x00000001

#define _BMXCON_BMXERRDS_POSITION                0x00000011
#define _BMXCON_BMXERRDS_MASK                    0x00020000
#define _BMXCON_BMXERRDS_LENGTH                  0x00000001

#define _BMXCON_BMXERRDMA_POSITION               0x00000012
#define _BMXCON_BMXERRDMA_MASK                   0x00040000
#define _BMXCON_BMXERRDMA_LENGTH                 0x00000001

#define _BMXCON_BMXERRICD_POSITION               0x00000013
#define _BMXCON_BMXERRICD_MASK                   0x00080000
#define _BMXCON_BMXERRICD_LENGTH                 0x00000001

#define _BMXCON_BMXERRIXI_POSITION               0x00000014
#define _BMXCON_BMXERRIXI_MASK                   0x00100000
#define _BMXCON_BMXERRIXI_LENGTH                 0x00000001

#define _BMXCON_BMXCHEDMA_POSITION               0x0000001A
#define _BMXCON_BMXCHEDMA_MASK                   0x04000000
#define _BMXCON_BMXCHEDMA_LENGTH                 0x00000001

#define _BMXCON_w_POSITION                       0x00000000
#define _BMXCON_w_MASK                           0xFFFFFFFF
#define _BMXCON_w_LENGTH                         0x00000020

#define _DMACON_DMABUSY_POSITION                 0x0000000B
#define _DMACON_DMABUSY_MASK                     0x00000800
#define _DMACON_DMABUSY_LENGTH                   0x00000001

#define _DMACON_SUSPEND_POSITION                 0x0000000C
#define _DMACON_SUSPEND_MASK                     0x00001000
#define _DMACON_SUSPEND_LENGTH                   0x00000001

#define _DMACON_ON_POSITION                      0x0000000F
#define _DMACON_ON_MASK                          0x00008000
#define _DMACON_ON_LENGTH                        0x00000001

#define _DMACON_w_POSITION                       0x00000000
#define _DMACON_w_MASK                           0xFFFFFFFF
#define _DMACON_w_LENGTH                         0x00000020

#define _DMASTAT_DMACH_POSITION                  0x00000000
#define _DMASTAT_DMACH_MASK                      0x00000007
#define _DMASTAT_DMACH_LENGTH                    0x00000003

#define _DMASTAT_RDWR_POSITION                   0x00000003
#define _DMASTAT_RDWR_MASK                       0x00000008
#define _DMASTAT_RDWR_LENGTH                     0x00000001

#define _DMASTAT_w_POSITION                      0x00000000
#define _DMASTAT_w_MASK                          0xFFFFFFFF
#define _DMASTAT_w_LENGTH                        0x00000020

#define _DCRCCON_CRCCH_POSITION                  0x00000000
#define _DCRCCON_CRCCH_MASK                      0x00000007
#define _DCRCCON_CRCCH_LENGTH                    0x00000003

#define _DCRCCON_CRCTYP_POSITION                 0x00000005
#define _DCRCCON_CRCTYP_MASK                     0x00000020
#define _DCRCCON_CRCTYP_LENGTH                   0x00000001

#define _DCRCCON_CRCAPP_POSITION                 0x00000006
#define _DCRCCON_CRCAPP_MASK                     0x00000040
#define _DCRCCON_CRCAPP_LENGTH                   0x00000001

#define _DCRCCON_CRCEN_POSITION                  0x00000007
#define _DCRCCON_CRCEN_MASK                      0x00000080
#define _DCRCCON_CRCEN_LENGTH                    0x00000001

#define _DCRCCON_PLEN_POSITION                   0x00000008
#define _DCRCCON_PLEN_MASK                       0x00001F00
#define _DCRCCON_PLEN_LENGTH                     0x00000005

#define _DCRCCON_BITO_POSITION                   0x00000018
#define _DCRCCON_BITO_MASK                       0x01000000
#define _DCRCCON_BITO_LENGTH                     0x00000001

#define _DCRCCON_WBO_POSITION                    0x0000001B
#define _DCRCCON_WBO_MASK                        0x08000000
#define _DCRCCON_WBO_LENGTH                      0x00000001

#define _DCRCCON_BYTO_POSITION                   0x0000001C
#define _DCRCCON_BYTO_MASK                       0x30000000
#define _DCRCCON_BYTO_LENGTH                     0x00000002

#define _DCRCCON_w_POSITION                      0x00000000
#define _DCRCCON_w_MASK                          0xFFFFFFFF
#define _DCRCCON_w_LENGTH                        0x00000020

#define _DCH0CON_CHPRI_POSITION                  0x00000000
#define _DCH0CON_CHPRI_MASK                      0x00000003
#define _DCH0CON_CHPRI_LENGTH                    0x00000002

#define _DCH0CON_CHEDET_POSITION                 0x00000002
#define _DCH0CON_CHEDET_MASK                     0x00000004
#define _DCH0CON_CHEDET_LENGTH                   0x00000001

#define _DCH0CON_CHAEN_POSITION                  0x00000004
#define _DCH0CON_CHAEN_MASK                      0x00000010
#define _DCH0CON_CHAEN_LENGTH                    0x00000001

#define _DCH0CON_CHCHN_POSITION                  0x00000005
#define _DCH0CON_CHCHN_MASK                      0x00000020
#define _DCH0CON_CHCHN_LENGTH                    0x00000001

#define _DCH0CON_CHAED_POSITION                  0x00000006
#define _DCH0CON_CHAED_MASK                      0x00000040
#define _DCH0CON_CHAED_LENGTH                    0x00000001

#define _DCH0CON_CHEN_POSITION                   0x00000007
#define _DCH0CON_CHEN_MASK                       0x00000080
#define _DCH0CON_CHEN_LENGTH                     0x00000001

#define _DCH0CON_CHCHNS_POSITION                 0x00000008
#define _DCH0CON_CHCHNS_MASK                     0x00000100
#define _DCH0CON_CHCHNS_LENGTH                   0x00000001

#define _DCH0CON_CHBUSY_POSITION                 0x0000000F
#define _DCH0CON_CHBUSY_MASK                     0x00008000
#define _DCH0CON_CHBUSY_LENGTH                   0x00000001

#define _DCH0CON_w_POSITION                      0x00000000
#define _DCH0CON_w_MASK                          0xFFFFFFFF
#define _DCH0CON_w_LENGTH                        0x00000020

#define _DCH0ECON_AIRQEN_POSITION                0x00000003
#define _DCH0ECON_AIRQEN_MASK                    0x00000008
#define _DCH0ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_SIRQEN_POSITION                0x00000004
#define _DCH0ECON_SIRQEN_MASK                    0x00000010
#define _DCH0ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_PATEN_POSITION                 0x00000005
#define _DCH0ECON_PATEN_MASK                     0x00000020
#define _DCH0ECON_PATEN_LENGTH                   0x00000001

#define _DCH0ECON_CABORT_POSITION                0x00000006
#define _DCH0ECON_CABORT_MASK                    0x00000040
#define _DCH0ECON_CABORT_LENGTH                  0x00000001

#define _DCH0ECON_CFORCE_POSITION                0x00000007
#define _DCH0ECON_CFORCE_MASK                    0x00000080
#define _DCH0ECON_CFORCE_LENGTH                  0x00000001

#define _DCH0ECON_CHSIRQ_POSITION                0x00000008
#define _DCH0ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH0ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH0ECON_CHAIRQ_POSITION                0x00000010
#define _DCH0ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH0ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH0ECON_w_POSITION                     0x00000000
#define _DCH0ECON_w_MASK                         0xFFFFFFFF
#define _DCH0ECON_w_LENGTH                       0x00000020

#define _DCH0INT_CHERIF_POSITION                 0x00000000
#define _DCH0INT_CHERIF_MASK                     0x00000001
#define _DCH0INT_CHERIF_LENGTH                   0x00000001

#define _DCH0INT_CHTAIF_POSITION                 0x00000001
#define _DCH0INT_CHTAIF_MASK                     0x00000002
#define _DCH0INT_CHTAIF_LENGTH                   0x00000001

#define _DCH0INT_CHCCIF_POSITION                 0x00000002
#define _DCH0INT_CHCCIF_MASK                     0x00000004
#define _DCH0INT_CHCCIF_LENGTH                   0x00000001

#define _DCH0INT_CHBCIF_POSITION                 0x00000003
#define _DCH0INT_CHBCIF_MASK                     0x00000008
#define _DCH0INT_CHBCIF_LENGTH                   0x00000001

#define _DCH0INT_CHDHIF_POSITION                 0x00000004
#define _DCH0INT_CHDHIF_MASK                     0x00000010
#define _DCH0INT_CHDHIF_LENGTH                   0x00000001

#define _DCH0INT_CHDDIF_POSITION                 0x00000005
#define _DCH0INT_CHDDIF_MASK                     0x00000020
#define _DCH0INT_CHDDIF_LENGTH                   0x00000001

#define _DCH0INT_CHSHIF_POSITION                 0x00000006
#define _DCH0INT_CHSHIF_MASK                     0x00000040
#define _DCH0INT_CHSHIF_LENGTH                   0x00000001

#define _DCH0INT_CHSDIF_POSITION                 0x00000007
#define _DCH0INT_CHSDIF_MASK                     0x00000080
#define _DCH0INT_CHSDIF_LENGTH                   0x00000001

#define _DCH0INT_CHERIE_POSITION                 0x00000010
#define _DCH0INT_CHERIE_MASK                     0x00010000
#define _DCH0INT_CHERIE_LENGTH                   0x00000001

#define _DCH0INT_CHTAIE_POSITION                 0x00000011
#define _DCH0INT_CHTAIE_MASK                     0x00020000
#define _DCH0INT_CHTAIE_LENGTH                   0x00000001

#define _DCH0INT_CHCCIE_POSITION                 0x00000012
#define _DCH0INT_CHCCIE_MASK                     0x00040000
#define _DCH0INT_CHCCIE_LENGTH                   0x00000001

#define _DCH0INT_CHBCIE_POSITION                 0x00000013
#define _DCH0INT_CHBCIE_MASK                     0x00080000
#define _DCH0INT_CHBCIE_LENGTH                   0x00000001

#define _DCH0INT_CHDHIE_POSITION                 0x00000014
#define _DCH0INT_CHDHIE_MASK                     0x00100000
#define _DCH0INT_CHDHIE_LENGTH                   0x00000001

#define _DCH0INT_CHDDIE_POSITION                 0x00000015
#define _DCH0INT_CHDDIE_MASK                     0x00200000
#define _DCH0INT_CHDDIE_LENGTH                   0x00000001

#define _DCH0INT_CHSHIE_POSITION                 0x00000016
#define _DCH0INT_CHSHIE_MASK                     0x00400000
#define _DCH0INT_CHSHIE_LENGTH                   0x00000001

#define _DCH0INT_CHSDIE_POSITION                 0x00000017
#define _DCH0INT_CHSDIE_MASK                     0x00800000
#define _DCH0INT_CHSDIE_LENGTH                   0x00000001

#define _DCH0INT_w_POSITION                      0x00000000
#define _DCH0INT_w_MASK                          0xFFFFFFFF
#define _DCH0INT_w_LENGTH                        0x00000020

#define _DCH1CON_CHPRI_POSITION                  0x00000000
#define _DCH1CON_CHPRI_MASK                      0x00000003
#define _DCH1CON_CHPRI_LENGTH                    0x00000002

#define _DCH1CON_CHEDET_POSITION                 0x00000002
#define _DCH1CON_CHEDET_MASK                     0x00000004
#define _DCH1CON_CHEDET_LENGTH                   0x00000001

#define _DCH1CON_CHAEN_POSITION                  0x00000004
#define _DCH1CON_CHAEN_MASK                      0x00000010
#define _DCH1CON_CHAEN_LENGTH                    0x00000001

#define _DCH1CON_CHCHN_POSITION                  0x00000005
#define _DCH1CON_CHCHN_MASK                      0x00000020
#define _DCH1CON_CHCHN_LENGTH                    0x00000001

#define _DCH1CON_CHAED_POSITION                  0x00000006
#define _DCH1CON_CHAED_MASK                      0x00000040
#define _DCH1CON_CHAED_LENGTH                    0x00000001

#define _DCH1CON_CHEN_POSITION                   0x00000007
#define _DCH1CON_CHEN_MASK                       0x00000080
#define _DCH1CON_CHEN_LENGTH                     0x00000001

#define _DCH1CON_CHCHNS_POSITION                 0x00000008
#define _DCH1CON_CHCHNS_MASK                     0x00000100
#define _DCH1CON_CHCHNS_LENGTH                   0x00000001

#define _DCH1CON_CHBUSY_POSITION                 0x0000000F
#define _DCH1CON_CHBUSY_MASK                     0x00008000
#define _DCH1CON_CHBUSY_LENGTH                   0x00000001

#define _DCH1CON_w_POSITION                      0x00000000
#define _DCH1CON_w_MASK                          0xFFFFFFFF
#define _DCH1CON_w_LENGTH                        0x00000020

#define _DCH1ECON_AIRQEN_POSITION                0x00000003
#define _DCH1ECON_AIRQEN_MASK                    0x00000008
#define _DCH1ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_SIRQEN_POSITION                0x00000004
#define _DCH1ECON_SIRQEN_MASK                    0x00000010
#define _DCH1ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_PATEN_POSITION                 0x00000005
#define _DCH1ECON_PATEN_MASK                     0x00000020
#define _DCH1ECON_PATEN_LENGTH                   0x00000001

#define _DCH1ECON_CABORT_POSITION                0x00000006
#define _DCH1ECON_CABORT_MASK                    0x00000040
#define _DCH1ECON_CABORT_LENGTH                  0x00000001

#define _DCH1ECON_CFORCE_POSITION                0x00000007
#define _DCH1ECON_CFORCE_MASK                    0x00000080
#define _DCH1ECON_CFORCE_LENGTH                  0x00000001

#define _DCH1ECON_CHSIRQ_POSITION                0x00000008
#define _DCH1ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH1ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH1ECON_CHAIRQ_POSITION                0x00000010
#define _DCH1ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH1ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH1ECON_w_POSITION                     0x00000000
#define _DCH1ECON_w_MASK                         0xFFFFFFFF
#define _DCH1ECON_w_LENGTH                       0x00000020

#define _DCH1INT_CHERIF_POSITION                 0x00000000
#define _DCH1INT_CHERIF_MASK                     0x00000001
#define _DCH1INT_CHERIF_LENGTH                   0x00000001

#define _DCH1INT_CHTAIF_POSITION                 0x00000001
#define _DCH1INT_CHTAIF_MASK                     0x00000002
#define _DCH1INT_CHTAIF_LENGTH                   0x00000001

#define _DCH1INT_CHCCIF_POSITION                 0x00000002
#define _DCH1INT_CHCCIF_MASK                     0x00000004
#define _DCH1INT_CHCCIF_LENGTH                   0x00000001

#define _DCH1INT_CHBCIF_POSITION                 0x00000003
#define _DCH1INT_CHBCIF_MASK                     0x00000008
#define _DCH1INT_CHBCIF_LENGTH                   0x00000001

#define _DCH1INT_CHDHIF_POSITION                 0x00000004
#define _DCH1INT_CHDHIF_MASK                     0x00000010
#define _DCH1INT_CHDHIF_LENGTH                   0x00000001

#define _DCH1INT_CHDDIF_POSITION                 0x00000005
#define _DCH1INT_CHDDIF_MASK                     0x00000020
#define _DCH1INT_CHDDIF_LENGTH                   0x00000001

#define _DCH1INT_CHSHIF_POSITION                 0x00000006
#define _DCH1INT_CHSHIF_MASK                     0x00000040
#define _DCH1INT_CHSHIF_LENGTH                   0x00000001

#define _DCH1INT_CHSDIF_POSITION                 0x00000007
#define _DCH1INT_CHSDIF_MASK                     0x00000080
#define _DCH1INT_CHSDIF_LENGTH                   0x00000001

#define _DCH1INT_CHERIE_POSITION                 0x00000010
#define _DCH1INT_CHERIE_MASK                     0x00010000
#define _DCH1INT_CHERIE_LENGTH                   0x00000001

#define _DCH1INT_CHTAIE_POSITION                 0x00000011
#define _DCH1INT_CHTAIE_MASK                     0x00020000
#define _DCH1INT_CHTAIE_LENGTH                   0x00000001

#define _DCH1INT_CHCCIE_POSITION                 0x00000012
#define _DCH1INT_CHCCIE_MASK                     0x00040000
#define _DCH1INT_CHCCIE_LENGTH                   0x00000001

#define _DCH1INT_CHBCIE_POSITION                 0x00000013
#define _DCH1INT_CHBCIE_MASK                     0x00080000
#define _DCH1INT_CHBCIE_LENGTH                   0x00000001

#define _DCH1INT_CHDHIE_POSITION                 0x00000014
#define _DCH1INT_CHDHIE_MASK                     0x00100000
#define _DCH1INT_CHDHIE_LENGTH                   0x00000001

#define _DCH1INT_CHDDIE_POSITION                 0x00000015
#define _DCH1INT_CHDDIE_MASK                     0x00200000
#define _DCH1INT_CHDDIE_LENGTH                   0x00000001

#define _DCH1INT_CHSHIE_POSITION                 0x00000016
#define _DCH1INT_CHSHIE_MASK                     0x00400000
#define _DCH1INT_CHSHIE_LENGTH                   0x00000001

#define _DCH1INT_CHSDIE_POSITION                 0x00000017
#define _DCH1INT_CHSDIE_MASK                     0x00800000
#define _DCH1INT_CHSDIE_LENGTH                   0x00000001

#define _DCH1INT_w_POSITION                      0x00000000
#define _DCH1INT_w_MASK                          0xFFFFFFFF
#define _DCH1INT_w_LENGTH                        0x00000020

#define _DCH2CON_CHPRI_POSITION                  0x00000000
#define _DCH2CON_CHPRI_MASK                      0x00000003
#define _DCH2CON_CHPRI_LENGTH                    0x00000002

#define _DCH2CON_CHEDET_POSITION                 0x00000002
#define _DCH2CON_CHEDET_MASK                     0x00000004
#define _DCH2CON_CHEDET_LENGTH                   0x00000001

#define _DCH2CON_CHAEN_POSITION                  0x00000004
#define _DCH2CON_CHAEN_MASK                      0x00000010
#define _DCH2CON_CHAEN_LENGTH                    0x00000001

#define _DCH2CON_CHCHN_POSITION                  0x00000005
#define _DCH2CON_CHCHN_MASK                      0x00000020
#define _DCH2CON_CHCHN_LENGTH                    0x00000001

#define _DCH2CON_CHAED_POSITION                  0x00000006
#define _DCH2CON_CHAED_MASK                      0x00000040
#define _DCH2CON_CHAED_LENGTH                    0x00000001

#define _DCH2CON_CHEN_POSITION                   0x00000007
#define _DCH2CON_CHEN_MASK                       0x00000080
#define _DCH2CON_CHEN_LENGTH                     0x00000001

#define _DCH2CON_CHCHNS_POSITION                 0x00000008
#define _DCH2CON_CHCHNS_MASK                     0x00000100
#define _DCH2CON_CHCHNS_LENGTH                   0x00000001

#define _DCH2CON_CHBUSY_POSITION                 0x0000000F
#define _DCH2CON_CHBUSY_MASK                     0x00008000
#define _DCH2CON_CHBUSY_LENGTH                   0x00000001

#define _DCH2CON_w_POSITION                      0x00000000
#define _DCH2CON_w_MASK                          0xFFFFFFFF
#define _DCH2CON_w_LENGTH                        0x00000020

#define _DCH2ECON_AIRQEN_POSITION                0x00000003
#define _DCH2ECON_AIRQEN_MASK                    0x00000008
#define _DCH2ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_SIRQEN_POSITION                0x00000004
#define _DCH2ECON_SIRQEN_MASK                    0x00000010
#define _DCH2ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_PATEN_POSITION                 0x00000005
#define _DCH2ECON_PATEN_MASK                     0x00000020
#define _DCH2ECON_PATEN_LENGTH                   0x00000001

#define _DCH2ECON_CABORT_POSITION                0x00000006
#define _DCH2ECON_CABORT_MASK                    0x00000040
#define _DCH2ECON_CABORT_LENGTH                  0x00000001

#define _DCH2ECON_CFORCE_POSITION                0x00000007
#define _DCH2ECON_CFORCE_MASK                    0x00000080
#define _DCH2ECON_CFORCE_LENGTH                  0x00000001

#define _DCH2ECON_CHSIRQ_POSITION                0x00000008
#define _DCH2ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH2ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH2ECON_CHAIRQ_POSITION                0x00000010
#define _DCH2ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH2ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH2ECON_w_POSITION                     0x00000000
#define _DCH2ECON_w_MASK                         0xFFFFFFFF
#define _DCH2ECON_w_LENGTH                       0x00000020

#define _DCH2INT_CHERIF_POSITION                 0x00000000
#define _DCH2INT_CHERIF_MASK                     0x00000001
#define _DCH2INT_CHERIF_LENGTH                   0x00000001

#define _DCH2INT_CHTAIF_POSITION                 0x00000001
#define _DCH2INT_CHTAIF_MASK                     0x00000002
#define _DCH2INT_CHTAIF_LENGTH                   0x00000001

#define _DCH2INT_CHCCIF_POSITION                 0x00000002
#define _DCH2INT_CHCCIF_MASK                     0x00000004
#define _DCH2INT_CHCCIF_LENGTH                   0x00000001

#define _DCH2INT_CHBCIF_POSITION                 0x00000003
#define _DCH2INT_CHBCIF_MASK                     0x00000008
#define _DCH2INT_CHBCIF_LENGTH                   0x00000001

#define _DCH2INT_CHDHIF_POSITION                 0x00000004
#define _DCH2INT_CHDHIF_MASK                     0x00000010
#define _DCH2INT_CHDHIF_LENGTH                   0x00000001

#define _DCH2INT_CHDDIF_POSITION                 0x00000005
#define _DCH2INT_CHDDIF_MASK                     0x00000020
#define _DCH2INT_CHDDIF_LENGTH                   0x00000001

#define _DCH2INT_CHSHIF_POSITION                 0x00000006
#define _DCH2INT_CHSHIF_MASK                     0x00000040
#define _DCH2INT_CHSHIF_LENGTH                   0x00000001

#define _DCH2INT_CHSDIF_POSITION                 0x00000007
#define _DCH2INT_CHSDIF_MASK                     0x00000080
#define _DCH2INT_CHSDIF_LENGTH                   0x00000001

#define _DCH2INT_CHERIE_POSITION                 0x00000010
#define _DCH2INT_CHERIE_MASK                     0x00010000
#define _DCH2INT_CHERIE_LENGTH                   0x00000001

#define _DCH2INT_CHTAIE_POSITION                 0x00000011
#define _DCH2INT_CHTAIE_MASK                     0x00020000
#define _DCH2INT_CHTAIE_LENGTH                   0x00000001

#define _DCH2INT_CHCCIE_POSITION                 0x00000012
#define _DCH2INT_CHCCIE_MASK                     0x00040000
#define _DCH2INT_CHCCIE_LENGTH                   0x00000001

#define _DCH2INT_CHBCIE_POSITION                 0x00000013
#define _DCH2INT_CHBCIE_MASK                     0x00080000
#define _DCH2INT_CHBCIE_LENGTH                   0x00000001

#define _DCH2INT_CHDHIE_POSITION                 0x00000014
#define _DCH2INT_CHDHIE_MASK                     0x00100000
#define _DCH2INT_CHDHIE_LENGTH                   0x00000001

#define _DCH2INT_CHDDIE_POSITION                 0x00000015
#define _DCH2INT_CHDDIE_MASK                     0x00200000
#define _DCH2INT_CHDDIE_LENGTH                   0x00000001

#define _DCH2INT_CHSHIE_POSITION                 0x00000016
#define _DCH2INT_CHSHIE_MASK                     0x00400000
#define _DCH2INT_CHSHIE_LENGTH                   0x00000001

#define _DCH2INT_CHSDIE_POSITION                 0x00000017
#define _DCH2INT_CHSDIE_MASK                     0x00800000
#define _DCH2INT_CHSDIE_LENGTH                   0x00000001

#define _DCH2INT_w_POSITION                      0x00000000
#define _DCH2INT_w_MASK                          0xFFFFFFFF
#define _DCH2INT_w_LENGTH                        0x00000020

#define _DCH3CON_CHPRI_POSITION                  0x00000000
#define _DCH3CON_CHPRI_MASK                      0x00000003
#define _DCH3CON_CHPRI_LENGTH                    0x00000002

#define _DCH3CON_CHEDET_POSITION                 0x00000002
#define _DCH3CON_CHEDET_MASK                     0x00000004
#define _DCH3CON_CHEDET_LENGTH                   0x00000001

#define _DCH3CON_CHAEN_POSITION                  0x00000004
#define _DCH3CON_CHAEN_MASK                      0x00000010
#define _DCH3CON_CHAEN_LENGTH                    0x00000001

#define _DCH3CON_CHCHN_POSITION                  0x00000005
#define _DCH3CON_CHCHN_MASK                      0x00000020
#define _DCH3CON_CHCHN_LENGTH                    0x00000001

#define _DCH3CON_CHAED_POSITION                  0x00000006
#define _DCH3CON_CHAED_MASK                      0x00000040
#define _DCH3CON_CHAED_LENGTH                    0x00000001

#define _DCH3CON_CHEN_POSITION                   0x00000007
#define _DCH3CON_CHEN_MASK                       0x00000080
#define _DCH3CON_CHEN_LENGTH                     0x00000001

#define _DCH3CON_CHCHNS_POSITION                 0x00000008
#define _DCH3CON_CHCHNS_MASK                     0x00000100
#define _DCH3CON_CHCHNS_LENGTH                   0x00000001

#define _DCH3CON_CHBUSY_POSITION                 0x0000000F
#define _DCH3CON_CHBUSY_MASK                     0x00008000
#define _DCH3CON_CHBUSY_LENGTH                   0x00000001

#define _DCH3CON_w_POSITION                      0x00000000
#define _DCH3CON_w_MASK                          0xFFFFFFFF
#define _DCH3CON_w_LENGTH                        0x00000020

#define _DCH3ECON_AIRQEN_POSITION                0x00000003
#define _DCH3ECON_AIRQEN_MASK                    0x00000008
#define _DCH3ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_SIRQEN_POSITION                0x00000004
#define _DCH3ECON_SIRQEN_MASK                    0x00000010
#define _DCH3ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_PATEN_POSITION                 0x00000005
#define _DCH3ECON_PATEN_MASK                     0x00000020
#define _DCH3ECON_PATEN_LENGTH                   0x00000001

#define _DCH3ECON_CABORT_POSITION                0x00000006
#define _DCH3ECON_CABORT_MASK                    0x00000040
#define _DCH3ECON_CABORT_LENGTH                  0x00000001

#define _DCH3ECON_CFORCE_POSITION                0x00000007
#define _DCH3ECON_CFORCE_MASK                    0x00000080
#define _DCH3ECON_CFORCE_LENGTH                  0x00000001

#define _DCH3ECON_CHSIRQ_POSITION                0x00000008
#define _DCH3ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH3ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH3ECON_CHAIRQ_POSITION                0x00000010
#define _DCH3ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH3ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH3ECON_w_POSITION                     0x00000000
#define _DCH3ECON_w_MASK                         0xFFFFFFFF
#define _DCH3ECON_w_LENGTH                       0x00000020

#define _DCH3INT_CHERIF_POSITION                 0x00000000
#define _DCH3INT_CHERIF_MASK                     0x00000001
#define _DCH3INT_CHERIF_LENGTH                   0x00000001

#define _DCH3INT_CHTAIF_POSITION                 0x00000001
#define _DCH3INT_CHTAIF_MASK                     0x00000002
#define _DCH3INT_CHTAIF_LENGTH                   0x00000001

#define _DCH3INT_CHCCIF_POSITION                 0x00000002
#define _DCH3INT_CHCCIF_MASK                     0x00000004
#define _DCH3INT_CHCCIF_LENGTH                   0x00000001

#define _DCH3INT_CHBCIF_POSITION                 0x00000003
#define _DCH3INT_CHBCIF_MASK                     0x00000008
#define _DCH3INT_CHBCIF_LENGTH                   0x00000001

#define _DCH3INT_CHDHIF_POSITION                 0x00000004
#define _DCH3INT_CHDHIF_MASK                     0x00000010
#define _DCH3INT_CHDHIF_LENGTH                   0x00000001

#define _DCH3INT_CHDDIF_POSITION                 0x00000005
#define _DCH3INT_CHDDIF_MASK                     0x00000020
#define _DCH3INT_CHDDIF_LENGTH                   0x00000001

#define _DCH3INT_CHSHIF_POSITION                 0x00000006
#define _DCH3INT_CHSHIF_MASK                     0x00000040
#define _DCH3INT_CHSHIF_LENGTH                   0x00000001

#define _DCH3INT_CHSDIF_POSITION                 0x00000007
#define _DCH3INT_CHSDIF_MASK                     0x00000080
#define _DCH3INT_CHSDIF_LENGTH                   0x00000001

#define _DCH3INT_CHERIE_POSITION                 0x00000010
#define _DCH3INT_CHERIE_MASK                     0x00010000
#define _DCH3INT_CHERIE_LENGTH                   0x00000001

#define _DCH3INT_CHTAIE_POSITION                 0x00000011
#define _DCH3INT_CHTAIE_MASK                     0x00020000
#define _DCH3INT_CHTAIE_LENGTH                   0x00000001

#define _DCH3INT_CHCCIE_POSITION                 0x00000012
#define _DCH3INT_CHCCIE_MASK                     0x00040000
#define _DCH3INT_CHCCIE_LENGTH                   0x00000001

#define _DCH3INT_CHBCIE_POSITION                 0x00000013
#define _DCH3INT_CHBCIE_MASK                     0x00080000
#define _DCH3INT_CHBCIE_LENGTH                   0x00000001

#define _DCH3INT_CHDHIE_POSITION                 0x00000014
#define _DCH3INT_CHDHIE_MASK                     0x00100000
#define _DCH3INT_CHDHIE_LENGTH                   0x00000001

#define _DCH3INT_CHDDIE_POSITION                 0x00000015
#define _DCH3INT_CHDDIE_MASK                     0x00200000
#define _DCH3INT_CHDDIE_LENGTH                   0x00000001

#define _DCH3INT_CHSHIE_POSITION                 0x00000016
#define _DCH3INT_CHSHIE_MASK                     0x00400000
#define _DCH3INT_CHSHIE_LENGTH                   0x00000001

#define _DCH3INT_CHSDIE_POSITION                 0x00000017
#define _DCH3INT_CHSDIE_MASK                     0x00800000
#define _DCH3INT_CHSDIE_LENGTH                   0x00000001

#define _DCH3INT_w_POSITION                      0x00000000
#define _DCH3INT_w_MASK                          0xFFFFFFFF
#define _DCH3INT_w_LENGTH                        0x00000020

#define _CHECON_PFMWS_POSITION                   0x00000000
#define _CHECON_PFMWS_MASK                       0x00000007
#define _CHECON_PFMWS_LENGTH                     0x00000003

#define _CHECON_PREFEN_POSITION                  0x00000004
#define _CHECON_PREFEN_MASK                      0x00000030
#define _CHECON_PREFEN_LENGTH                    0x00000002

#define _CHECON_DCSZ_POSITION                    0x00000008
#define _CHECON_DCSZ_MASK                        0x00000300
#define _CHECON_DCSZ_LENGTH                      0x00000002

#define _CHECON_CHECOH_POSITION                  0x00000010
#define _CHECON_CHECOH_MASK                      0x00010000
#define _CHECON_CHECOH_LENGTH                    0x00000001

#define _CHECON_w_POSITION                       0x00000000
#define _CHECON_w_MASK                           0xFFFFFFFF
#define _CHECON_w_LENGTH                         0x00000020

#define _CHEACC_CHEIDX_POSITION                  0x00000000
#define _CHEACC_CHEIDX_MASK                      0x0000000F
#define _CHEACC_CHEIDX_LENGTH                    0x00000004

#define _CHEACC_CHEWEN_POSITION                  0x0000001F
#define _CHEACC_CHEWEN_MASK                      0x80000000
#define _CHEACC_CHEWEN_LENGTH                    0x00000001

#define _CHETAG_LTYPE_POSITION                   0x00000001
#define _CHETAG_LTYPE_MASK                       0x00000002
#define _CHETAG_LTYPE_LENGTH                     0x00000001

#define _CHETAG_LLOCK_POSITION                   0x00000002
#define _CHETAG_LLOCK_MASK                       0x00000004
#define _CHETAG_LLOCK_LENGTH                     0x00000001

#define _CHETAG_LVALID_POSITION                  0x00000003
#define _CHETAG_LVALID_MASK                      0x00000008
#define _CHETAG_LVALID_LENGTH                    0x00000001

#define _CHETAG_LTAG_POSITION                    0x00000004
#define _CHETAG_LTAG_MASK                        0x00FFFFF0
#define _CHETAG_LTAG_LENGTH                      0x00000014

#define _CHETAG_LTAGBOOT_POSITION                0x0000001F
#define _CHETAG_LTAGBOOT_MASK                    0x80000000
#define _CHETAG_LTAGBOOT_LENGTH                  0x00000001

#define _CHETAG_w_POSITION                       0x00000000
#define _CHETAG_w_MASK                           0xFFFFFFFF
#define _CHETAG_w_LENGTH                         0x00000020

#define _CHEMSK_LMASK_POSITION                   0x00000005
#define _CHEMSK_LMASK_MASK                       0x0000FFE0
#define _CHEMSK_LMASK_LENGTH                     0x0000000B

#define _CHEW0_CHEW0_POSITION                    0x00000000
#define _CHEW0_CHEW0_MASK                        0xFFFFFFFF
#define _CHEW0_CHEW0_LENGTH                      0x00000020

#define _CHEW1_CHEW1_POSITION                    0x00000000
#define _CHEW1_CHEW1_MASK                        0xFFFFFFFF
#define _CHEW1_CHEW1_LENGTH                      0x00000020

#define _CHEW2_CHEW2_POSITION                    0x00000000
#define _CHEW2_CHEW2_MASK                        0xFFFFFFFF
#define _CHEW2_CHEW2_LENGTH                      0x00000020

#define _CHEW3_CHEW3_POSITION                    0x00000000
#define _CHEW3_CHEW3_MASK                        0xFFFFFFFF
#define _CHEW3_CHEW3_LENGTH                      0x00000020

#define _CHELRU_CHELRU_POSITION                  0x00000000
#define _CHELRU_CHELRU_MASK                      0x01FFFFFF
#define _CHELRU_CHELRU_LENGTH                    0x00000019

#define _CHEHIT_CHEHIT_POSITION                  0x00000000
#define _CHEHIT_CHEHIT_MASK                      0xFFFFFFFF
#define _CHEHIT_CHEHIT_LENGTH                    0x00000020

#define _CHEMIS_CHEMIS_POSITION                  0x00000000
#define _CHEMIS_CHEMIS_MASK                      0xFFFFFFFF
#define _CHEMIS_CHEMIS_LENGTH                    0x00000020

#define _CHEPFABT_CHEPFABT_POSITION              0x00000000
#define _CHEPFABT_CHEPFABT_MASK                  0xFFFFFFFF
#define _CHEPFABT_CHEPFABT_LENGTH                0x00000020

#define _ANSELA_ANSA9_POSITION                   0x00000009
#define _ANSELA_ANSA9_MASK                       0x00000200
#define _ANSELA_ANSA9_LENGTH                     0x00000001

#define _ANSELA_ANSA10_POSITION                  0x0000000A
#define _ANSELA_ANSA10_MASK                      0x00000400
#define _ANSELA_ANSA10_LENGTH                    0x00000001

#define _ANSELA_w_POSITION                       0x00000000
#define _ANSELA_w_MASK                           0xFFFFFFFF
#define _ANSELA_w_LENGTH                         0x00000020

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _TRISA_TRISA5_POSITION                   0x00000005
#define _TRISA_TRISA5_MASK                       0x00000020
#define _TRISA_TRISA5_LENGTH                     0x00000001

#define _TRISA_TRISA6_POSITION                   0x00000006
#define _TRISA_TRISA6_MASK                       0x00000040
#define _TRISA_TRISA6_LENGTH                     0x00000001

#define _TRISA_TRISA7_POSITION                   0x00000007
#define _TRISA_TRISA7_MASK                       0x00000080
#define _TRISA_TRISA7_LENGTH                     0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_TRISA10_POSITION                  0x0000000A
#define _TRISA_TRISA10_MASK                      0x00000400
#define _TRISA_TRISA10_LENGTH                    0x00000001

#define _TRISA_TRISA14_POSITION                  0x0000000E
#define _TRISA_TRISA14_MASK                      0x00004000
#define _TRISA_TRISA14_LENGTH                    0x00000001

#define _TRISA_TRISA15_POSITION                  0x0000000F
#define _TRISA_TRISA15_MASK                      0x00008000
#define _TRISA_TRISA15_LENGTH                    0x00000001

#define _TRISA_w_POSITION                        0x00000000
#define _TRISA_w_MASK                            0xFFFFFFFF
#define _TRISA_w_LENGTH                          0x00000020

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _PORTA_RA5_POSITION                      0x00000005
#define _PORTA_RA5_MASK                          0x00000020
#define _PORTA_RA5_LENGTH                        0x00000001

#define _PORTA_RA6_POSITION                      0x00000006
#define _PORTA_RA6_MASK                          0x00000040
#define _PORTA_RA6_LENGTH                        0x00000001

#define _PORTA_RA7_POSITION                      0x00000007
#define _PORTA_RA7_MASK                          0x00000080
#define _PORTA_RA7_LENGTH                        0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_RA10_POSITION                     0x0000000A
#define _PORTA_RA10_MASK                         0x00000400
#define _PORTA_RA10_LENGTH                       0x00000001

#define _PORTA_RA14_POSITION                     0x0000000E
#define _PORTA_RA14_MASK                         0x00004000
#define _PORTA_RA14_LENGTH                       0x00000001

#define _PORTA_RA15_POSITION                     0x0000000F
#define _PORTA_RA15_MASK                         0x00008000
#define _PORTA_RA15_LENGTH                       0x00000001

#define _PORTA_w_POSITION                        0x00000000
#define _PORTA_w_MASK                            0xFFFFFFFF
#define _PORTA_w_LENGTH                          0x00000020

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _LATA_LATA5_POSITION                     0x00000005
#define _LATA_LATA5_MASK                         0x00000020
#define _LATA_LATA5_LENGTH                       0x00000001

#define _LATA_LATA6_POSITION                     0x00000006
#define _LATA_LATA6_MASK                         0x00000040
#define _LATA_LATA6_LENGTH                       0x00000001

#define _LATA_LATA7_POSITION                     0x00000007
#define _LATA_LATA7_MASK                         0x00000080
#define _LATA_LATA7_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_LATA10_POSITION                    0x0000000A
#define _LATA_LATA10_MASK                        0x00000400
#define _LATA_LATA10_LENGTH                      0x00000001

#define _LATA_LATA14_POSITION                    0x0000000E
#define _LATA_LATA14_MASK                        0x00004000
#define _LATA_LATA14_LENGTH                      0x00000001

#define _LATA_LATA15_POSITION                    0x0000000F
#define _LATA_LATA15_MASK                        0x00008000
#define _LATA_LATA15_LENGTH                      0x00000001

#define _LATA_w_POSITION                         0x00000000
#define _LATA_w_MASK                             0xFFFFFFFF
#define _LATA_w_LENGTH                           0x00000020

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _ODCA_ODCA5_POSITION                     0x00000005
#define _ODCA_ODCA5_MASK                         0x00000020
#define _ODCA_ODCA5_LENGTH                       0x00000001

#define _ODCA_ODCA6_POSITION                     0x00000006
#define _ODCA_ODCA6_MASK                         0x00000040
#define _ODCA_ODCA6_LENGTH                       0x00000001

#define _ODCA_ODCA7_POSITION                     0x00000007
#define _ODCA_ODCA7_MASK                         0x00000080
#define _ODCA_ODCA7_LENGTH                       0x00000001

#define _ODCA_ODCA9_POSITION                     0x00000009
#define _ODCA_ODCA9_MASK                         0x00000200
#define _ODCA_ODCA9_LENGTH                       0x00000001

#define _ODCA_ODCA10_POSITION                    0x0000000A
#define _ODCA_ODCA10_MASK                        0x00000400
#define _ODCA_ODCA10_LENGTH                      0x00000001

#define _ODCA_ODCA14_POSITION                    0x0000000E
#define _ODCA_ODCA14_MASK                        0x00004000
#define _ODCA_ODCA14_LENGTH                      0x00000001

#define _ODCA_ODCA15_POSITION                    0x0000000F
#define _ODCA_ODCA15_MASK                        0x00008000
#define _ODCA_ODCA15_LENGTH                      0x00000001

#define _ODCA_w_POSITION                         0x00000000
#define _ODCA_w_MASK                             0xFFFFFFFF
#define _ODCA_w_LENGTH                           0x00000020

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPUA_CNPUA5_POSITION                   0x00000005
#define _CNPUA_CNPUA5_MASK                       0x00000020
#define _CNPUA_CNPUA5_LENGTH                     0x00000001

#define _CNPUA_CNPUA6_POSITION                   0x00000006
#define _CNPUA_CNPUA6_MASK                       0x00000040
#define _CNPUA_CNPUA6_LENGTH                     0x00000001

#define _CNPUA_CNPUA7_POSITION                   0x00000007
#define _CNPUA_CNPUA7_MASK                       0x00000080
#define _CNPUA_CNPUA7_LENGTH                     0x00000001

#define _CNPUA_CNPUA9_POSITION                   0x00000009
#define _CNPUA_CNPUA9_MASK                       0x00000200
#define _CNPUA_CNPUA9_LENGTH                     0x00000001

#define _CNPUA_CNPUA10_POSITION                  0x0000000A
#define _CNPUA_CNPUA10_MASK                      0x00000400
#define _CNPUA_CNPUA10_LENGTH                    0x00000001

#define _CNPUA_CNPUA14_POSITION                  0x0000000E
#define _CNPUA_CNPUA14_MASK                      0x00004000
#define _CNPUA_CNPUA14_LENGTH                    0x00000001

#define _CNPUA_CNPUA15_POSITION                  0x0000000F
#define _CNPUA_CNPUA15_MASK                      0x00008000
#define _CNPUA_CNPUA15_LENGTH                    0x00000001

#define _CNPUA_w_POSITION                        0x00000000
#define _CNPUA_w_MASK                            0xFFFFFFFF
#define _CNPUA_w_LENGTH                          0x00000020

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _CNPDA_CNPDA5_POSITION                   0x00000005
#define _CNPDA_CNPDA5_MASK                       0x00000020
#define _CNPDA_CNPDA5_LENGTH                     0x00000001

#define _CNPDA_CNPDA6_POSITION                   0x00000006
#define _CNPDA_CNPDA6_MASK                       0x00000040
#define _CNPDA_CNPDA6_LENGTH                     0x00000001

#define _CNPDA_CNPDA7_POSITION                   0x00000007
#define _CNPDA_CNPDA7_MASK                       0x00000080
#define _CNPDA_CNPDA7_LENGTH                     0x00000001

#define _CNPDA_CNPDA9_POSITION                   0x00000009
#define _CNPDA_CNPDA9_MASK                       0x00000200
#define _CNPDA_CNPDA9_LENGTH                     0x00000001

#define _CNPDA_CNPDA10_POSITION                  0x0000000A
#define _CNPDA_CNPDA10_MASK                      0x00000400
#define _CNPDA_CNPDA10_LENGTH                    0x00000001

#define _CNPDA_CNPDA14_POSITION                  0x0000000E
#define _CNPDA_CNPDA14_MASK                      0x00004000
#define _CNPDA_CNPDA14_LENGTH                    0x00000001

#define _CNPDA_CNPDA15_POSITION                  0x0000000F
#define _CNPDA_CNPDA15_MASK                      0x00008000
#define _CNPDA_CNPDA15_LENGTH                    0x00000001

#define _CNPDA_w_POSITION                        0x00000000
#define _CNPDA_w_MASK                            0xFFFFFFFF
#define _CNPDA_w_LENGTH                          0x00000020

#define _CNCONA_SIDL_POSITION                    0x0000000D
#define _CNCONA_SIDL_MASK                        0x00002000
#define _CNCONA_SIDL_LENGTH                      0x00000001

#define _CNCONA_ON_POSITION                      0x0000000F
#define _CNCONA_ON_MASK                          0x00008000
#define _CNCONA_ON_LENGTH                        0x00000001

#define _CNCONA_w_POSITION                       0x00000000
#define _CNCONA_w_MASK                           0xFFFFFFFF
#define _CNCONA_w_LENGTH                         0x00000020

#define _CNENA_CNIEA0_POSITION                   0x00000000
#define _CNENA_CNIEA0_MASK                       0x00000001
#define _CNENA_CNIEA0_LENGTH                     0x00000001

#define _CNENA_CNIEA1_POSITION                   0x00000001
#define _CNENA_CNIEA1_MASK                       0x00000002
#define _CNENA_CNIEA1_LENGTH                     0x00000001

#define _CNENA_CNIEA2_POSITION                   0x00000002
#define _CNENA_CNIEA2_MASK                       0x00000004
#define _CNENA_CNIEA2_LENGTH                     0x00000001

#define _CNENA_CNIEA3_POSITION                   0x00000003
#define _CNENA_CNIEA3_MASK                       0x00000008
#define _CNENA_CNIEA3_LENGTH                     0x00000001

#define _CNENA_CNIEA4_POSITION                   0x00000004
#define _CNENA_CNIEA4_MASK                       0x00000010
#define _CNENA_CNIEA4_LENGTH                     0x00000001

#define _CNENA_CNIEA5_POSITION                   0x00000005
#define _CNENA_CNIEA5_MASK                       0x00000020
#define _CNENA_CNIEA5_LENGTH                     0x00000001

#define _CNENA_CNIEA6_POSITION                   0x00000006
#define _CNENA_CNIEA6_MASK                       0x00000040
#define _CNENA_CNIEA6_LENGTH                     0x00000001

#define _CNENA_CNIEA7_POSITION                   0x00000007
#define _CNENA_CNIEA7_MASK                       0x00000080
#define _CNENA_CNIEA7_LENGTH                     0x00000001

#define _CNENA_CNIEA9_POSITION                   0x00000009
#define _CNENA_CNIEA9_MASK                       0x00000200
#define _CNENA_CNIEA9_LENGTH                     0x00000001

#define _CNENA_CNIEA10_POSITION                  0x0000000A
#define _CNENA_CNIEA10_MASK                      0x00000400
#define _CNENA_CNIEA10_LENGTH                    0x00000001

#define _CNENA_CNIEA14_POSITION                  0x0000000E
#define _CNENA_CNIEA14_MASK                      0x00004000
#define _CNENA_CNIEA14_LENGTH                    0x00000001

#define _CNENA_CNIEA15_POSITION                  0x0000000F
#define _CNENA_CNIEA15_MASK                      0x00008000
#define _CNENA_CNIEA15_LENGTH                    0x00000001

#define _CNENA_w_POSITION                        0x00000000
#define _CNENA_w_MASK                            0xFFFFFFFF
#define _CNENA_w_LENGTH                          0x00000020

#define _CNSTATA_CNSTATA0_POSITION               0x00000000
#define _CNSTATA_CNSTATA0_MASK                   0x00000001
#define _CNSTATA_CNSTATA0_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA1_POSITION               0x00000001
#define _CNSTATA_CNSTATA1_MASK                   0x00000002
#define _CNSTATA_CNSTATA1_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA2_POSITION               0x00000002
#define _CNSTATA_CNSTATA2_MASK                   0x00000004
#define _CNSTATA_CNSTATA2_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA3_POSITION               0x00000003
#define _CNSTATA_CNSTATA3_MASK                   0x00000008
#define _CNSTATA_CNSTATA3_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA4_POSITION               0x00000004
#define _CNSTATA_CNSTATA4_MASK                   0x00000010
#define _CNSTATA_CNSTATA4_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA5_POSITION               0x00000005
#define _CNSTATA_CNSTATA5_MASK                   0x00000020
#define _CNSTATA_CNSTATA5_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA6_POSITION               0x00000006
#define _CNSTATA_CNSTATA6_MASK                   0x00000040
#define _CNSTATA_CNSTATA6_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA7_POSITION               0x00000007
#define _CNSTATA_CNSTATA7_MASK                   0x00000080
#define _CNSTATA_CNSTATA7_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA9_POSITION               0x00000009
#define _CNSTATA_CNSTATA9_MASK                   0x00000200
#define _CNSTATA_CNSTATA9_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA10_POSITION              0x0000000A
#define _CNSTATA_CNSTATA10_MASK                  0x00000400
#define _CNSTATA_CNSTATA10_LENGTH                0x00000001

#define _CNSTATA_CNSTATA14_POSITION              0x0000000E
#define _CNSTATA_CNSTATA14_MASK                  0x00004000
#define _CNSTATA_CNSTATA14_LENGTH                0x00000001

#define _CNSTATA_CNSTATA15_POSITION              0x0000000F
#define _CNSTATA_CNSTATA15_MASK                  0x00008000
#define _CNSTATA_CNSTATA15_LENGTH                0x00000001

#define _CNSTATA_w_POSITION                      0x00000000
#define _CNSTATA_w_MASK                          0xFFFFFFFF
#define _CNSTATA_w_LENGTH                        0x00000020

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB5_POSITION                   0x00000005
#define _ANSELB_ANSB5_MASK                       0x00000020
#define _ANSELB_ANSB5_LENGTH                     0x00000001

#define _ANSELB_ANSB6_POSITION                   0x00000006
#define _ANSELB_ANSB6_MASK                       0x00000040
#define _ANSELB_ANSB6_LENGTH                     0x00000001

#define _ANSELB_ANSB7_POSITION                   0x00000007
#define _ANSELB_ANSB7_MASK                       0x00000080
#define _ANSELB_ANSB7_LENGTH                     0x00000001

#define _ANSELB_ANSB8_POSITION                   0x00000008
#define _ANSELB_ANSB8_MASK                       0x00000100
#define _ANSELB_ANSB8_LENGTH                     0x00000001

#define _ANSELB_ANSB9_POSITION                   0x00000009
#define _ANSELB_ANSB9_MASK                       0x00000200
#define _ANSELB_ANSB9_LENGTH                     0x00000001

#define _ANSELB_ANSB10_POSITION                  0x0000000A
#define _ANSELB_ANSB10_MASK                      0x00000400
#define _ANSELB_ANSB10_LENGTH                    0x00000001

#define _ANSELB_ANSB11_POSITION                  0x0000000B
#define _ANSELB_ANSB11_MASK                      0x00000800
#define _ANSELB_ANSB11_LENGTH                    0x00000001

#define _ANSELB_ANSB12_POSITION                  0x0000000C
#define _ANSELB_ANSB12_MASK                      0x00001000
#define _ANSELB_ANSB12_LENGTH                    0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _ANSELB_w_POSITION                       0x00000000
#define _ANSELB_w_MASK                           0xFFFFFFFF
#define _ANSELB_w_LENGTH                         0x00000020

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _TRISB_w_POSITION                        0x00000000
#define _TRISB_w_MASK                            0xFFFFFFFF
#define _TRISB_w_LENGTH                          0x00000020

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _PORTB_w_POSITION                        0x00000000
#define _PORTB_w_MASK                            0xFFFFFFFF
#define _PORTB_w_LENGTH                          0x00000020

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _LATB_w_POSITION                         0x00000000
#define _LATB_w_MASK                             0xFFFFFFFF
#define _LATB_w_LENGTH                           0x00000020

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _ODCB_w_POSITION                         0x00000000
#define _ODCB_w_MASK                             0xFFFFFFFF
#define _ODCB_w_LENGTH                           0x00000020

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB3_POSITION                   0x00000003
#define _CNPUB_CNPUB3_MASK                       0x00000008
#define _CNPUB_CNPUB3_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB5_POSITION                   0x00000005
#define _CNPUB_CNPUB5_MASK                       0x00000020
#define _CNPUB_CNPUB5_LENGTH                     0x00000001

#define _CNPUB_CNPUB6_POSITION                   0x00000006
#define _CNPUB_CNPUB6_MASK                       0x00000040
#define _CNPUB_CNPUB6_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB10_POSITION                  0x0000000A
#define _CNPUB_CNPUB10_MASK                      0x00000400
#define _CNPUB_CNPUB10_LENGTH                    0x00000001

#define _CNPUB_CNPUB11_POSITION                  0x0000000B
#define _CNPUB_CNPUB11_MASK                      0x00000800
#define _CNPUB_CNPUB11_LENGTH                    0x00000001

#define _CNPUB_CNPUB12_POSITION                  0x0000000C
#define _CNPUB_CNPUB12_MASK                      0x00001000
#define _CNPUB_CNPUB12_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPUB_w_POSITION                        0x00000000
#define _CNPUB_w_MASK                            0xFFFFFFFF
#define _CNPUB_w_LENGTH                          0x00000020

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB3_POSITION                   0x00000003
#define _CNPDB_CNPDB3_MASK                       0x00000008
#define _CNPDB_CNPDB3_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB5_POSITION                   0x00000005
#define _CNPDB_CNPDB5_MASK                       0x00000020
#define _CNPDB_CNPDB5_LENGTH                     0x00000001

#define _CNPDB_CNPDB6_POSITION                   0x00000006
#define _CNPDB_CNPDB6_MASK                       0x00000040
#define _CNPDB_CNPDB6_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB10_POSITION                  0x0000000A
#define _CNPDB_CNPDB10_MASK                      0x00000400
#define _CNPDB_CNPDB10_LENGTH                    0x00000001

#define _CNPDB_CNPDB11_POSITION                  0x0000000B
#define _CNPDB_CNPDB11_MASK                      0x00000800
#define _CNPDB_CNPDB11_LENGTH                    0x00000001

#define _CNPDB_CNPDB12_POSITION                  0x0000000C
#define _CNPDB_CNPDB12_MASK                      0x00001000
#define _CNPDB_CNPDB12_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _CNPDB_w_POSITION                        0x00000000
#define _CNPDB_w_MASK                            0xFFFFFFFF
#define _CNPDB_w_LENGTH                          0x00000020

#define _CNCONB_SIDL_POSITION                    0x0000000D
#define _CNCONB_SIDL_MASK                        0x00002000
#define _CNCONB_SIDL_LENGTH                      0x00000001

#define _CNCONB_ON_POSITION                      0x0000000F
#define _CNCONB_ON_MASK                          0x00008000
#define _CNCONB_ON_LENGTH                        0x00000001

#define _CNCONB_w_POSITION                       0x00000000
#define _CNCONB_w_MASK                           0xFFFFFFFF
#define _CNCONB_w_LENGTH                         0x00000020

#define _CNENB_CNIEB0_POSITION                   0x00000000
#define _CNENB_CNIEB0_MASK                       0x00000001
#define _CNENB_CNIEB0_LENGTH                     0x00000001

#define _CNENB_CNIEB1_POSITION                   0x00000001
#define _CNENB_CNIEB1_MASK                       0x00000002
#define _CNENB_CNIEB1_LENGTH                     0x00000001

#define _CNENB_CNIEB2_POSITION                   0x00000002
#define _CNENB_CNIEB2_MASK                       0x00000004
#define _CNENB_CNIEB2_LENGTH                     0x00000001

#define _CNENB_CNIEB3_POSITION                   0x00000003
#define _CNENB_CNIEB3_MASK                       0x00000008
#define _CNENB_CNIEB3_LENGTH                     0x00000001

#define _CNENB_CNIEB4_POSITION                   0x00000004
#define _CNENB_CNIEB4_MASK                       0x00000010
#define _CNENB_CNIEB4_LENGTH                     0x00000001

#define _CNENB_CNIEB5_POSITION                   0x00000005
#define _CNENB_CNIEB5_MASK                       0x00000020
#define _CNENB_CNIEB5_LENGTH                     0x00000001

#define _CNENB_CNIEB6_POSITION                   0x00000006
#define _CNENB_CNIEB6_MASK                       0x00000040
#define _CNENB_CNIEB6_LENGTH                     0x00000001

#define _CNENB_CNIEB7_POSITION                   0x00000007
#define _CNENB_CNIEB7_MASK                       0x00000080
#define _CNENB_CNIEB7_LENGTH                     0x00000001

#define _CNENB_CNIEB8_POSITION                   0x00000008
#define _CNENB_CNIEB8_MASK                       0x00000100
#define _CNENB_CNIEB8_LENGTH                     0x00000001

#define _CNENB_CNIEB9_POSITION                   0x00000009
#define _CNENB_CNIEB9_MASK                       0x00000200
#define _CNENB_CNIEB9_LENGTH                     0x00000001

#define _CNENB_CNIEB10_POSITION                  0x0000000A
#define _CNENB_CNIEB10_MASK                      0x00000400
#define _CNENB_CNIEB10_LENGTH                    0x00000001

#define _CNENB_CNIEB11_POSITION                  0x0000000B
#define _CNENB_CNIEB11_MASK                      0x00000800
#define _CNENB_CNIEB11_LENGTH                    0x00000001

#define _CNENB_CNIEB12_POSITION                  0x0000000C
#define _CNENB_CNIEB12_MASK                      0x00001000
#define _CNENB_CNIEB12_LENGTH                    0x00000001

#define _CNENB_CNIEB13_POSITION                  0x0000000D
#define _CNENB_CNIEB13_MASK                      0x00002000
#define _CNENB_CNIEB13_LENGTH                    0x00000001

#define _CNENB_CNIEB14_POSITION                  0x0000000E
#define _CNENB_CNIEB14_MASK                      0x00004000
#define _CNENB_CNIEB14_LENGTH                    0x00000001

#define _CNENB_CNIEB15_POSITION                  0x0000000F
#define _CNENB_CNIEB15_MASK                      0x00008000
#define _CNENB_CNIEB15_LENGTH                    0x00000001

#define _CNENB_w_POSITION                        0x00000000
#define _CNENB_w_MASK                            0xFFFFFFFF
#define _CNENB_w_LENGTH                          0x00000020

#define _CNSTATB_CNSTATB0_POSITION               0x00000000
#define _CNSTATB_CNSTATB0_MASK                   0x00000001
#define _CNSTATB_CNSTATB0_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB1_POSITION               0x00000001
#define _CNSTATB_CNSTATB1_MASK                   0x00000002
#define _CNSTATB_CNSTATB1_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB2_POSITION               0x00000002
#define _CNSTATB_CNSTATB2_MASK                   0x00000004
#define _CNSTATB_CNSTATB2_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB3_POSITION               0x00000003
#define _CNSTATB_CNSTATB3_MASK                   0x00000008
#define _CNSTATB_CNSTATB3_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB4_POSITION               0x00000004
#define _CNSTATB_CNSTATB4_MASK                   0x00000010
#define _CNSTATB_CNSTATB4_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB5_POSITION               0x00000005
#define _CNSTATB_CNSTATB5_MASK                   0x00000020
#define _CNSTATB_CNSTATB5_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB6_POSITION               0x00000006
#define _CNSTATB_CNSTATB6_MASK                   0x00000040
#define _CNSTATB_CNSTATB6_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB7_POSITION               0x00000007
#define _CNSTATB_CNSTATB7_MASK                   0x00000080
#define _CNSTATB_CNSTATB7_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB8_POSITION               0x00000008
#define _CNSTATB_CNSTATB8_MASK                   0x00000100
#define _CNSTATB_CNSTATB8_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB9_POSITION               0x00000009
#define _CNSTATB_CNSTATB9_MASK                   0x00000200
#define _CNSTATB_CNSTATB9_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB10_POSITION              0x0000000A
#define _CNSTATB_CNSTATB10_MASK                  0x00000400
#define _CNSTATB_CNSTATB10_LENGTH                0x00000001

#define _CNSTATB_CNSTATB11_POSITION              0x0000000B
#define _CNSTATB_CNSTATB11_MASK                  0x00000800
#define _CNSTATB_CNSTATB11_LENGTH                0x00000001

#define _CNSTATB_CNSTATB12_POSITION              0x0000000C
#define _CNSTATB_CNSTATB12_MASK                  0x00001000
#define _CNSTATB_CNSTATB12_LENGTH                0x00000001

#define _CNSTATB_CNSTATB13_POSITION              0x0000000D
#define _CNSTATB_CNSTATB13_MASK                  0x00002000
#define _CNSTATB_CNSTATB13_LENGTH                0x00000001

#define _CNSTATB_CNSTATB14_POSITION              0x0000000E
#define _CNSTATB_CNSTATB14_MASK                  0x00004000
#define _CNSTATB_CNSTATB14_LENGTH                0x00000001

#define _CNSTATB_CNSTATB15_POSITION              0x0000000F
#define _CNSTATB_CNSTATB15_MASK                  0x00008000
#define _CNSTATB_CNSTATB15_LENGTH                0x00000001

#define _CNSTATB_w_POSITION                      0x00000000
#define _CNSTATB_w_MASK                          0xFFFFFFFF
#define _CNSTATB_w_LENGTH                        0x00000020

#define _ANSELC_w_POSITION                       0x00000000
#define _ANSELC_w_MASK                           0xFFFFFFFF
#define _ANSELC_w_LENGTH                         0x00000020

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC3_POSITION                   0x00000003
#define _TRISC_TRISC3_MASK                       0x00000008
#define _TRISC_TRISC3_LENGTH                     0x00000001

#define _TRISC_TRISC4_POSITION                   0x00000004
#define _TRISC_TRISC4_MASK                       0x00000010
#define _TRISC_TRISC4_LENGTH                     0x00000001

#define _TRISC_TRISC12_POSITION                  0x0000000C
#define _TRISC_TRISC12_MASK                      0x00001000
#define _TRISC_TRISC12_LENGTH                    0x00000001

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _TRISC_TRISC14_POSITION                  0x0000000E
#define _TRISC_TRISC14_MASK                      0x00004000
#define _TRISC_TRISC14_LENGTH                    0x00000001

#define _TRISC_TRISC15_POSITION                  0x0000000F
#define _TRISC_TRISC15_MASK                      0x00008000
#define _TRISC_TRISC15_LENGTH                    0x00000001

#define _TRISC_w_POSITION                        0x00000000
#define _TRISC_w_MASK                            0xFFFFFFFF
#define _TRISC_w_LENGTH                          0x00000020

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC3_POSITION                      0x00000003
#define _PORTC_RC3_MASK                          0x00000008
#define _PORTC_RC3_LENGTH                        0x00000001

#define _PORTC_RC4_POSITION                      0x00000004
#define _PORTC_RC4_MASK                          0x00000010
#define _PORTC_RC4_LENGTH                        0x00000001

#define _PORTC_RC12_POSITION                     0x0000000C
#define _PORTC_RC12_MASK                         0x00001000
#define _PORTC_RC12_LENGTH                       0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _PORTC_RC14_POSITION                     0x0000000E
#define _PORTC_RC14_MASK                         0x00004000
#define _PORTC_RC14_LENGTH                       0x00000001

#define _PORTC_RC15_POSITION                     0x0000000F
#define _PORTC_RC15_MASK                         0x00008000
#define _PORTC_RC15_LENGTH                       0x00000001

#define _PORTC_w_POSITION                        0x00000000
#define _PORTC_w_MASK                            0xFFFFFFFF
#define _PORTC_w_LENGTH                          0x00000020

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC3_POSITION                     0x00000003
#define _LATC_LATC3_MASK                         0x00000008
#define _LATC_LATC3_LENGTH                       0x00000001

#define _LATC_LATC4_POSITION                     0x00000004
#define _LATC_LATC4_MASK                         0x00000010
#define _LATC_LATC4_LENGTH                       0x00000001

#define _LATC_LATC12_POSITION                    0x0000000C
#define _LATC_LATC12_MASK                        0x00001000
#define _LATC_LATC12_LENGTH                      0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _LATC_LATC14_POSITION                    0x0000000E
#define _LATC_LATC14_MASK                        0x00004000
#define _LATC_LATC14_LENGTH                      0x00000001

#define _LATC_LATC15_POSITION                    0x0000000F
#define _LATC_LATC15_MASK                        0x00008000
#define _LATC_LATC15_LENGTH                      0x00000001

#define _LATC_w_POSITION                         0x00000000
#define _LATC_w_MASK                             0xFFFFFFFF
#define _LATC_w_LENGTH                           0x00000020

#define _ODCC_ODCC1_POSITION                     0x00000001
#define _ODCC_ODCC1_MASK                         0x00000002
#define _ODCC_ODCC1_LENGTH                       0x00000001

#define _ODCC_ODCC2_POSITION                     0x00000002
#define _ODCC_ODCC2_MASK                         0x00000004
#define _ODCC_ODCC2_LENGTH                       0x00000001

#define _ODCC_ODCC3_POSITION                     0x00000003
#define _ODCC_ODCC3_MASK                         0x00000008
#define _ODCC_ODCC3_LENGTH                       0x00000001

#define _ODCC_ODCC4_POSITION                     0x00000004
#define _ODCC_ODCC4_MASK                         0x00000010
#define _ODCC_ODCC4_LENGTH                       0x00000001

#define _ODCC_ODCC12_POSITION                    0x0000000C
#define _ODCC_ODCC12_MASK                        0x00001000
#define _ODCC_ODCC12_LENGTH                      0x00000001

#define _ODCC_ODCC13_POSITION                    0x0000000D
#define _ODCC_ODCC13_MASK                        0x00002000
#define _ODCC_ODCC13_LENGTH                      0x00000001

#define _ODCC_ODCC14_POSITION                    0x0000000E
#define _ODCC_ODCC14_MASK                        0x00004000
#define _ODCC_ODCC14_LENGTH                      0x00000001

#define _ODCC_ODCC15_POSITION                    0x0000000F
#define _ODCC_ODCC15_MASK                        0x00008000
#define _ODCC_ODCC15_LENGTH                      0x00000001

#define _ODCC_w_POSITION                         0x00000000
#define _ODCC_w_MASK                             0xFFFFFFFF
#define _ODCC_w_LENGTH                           0x00000020

#define _CNPUC_CNPUC1_POSITION                   0x00000001
#define _CNPUC_CNPUC1_MASK                       0x00000002
#define _CNPUC_CNPUC1_LENGTH                     0x00000001

#define _CNPUC_CNPUC2_POSITION                   0x00000002
#define _CNPUC_CNPUC2_MASK                       0x00000004
#define _CNPUC_CNPUC2_LENGTH                     0x00000001

#define _CNPUC_CNPUC3_POSITION                   0x00000003
#define _CNPUC_CNPUC3_MASK                       0x00000008
#define _CNPUC_CNPUC3_LENGTH                     0x00000001

#define _CNPUC_CNPUC4_POSITION                   0x00000004
#define _CNPUC_CNPUC4_MASK                       0x00000010
#define _CNPUC_CNPUC4_LENGTH                     0x00000001

#define _CNPUC_CNPUC12_POSITION                  0x0000000C
#define _CNPUC_CNPUC12_MASK                      0x00001000
#define _CNPUC_CNPUC12_LENGTH                    0x00000001

#define _CNPUC_CNPUC13_POSITION                  0x0000000D
#define _CNPUC_CNPUC13_MASK                      0x00002000
#define _CNPUC_CNPUC13_LENGTH                    0x00000001

#define _CNPUC_CNPUC14_POSITION                  0x0000000E
#define _CNPUC_CNPUC14_MASK                      0x00004000
#define _CNPUC_CNPUC14_LENGTH                    0x00000001

#define _CNPUC_CNPUC15_POSITION                  0x0000000F
#define _CNPUC_CNPUC15_MASK                      0x00008000
#define _CNPUC_CNPUC15_LENGTH                    0x00000001

#define _CNPUC_w_POSITION                        0x00000000
#define _CNPUC_w_MASK                            0xFFFFFFFF
#define _CNPUC_w_LENGTH                          0x00000020

#define _CNPDC_CNPDC1_POSITION                   0x00000001
#define _CNPDC_CNPDC1_MASK                       0x00000002
#define _CNPDC_CNPDC1_LENGTH                     0x00000001

#define _CNPDC_CNPDC2_POSITION                   0x00000002
#define _CNPDC_CNPDC2_MASK                       0x00000004
#define _CNPDC_CNPDC2_LENGTH                     0x00000001

#define _CNPDC_CNPDC3_POSITION                   0x00000003
#define _CNPDC_CNPDC3_MASK                       0x00000008
#define _CNPDC_CNPDC3_LENGTH                     0x00000001

#define _CNPDC_CNPDC4_POSITION                   0x00000004
#define _CNPDC_CNPDC4_MASK                       0x00000010
#define _CNPDC_CNPDC4_LENGTH                     0x00000001

#define _CNPDC_CNPDC12_POSITION                  0x0000000C
#define _CNPDC_CNPDC12_MASK                      0x00001000
#define _CNPDC_CNPDC12_LENGTH                    0x00000001

#define _CNPDC_CNPDC13_POSITION                  0x0000000D
#define _CNPDC_CNPDC13_MASK                      0x00002000
#define _CNPDC_CNPDC13_LENGTH                    0x00000001

#define _CNPDC_CNPDC14_POSITION                  0x0000000E
#define _CNPDC_CNPDC14_MASK                      0x00004000
#define _CNPDC_CNPDC14_LENGTH                    0x00000001

#define _CNPDC_CNPDC15_POSITION                  0x0000000F
#define _CNPDC_CNPDC15_MASK                      0x00008000
#define _CNPDC_CNPDC15_LENGTH                    0x00000001

#define _CNPDC_w_POSITION                        0x00000000
#define _CNPDC_w_MASK                            0xFFFFFFFF
#define _CNPDC_w_LENGTH                          0x00000020

#define _CNCONC_SIDL_POSITION                    0x0000000D
#define _CNCONC_SIDL_MASK                        0x00002000
#define _CNCONC_SIDL_LENGTH                      0x00000001

#define _CNCONC_ON_POSITION                      0x0000000F
#define _CNCONC_ON_MASK                          0x00008000
#define _CNCONC_ON_LENGTH                        0x00000001

#define _CNCONC_w_POSITION                       0x00000000
#define _CNCONC_w_MASK                           0xFFFFFFFF
#define _CNCONC_w_LENGTH                         0x00000020

#define _CNENC_CNIEC1_POSITION                   0x00000001
#define _CNENC_CNIEC1_MASK                       0x00000002
#define _CNENC_CNIEC1_LENGTH                     0x00000001

#define _CNENC_CNIEC2_POSITION                   0x00000002
#define _CNENC_CNIEC2_MASK                       0x00000004
#define _CNENC_CNIEC2_LENGTH                     0x00000001

#define _CNENC_CNIEC3_POSITION                   0x00000003
#define _CNENC_CNIEC3_MASK                       0x00000008
#define _CNENC_CNIEC3_LENGTH                     0x00000001

#define _CNENC_CNIEC4_POSITION                   0x00000004
#define _CNENC_CNIEC4_MASK                       0x00000010
#define _CNENC_CNIEC4_LENGTH                     0x00000001

#define _CNENC_CNIEC12_POSITION                  0x0000000C
#define _CNENC_CNIEC12_MASK                      0x00001000
#define _CNENC_CNIEC12_LENGTH                    0x00000001

#define _CNENC_CNIEC13_POSITION                  0x0000000D
#define _CNENC_CNIEC13_MASK                      0x00002000
#define _CNENC_CNIEC13_LENGTH                    0x00000001

#define _CNENC_CNIEC14_POSITION                  0x0000000E
#define _CNENC_CNIEC14_MASK                      0x00004000
#define _CNENC_CNIEC14_LENGTH                    0x00000001

#define _CNENC_CNIEC15_POSITION                  0x0000000F
#define _CNENC_CNIEC15_MASK                      0x00008000
#define _CNENC_CNIEC15_LENGTH                    0x00000001

#define _CNENC_w_POSITION                        0x00000000
#define _CNENC_w_MASK                            0xFFFFFFFF
#define _CNENC_w_LENGTH                          0x00000020

#define _CNSTATC_CNSTATC1_POSITION               0x00000001
#define _CNSTATC_CNSTATC1_MASK                   0x00000002
#define _CNSTATC_CNSTATC1_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC2_POSITION               0x00000002
#define _CNSTATC_CNSTATC2_MASK                   0x00000004
#define _CNSTATC_CNSTATC2_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC3_POSITION               0x00000003
#define _CNSTATC_CNSTATC3_MASK                   0x00000008
#define _CNSTATC_CNSTATC3_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC4_POSITION               0x00000004
#define _CNSTATC_CNSTATC4_MASK                   0x00000010
#define _CNSTATC_CNSTATC4_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC12_POSITION              0x0000000C
#define _CNSTATC_CNSTATC12_MASK                  0x00001000
#define _CNSTATC_CNSTATC12_LENGTH                0x00000001

#define _CNSTATC_CNSTATC13_POSITION              0x0000000D
#define _CNSTATC_CNSTATC13_MASK                  0x00002000
#define _CNSTATC_CNSTATC13_LENGTH                0x00000001

#define _CNSTATC_CNSTATC14_POSITION              0x0000000E
#define _CNSTATC_CNSTATC14_MASK                  0x00004000
#define _CNSTATC_CNSTATC14_LENGTH                0x00000001

#define _CNSTATC_CNSTATC15_POSITION              0x0000000F
#define _CNSTATC_CNSTATC15_MASK                  0x00008000
#define _CNSTATC_CNSTATC15_LENGTH                0x00000001

#define _CNSTATC_w_POSITION                      0x00000000
#define _CNSTATC_w_MASK                          0xFFFFFFFF
#define _CNSTATC_w_LENGTH                        0x00000020

#define _ANSELD_ANSD1_POSITION                   0x00000001
#define _ANSELD_ANSD1_MASK                       0x00000002
#define _ANSELD_ANSD1_LENGTH                     0x00000001

#define _ANSELD_ANSD2_POSITION                   0x00000002
#define _ANSELD_ANSD2_MASK                       0x00000004
#define _ANSELD_ANSD2_LENGTH                     0x00000001

#define _ANSELD_ANSD3_POSITION                   0x00000003
#define _ANSELD_ANSD3_MASK                       0x00000008
#define _ANSELD_ANSD3_LENGTH                     0x00000001

#define _ANSELD_w_POSITION                       0x00000000
#define _ANSELD_w_MASK                           0xFFFFFFFF
#define _ANSELD_w_LENGTH                         0x00000020

#define _TRISD_TRISD0_POSITION                   0x00000000
#define _TRISD_TRISD0_MASK                       0x00000001
#define _TRISD_TRISD0_LENGTH                     0x00000001

#define _TRISD_TRISD1_POSITION                   0x00000001
#define _TRISD_TRISD1_MASK                       0x00000002
#define _TRISD_TRISD1_LENGTH                     0x00000001

#define _TRISD_TRISD2_POSITION                   0x00000002
#define _TRISD_TRISD2_MASK                       0x00000004
#define _TRISD_TRISD2_LENGTH                     0x00000001

#define _TRISD_TRISD3_POSITION                   0x00000003
#define _TRISD_TRISD3_MASK                       0x00000008
#define _TRISD_TRISD3_LENGTH                     0x00000001

#define _TRISD_TRISD4_POSITION                   0x00000004
#define _TRISD_TRISD4_MASK                       0x00000010
#define _TRISD_TRISD4_LENGTH                     0x00000001

#define _TRISD_TRISD5_POSITION                   0x00000005
#define _TRISD_TRISD5_MASK                       0x00000020
#define _TRISD_TRISD5_LENGTH                     0x00000001

#define _TRISD_TRISD6_POSITION                   0x00000006
#define _TRISD_TRISD6_MASK                       0x00000040
#define _TRISD_TRISD6_LENGTH                     0x00000001

#define _TRISD_TRISD7_POSITION                   0x00000007
#define _TRISD_TRISD7_MASK                       0x00000080
#define _TRISD_TRISD7_LENGTH                     0x00000001

#define _TRISD_TRISD8_POSITION                   0x00000008
#define _TRISD_TRISD8_MASK                       0x00000100
#define _TRISD_TRISD8_LENGTH                     0x00000001

#define _TRISD_TRISD9_POSITION                   0x00000009
#define _TRISD_TRISD9_MASK                       0x00000200
#define _TRISD_TRISD9_LENGTH                     0x00000001

#define _TRISD_TRISD10_POSITION                  0x0000000A
#define _TRISD_TRISD10_MASK                      0x00000400
#define _TRISD_TRISD10_LENGTH                    0x00000001

#define _TRISD_TRISD11_POSITION                  0x0000000B
#define _TRISD_TRISD11_MASK                      0x00000800
#define _TRISD_TRISD11_LENGTH                    0x00000001

#define _TRISD_TRISD12_POSITION                  0x0000000C
#define _TRISD_TRISD12_MASK                      0x00001000
#define _TRISD_TRISD12_LENGTH                    0x00000001

#define _TRISD_TRISD13_POSITION                  0x0000000D
#define _TRISD_TRISD13_MASK                      0x00002000
#define _TRISD_TRISD13_LENGTH                    0x00000001

#define _TRISD_TRISD14_POSITION                  0x0000000E
#define _TRISD_TRISD14_MASK                      0x00004000
#define _TRISD_TRISD14_LENGTH                    0x00000001

#define _TRISD_TRISD15_POSITION                  0x0000000F
#define _TRISD_TRISD15_MASK                      0x00008000
#define _TRISD_TRISD15_LENGTH                    0x00000001

#define _TRISD_w_POSITION                        0x00000000
#define _TRISD_w_MASK                            0xFFFFFFFF
#define _TRISD_w_LENGTH                          0x00000020

#define _PORTD_RD0_POSITION                      0x00000000
#define _PORTD_RD0_MASK                          0x00000001
#define _PORTD_RD0_LENGTH                        0x00000001

#define _PORTD_RD1_POSITION                      0x00000001
#define _PORTD_RD1_MASK                          0x00000002
#define _PORTD_RD1_LENGTH                        0x00000001

#define _PORTD_RD2_POSITION                      0x00000002
#define _PORTD_RD2_MASK                          0x00000004
#define _PORTD_RD2_LENGTH                        0x00000001

#define _PORTD_RD3_POSITION                      0x00000003
#define _PORTD_RD3_MASK                          0x00000008
#define _PORTD_RD3_LENGTH                        0x00000001

#define _PORTD_RD4_POSITION                      0x00000004
#define _PORTD_RD4_MASK                          0x00000010
#define _PORTD_RD4_LENGTH                        0x00000001

#define _PORTD_RD5_POSITION                      0x00000005
#define _PORTD_RD5_MASK                          0x00000020
#define _PORTD_RD5_LENGTH                        0x00000001

#define _PORTD_RD6_POSITION                      0x00000006
#define _PORTD_RD6_MASK                          0x00000040
#define _PORTD_RD6_LENGTH                        0x00000001

#define _PORTD_RD7_POSITION                      0x00000007
#define _PORTD_RD7_MASK                          0x00000080
#define _PORTD_RD7_LENGTH                        0x00000001

#define _PORTD_RD8_POSITION                      0x00000008
#define _PORTD_RD8_MASK                          0x00000100
#define _PORTD_RD8_LENGTH                        0x00000001

#define _PORTD_RD9_POSITION                      0x00000009
#define _PORTD_RD9_MASK                          0x00000200
#define _PORTD_RD9_LENGTH                        0x00000001

#define _PORTD_RD10_POSITION                     0x0000000A
#define _PORTD_RD10_MASK                         0x00000400
#define _PORTD_RD10_LENGTH                       0x00000001

#define _PORTD_RD11_POSITION                     0x0000000B
#define _PORTD_RD11_MASK                         0x00000800
#define _PORTD_RD11_LENGTH                       0x00000001

#define _PORTD_RD12_POSITION                     0x0000000C
#define _PORTD_RD12_MASK                         0x00001000
#define _PORTD_RD12_LENGTH                       0x00000001

#define _PORTD_RD13_POSITION                     0x0000000D
#define _PORTD_RD13_MASK                         0x00002000
#define _PORTD_RD13_LENGTH                       0x00000001

#define _PORTD_RD14_POSITION                     0x0000000E
#define _PORTD_RD14_MASK                         0x00004000
#define _PORTD_RD14_LENGTH                       0x00000001

#define _PORTD_RD15_POSITION                     0x0000000F
#define _PORTD_RD15_MASK                         0x00008000
#define _PORTD_RD15_LENGTH                       0x00000001

#define _PORTD_w_POSITION                        0x00000000
#define _PORTD_w_MASK                            0xFFFFFFFF
#define _PORTD_w_LENGTH                          0x00000020

#define _LATD_LATD0_POSITION                     0x00000000
#define _LATD_LATD0_MASK                         0x00000001
#define _LATD_LATD0_LENGTH                       0x00000001

#define _LATD_LATD1_POSITION                     0x00000001
#define _LATD_LATD1_MASK                         0x00000002
#define _LATD_LATD1_LENGTH                       0x00000001

#define _LATD_LATD2_POSITION                     0x00000002
#define _LATD_LATD2_MASK                         0x00000004
#define _LATD_LATD2_LENGTH                       0x00000001

#define _LATD_LATD3_POSITION                     0x00000003
#define _LATD_LATD3_MASK                         0x00000008
#define _LATD_LATD3_LENGTH                       0x00000001

#define _LATD_LATD4_POSITION                     0x00000004
#define _LATD_LATD4_MASK                         0x00000010
#define _LATD_LATD4_LENGTH                       0x00000001

#define _LATD_LATD5_POSITION                     0x00000005
#define _LATD_LATD5_MASK                         0x00000020
#define _LATD_LATD5_LENGTH                       0x00000001

#define _LATD_LATD6_POSITION                     0x00000006
#define _LATD_LATD6_MASK                         0x00000040
#define _LATD_LATD6_LENGTH                       0x00000001

#define _LATD_LATD7_POSITION                     0x00000007
#define _LATD_LATD7_MASK                         0x00000080
#define _LATD_LATD7_LENGTH                       0x00000001

#define _LATD_LATD8_POSITION                     0x00000008
#define _LATD_LATD8_MASK                         0x00000100
#define _LATD_LATD8_LENGTH                       0x00000001

#define _LATD_LATD9_POSITION                     0x00000009
#define _LATD_LATD9_MASK                         0x00000200
#define _LATD_LATD9_LENGTH                       0x00000001

#define _LATD_LATD10_POSITION                    0x0000000A
#define _LATD_LATD10_MASK                        0x00000400
#define _LATD_LATD10_LENGTH                      0x00000001

#define _LATD_LATD11_POSITION                    0x0000000B
#define _LATD_LATD11_MASK                        0x00000800
#define _LATD_LATD11_LENGTH                      0x00000001

#define _LATD_LATD12_POSITION                    0x0000000C
#define _LATD_LATD12_MASK                        0x00001000
#define _LATD_LATD12_LENGTH                      0x00000001

#define _LATD_LATD13_POSITION                    0x0000000D
#define _LATD_LATD13_MASK                        0x00002000
#define _LATD_LATD13_LENGTH                      0x00000001

#define _LATD_LATD14_POSITION                    0x0000000E
#define _LATD_LATD14_MASK                        0x00004000
#define _LATD_LATD14_LENGTH                      0x00000001

#define _LATD_LATD15_POSITION                    0x0000000F
#define _LATD_LATD15_MASK                        0x00008000
#define _LATD_LATD15_LENGTH                      0x00000001

#define _LATD_w_POSITION                         0x00000000
#define _LATD_w_MASK                             0xFFFFFFFF
#define _LATD_w_LENGTH                           0x00000020

#define _ODCD_ODCD0_POSITION                     0x00000000
#define _ODCD_ODCD0_MASK                         0x00000001
#define _ODCD_ODCD0_LENGTH                       0x00000001

#define _ODCD_ODCD1_POSITION                     0x00000001
#define _ODCD_ODCD1_MASK                         0x00000002
#define _ODCD_ODCD1_LENGTH                       0x00000001

#define _ODCD_ODCD2_POSITION                     0x00000002
#define _ODCD_ODCD2_MASK                         0x00000004
#define _ODCD_ODCD2_LENGTH                       0x00000001

#define _ODCD_ODCD3_POSITION                     0x00000003
#define _ODCD_ODCD3_MASK                         0x00000008
#define _ODCD_ODCD3_LENGTH                       0x00000001

#define _ODCD_ODCD4_POSITION                     0x00000004
#define _ODCD_ODCD4_MASK                         0x00000010
#define _ODCD_ODCD4_LENGTH                       0x00000001

#define _ODCD_ODCD5_POSITION                     0x00000005
#define _ODCD_ODCD5_MASK                         0x00000020
#define _ODCD_ODCD5_LENGTH                       0x00000001

#define _ODCD_ODCD6_POSITION                     0x00000006
#define _ODCD_ODCD6_MASK                         0x00000040
#define _ODCD_ODCD6_LENGTH                       0x00000001

#define _ODCD_ODCD7_POSITION                     0x00000007
#define _ODCD_ODCD7_MASK                         0x00000080
#define _ODCD_ODCD7_LENGTH                       0x00000001

#define _ODCD_ODCD8_POSITION                     0x00000008
#define _ODCD_ODCD8_MASK                         0x00000100
#define _ODCD_ODCD8_LENGTH                       0x00000001

#define _ODCD_ODCD9_POSITION                     0x00000009
#define _ODCD_ODCD9_MASK                         0x00000200
#define _ODCD_ODCD9_LENGTH                       0x00000001

#define _ODCD_ODCD10_POSITION                    0x0000000A
#define _ODCD_ODCD10_MASK                        0x00000400
#define _ODCD_ODCD10_LENGTH                      0x00000001

#define _ODCD_ODCD11_POSITION                    0x0000000B
#define _ODCD_ODCD11_MASK                        0x00000800
#define _ODCD_ODCD11_LENGTH                      0x00000001

#define _ODCD_ODCD12_POSITION                    0x0000000C
#define _ODCD_ODCD12_MASK                        0x00001000
#define _ODCD_ODCD12_LENGTH                      0x00000001

#define _ODCD_ODCD13_POSITION                    0x0000000D
#define _ODCD_ODCD13_MASK                        0x00002000
#define _ODCD_ODCD13_LENGTH                      0x00000001

#define _ODCD_ODCD14_POSITION                    0x0000000E
#define _ODCD_ODCD14_MASK                        0x00004000
#define _ODCD_ODCD14_LENGTH                      0x00000001

#define _ODCD_ODCD15_POSITION                    0x0000000F
#define _ODCD_ODCD15_MASK                        0x00008000
#define _ODCD_ODCD15_LENGTH                      0x00000001

#define _ODCD_w_POSITION                         0x00000000
#define _ODCD_w_MASK                             0xFFFFFFFF
#define _ODCD_w_LENGTH                           0x00000020

#define _CNPUD_CNPUD0_POSITION                   0x00000000
#define _CNPUD_CNPUD0_MASK                       0x00000001
#define _CNPUD_CNPUD0_LENGTH                     0x00000001

#define _CNPUD_CNPUD1_POSITION                   0x00000001
#define _CNPUD_CNPUD1_MASK                       0x00000002
#define _CNPUD_CNPUD1_LENGTH                     0x00000001

#define _CNPUD_CNPUD2_POSITION                   0x00000002
#define _CNPUD_CNPUD2_MASK                       0x00000004
#define _CNPUD_CNPUD2_LENGTH                     0x00000001

#define _CNPUD_CNPUD3_POSITION                   0x00000003
#define _CNPUD_CNPUD3_MASK                       0x00000008
#define _CNPUD_CNPUD3_LENGTH                     0x00000001

#define _CNPUD_CNPUD4_POSITION                   0x00000004
#define _CNPUD_CNPUD4_MASK                       0x00000010
#define _CNPUD_CNPUD4_LENGTH                     0x00000001

#define _CNPUD_CNPUD5_POSITION                   0x00000005
#define _CNPUD_CNPUD5_MASK                       0x00000020
#define _CNPUD_CNPUD5_LENGTH                     0x00000001

#define _CNPUD_CNPUD6_POSITION                   0x00000006
#define _CNPUD_CNPUD6_MASK                       0x00000040
#define _CNPUD_CNPUD6_LENGTH                     0x00000001

#define _CNPUD_CNPUD7_POSITION                   0x00000007
#define _CNPUD_CNPUD7_MASK                       0x00000080
#define _CNPUD_CNPUD7_LENGTH                     0x00000001

#define _CNPUD_CNPUD8_POSITION                   0x00000008
#define _CNPUD_CNPUD8_MASK                       0x00000100
#define _CNPUD_CNPUD8_LENGTH                     0x00000001

#define _CNPUD_CNPUD9_POSITION                   0x00000009
#define _CNPUD_CNPUD9_MASK                       0x00000200
#define _CNPUD_CNPUD9_LENGTH                     0x00000001

#define _CNPUD_CNPUD10_POSITION                  0x0000000A
#define _CNPUD_CNPUD10_MASK                      0x00000400
#define _CNPUD_CNPUD10_LENGTH                    0x00000001

#define _CNPUD_CNPUD11_POSITION                  0x0000000B
#define _CNPUD_CNPUD11_MASK                      0x00000800
#define _CNPUD_CNPUD11_LENGTH                    0x00000001

#define _CNPUD_CNPUD12_POSITION                  0x0000000C
#define _CNPUD_CNPUD12_MASK                      0x00001000
#define _CNPUD_CNPUD12_LENGTH                    0x00000001

#define _CNPUD_CNPUD13_POSITION                  0x0000000D
#define _CNPUD_CNPUD13_MASK                      0x00002000
#define _CNPUD_CNPUD13_LENGTH                    0x00000001

#define _CNPUD_CNPUD14_POSITION                  0x0000000E
#define _CNPUD_CNPUD14_MASK                      0x00004000
#define _CNPUD_CNPUD14_LENGTH                    0x00000001

#define _CNPUD_CNPUD15_POSITION                  0x0000000F
#define _CNPUD_CNPUD15_MASK                      0x00008000
#define _CNPUD_CNPUD15_LENGTH                    0x00000001

#define _CNPUD_w_POSITION                        0x00000000
#define _CNPUD_w_MASK                            0xFFFFFFFF
#define _CNPUD_w_LENGTH                          0x00000020

#define _CNPDD_CNPDD0_POSITION                   0x00000000
#define _CNPDD_CNPDD0_MASK                       0x00000001
#define _CNPDD_CNPDD0_LENGTH                     0x00000001

#define _CNPDD_CNPDD1_POSITION                   0x00000001
#define _CNPDD_CNPDD1_MASK                       0x00000002
#define _CNPDD_CNPDD1_LENGTH                     0x00000001

#define _CNPDD_CNPDD2_POSITION                   0x00000002
#define _CNPDD_CNPDD2_MASK                       0x00000004
#define _CNPDD_CNPDD2_LENGTH                     0x00000001

#define _CNPDD_CNPDD3_POSITION                   0x00000003
#define _CNPDD_CNPDD3_MASK                       0x00000008
#define _CNPDD_CNPDD3_LENGTH                     0x00000001

#define _CNPDD_CNPDD4_POSITION                   0x00000004
#define _CNPDD_CNPDD4_MASK                       0x00000010
#define _CNPDD_CNPDD4_LENGTH                     0x00000001

#define _CNPDD_CNPDD5_POSITION                   0x00000005
#define _CNPDD_CNPDD5_MASK                       0x00000020
#define _CNPDD_CNPDD5_LENGTH                     0x00000001

#define _CNPDD_CNPDD6_POSITION                   0x00000006
#define _CNPDD_CNPDD6_MASK                       0x00000040
#define _CNPDD_CNPDD6_LENGTH                     0x00000001

#define _CNPDD_CNPDD7_POSITION                   0x00000007
#define _CNPDD_CNPDD7_MASK                       0x00000080
#define _CNPDD_CNPDD7_LENGTH                     0x00000001

#define _CNPDD_CNPDD8_POSITION                   0x00000008
#define _CNPDD_CNPDD8_MASK                       0x00000100
#define _CNPDD_CNPDD8_LENGTH                     0x00000001

#define _CNPDD_CNPDD9_POSITION                   0x00000009
#define _CNPDD_CNPDD9_MASK                       0x00000200
#define _CNPDD_CNPDD9_LENGTH                     0x00000001

#define _CNPDD_CNPDD10_POSITION                  0x0000000A
#define _CNPDD_CNPDD10_MASK                      0x00000400
#define _CNPDD_CNPDD10_LENGTH                    0x00000001

#define _CNPDD_CNPDD11_POSITION                  0x0000000B
#define _CNPDD_CNPDD11_MASK                      0x00000800
#define _CNPDD_CNPDD11_LENGTH                    0x00000001

#define _CNPDD_CNPDD12_POSITION                  0x0000000C
#define _CNPDD_CNPDD12_MASK                      0x00001000
#define _CNPDD_CNPDD12_LENGTH                    0x00000001

#define _CNPDD_CNPDD13_POSITION                  0x0000000D
#define _CNPDD_CNPDD13_MASK                      0x00002000
#define _CNPDD_CNPDD13_LENGTH                    0x00000001

#define _CNPDD_CNPDD14_POSITION                  0x0000000E
#define _CNPDD_CNPDD14_MASK                      0x00004000
#define _CNPDD_CNPDD14_LENGTH                    0x00000001

#define _CNPDD_CNPDD15_POSITION                  0x0000000F
#define _CNPDD_CNPDD15_MASK                      0x00008000
#define _CNPDD_CNPDD15_LENGTH                    0x00000001

#define _CNPDD_w_POSITION                        0x00000000
#define _CNPDD_w_MASK                            0xFFFFFFFF
#define _CNPDD_w_LENGTH                          0x00000020

#define _CNCOND_SIDL_POSITION                    0x0000000D
#define _CNCOND_SIDL_MASK                        0x00002000
#define _CNCOND_SIDL_LENGTH                      0x00000001

#define _CNCOND_ON_POSITION                      0x0000000F
#define _CNCOND_ON_MASK                          0x00008000
#define _CNCOND_ON_LENGTH                        0x00000001

#define _CNCOND_w_POSITION                       0x00000000
#define _CNCOND_w_MASK                           0xFFFFFFFF
#define _CNCOND_w_LENGTH                         0x00000020

#define _CNEND_CNIED0_POSITION                   0x00000000
#define _CNEND_CNIED0_MASK                       0x00000001
#define _CNEND_CNIED0_LENGTH                     0x00000001

#define _CNEND_CNIED1_POSITION                   0x00000001
#define _CNEND_CNIED1_MASK                       0x00000002
#define _CNEND_CNIED1_LENGTH                     0x00000001

#define _CNEND_CNIED2_POSITION                   0x00000002
#define _CNEND_CNIED2_MASK                       0x00000004
#define _CNEND_CNIED2_LENGTH                     0x00000001

#define _CNEND_CNIED3_POSITION                   0x00000003
#define _CNEND_CNIED3_MASK                       0x00000008
#define _CNEND_CNIED3_LENGTH                     0x00000001

#define _CNEND_CNIED4_POSITION                   0x00000004
#define _CNEND_CNIED4_MASK                       0x00000010
#define _CNEND_CNIED4_LENGTH                     0x00000001

#define _CNEND_CNIED5_POSITION                   0x00000005
#define _CNEND_CNIED5_MASK                       0x00000020
#define _CNEND_CNIED5_LENGTH                     0x00000001

#define _CNEND_CNIED6_POSITION                   0x00000006
#define _CNEND_CNIED6_MASK                       0x00000040
#define _CNEND_CNIED6_LENGTH                     0x00000001

#define _CNEND_CNIED7_POSITION                   0x00000007
#define _CNEND_CNIED7_MASK                       0x00000080
#define _CNEND_CNIED7_LENGTH                     0x00000001

#define _CNEND_CNIED8_POSITION                   0x00000008
#define _CNEND_CNIED8_MASK                       0x00000100
#define _CNEND_CNIED8_LENGTH                     0x00000001

#define _CNEND_CNIED9_POSITION                   0x00000009
#define _CNEND_CNIED9_MASK                       0x00000200
#define _CNEND_CNIED9_LENGTH                     0x00000001

#define _CNEND_CNIED10_POSITION                  0x0000000A
#define _CNEND_CNIED10_MASK                      0x00000400
#define _CNEND_CNIED10_LENGTH                    0x00000001

#define _CNEND_CNIED11_POSITION                  0x0000000B
#define _CNEND_CNIED11_MASK                      0x00000800
#define _CNEND_CNIED11_LENGTH                    0x00000001

#define _CNEND_CNIED12_POSITION                  0x0000000C
#define _CNEND_CNIED12_MASK                      0x00001000
#define _CNEND_CNIED12_LENGTH                    0x00000001

#define _CNEND_CNIED13_POSITION                  0x0000000D
#define _CNEND_CNIED13_MASK                      0x00002000
#define _CNEND_CNIED13_LENGTH                    0x00000001

#define _CNEND_CNIED14_POSITION                  0x0000000E
#define _CNEND_CNIED14_MASK                      0x00004000
#define _CNEND_CNIED14_LENGTH                    0x00000001

#define _CNEND_CNIED15_POSITION                  0x0000000F
#define _CNEND_CNIED15_MASK                      0x00008000
#define _CNEND_CNIED15_LENGTH                    0x00000001

#define _CNEND_w_POSITION                        0x00000000
#define _CNEND_w_MASK                            0xFFFFFFFF
#define _CNEND_w_LENGTH                          0x00000020

#define _CNSTATD_CNSTATD0_POSITION               0x00000000
#define _CNSTATD_CNSTATD0_MASK                   0x00000001
#define _CNSTATD_CNSTATD0_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD1_POSITION               0x00000001
#define _CNSTATD_CNSTATD1_MASK                   0x00000002
#define _CNSTATD_CNSTATD1_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD2_POSITION               0x00000002
#define _CNSTATD_CNSTATD2_MASK                   0x00000004
#define _CNSTATD_CNSTATD2_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD3_POSITION               0x00000003
#define _CNSTATD_CNSTATD3_MASK                   0x00000008
#define _CNSTATD_CNSTATD3_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD4_POSITION               0x00000004
#define _CNSTATD_CNSTATD4_MASK                   0x00000010
#define _CNSTATD_CNSTATD4_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD5_POSITION               0x00000005
#define _CNSTATD_CNSTATD5_MASK                   0x00000020
#define _CNSTATD_CNSTATD5_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD6_POSITION               0x00000006
#define _CNSTATD_CNSTATD6_MASK                   0x00000040
#define _CNSTATD_CNSTATD6_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD7_POSITION               0x00000007
#define _CNSTATD_CNSTATD7_MASK                   0x00000080
#define _CNSTATD_CNSTATD7_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD8_POSITION               0x00000008
#define _CNSTATD_CNSTATD8_MASK                   0x00000100
#define _CNSTATD_CNSTATD8_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD9_POSITION               0x00000009
#define _CNSTATD_CNSTATD9_MASK                   0x00000200
#define _CNSTATD_CNSTATD9_LENGTH                 0x00000001

#define _CNSTATD_CNSTATD10_POSITION              0x0000000A
#define _CNSTATD_CNSTATD10_MASK                  0x00000400
#define _CNSTATD_CNSTATD10_LENGTH                0x00000001

#define _CNSTATD_CNSTATD11_POSITION              0x0000000B
#define _CNSTATD_CNSTATD11_MASK                  0x00000800
#define _CNSTATD_CNSTATD11_LENGTH                0x00000001

#define _CNSTATD_CNSTATD12_POSITION              0x0000000C
#define _CNSTATD_CNSTATD12_MASK                  0x00001000
#define _CNSTATD_CNSTATD12_LENGTH                0x00000001

#define _CNSTATD_CNSTATD13_POSITION              0x0000000D
#define _CNSTATD_CNSTATD13_MASK                  0x00002000
#define _CNSTATD_CNSTATD13_LENGTH                0x00000001

#define _CNSTATD_CNSTATD14_POSITION              0x0000000E
#define _CNSTATD_CNSTATD14_MASK                  0x00004000
#define _CNSTATD_CNSTATD14_LENGTH                0x00000001

#define _CNSTATD_CNSTATD15_POSITION              0x0000000F
#define _CNSTATD_CNSTATD15_MASK                  0x00008000
#define _CNSTATD_CNSTATD15_LENGTH                0x00000001

#define _CNSTATD_w_POSITION                      0x00000000
#define _CNSTATD_w_MASK                          0xFFFFFFFF
#define _CNSTATD_w_LENGTH                        0x00000020

#define _ANSELE_ANSE2_POSITION                   0x00000002
#define _ANSELE_ANSE2_MASK                       0x00000004
#define _ANSELE_ANSE2_LENGTH                     0x00000001

#define _ANSELE_ANSE4_POSITION                   0x00000004
#define _ANSELE_ANSE4_MASK                       0x00000010
#define _ANSELE_ANSE4_LENGTH                     0x00000001

#define _ANSELE_ANSE5_POSITION                   0x00000005
#define _ANSELE_ANSE5_MASK                       0x00000020
#define _ANSELE_ANSE5_LENGTH                     0x00000001

#define _ANSELE_ANSE6_POSITION                   0x00000006
#define _ANSELE_ANSE6_MASK                       0x00000040
#define _ANSELE_ANSE6_LENGTH                     0x00000001

#define _ANSELE_ANSE7_POSITION                   0x00000007
#define _ANSELE_ANSE7_MASK                       0x00000080
#define _ANSELE_ANSE7_LENGTH                     0x00000001

#define _ANSELE_w_POSITION                       0x00000000
#define _ANSELE_w_MASK                           0xFFFFFFFF
#define _ANSELE_w_LENGTH                         0x00000020

#define _TRISE_TRISE0_POSITION                   0x00000000
#define _TRISE_TRISE0_MASK                       0x00000001
#define _TRISE_TRISE0_LENGTH                     0x00000001

#define _TRISE_TRISE1_POSITION                   0x00000001
#define _TRISE_TRISE1_MASK                       0x00000002
#define _TRISE_TRISE1_LENGTH                     0x00000001

#define _TRISE_TRISE2_POSITION                   0x00000002
#define _TRISE_TRISE2_MASK                       0x00000004
#define _TRISE_TRISE2_LENGTH                     0x00000001

#define _TRISE_TRISE3_POSITION                   0x00000003
#define _TRISE_TRISE3_MASK                       0x00000008
#define _TRISE_TRISE3_LENGTH                     0x00000001

#define _TRISE_TRISE4_POSITION                   0x00000004
#define _TRISE_TRISE4_MASK                       0x00000010
#define _TRISE_TRISE4_LENGTH                     0x00000001

#define _TRISE_TRISE5_POSITION                   0x00000005
#define _TRISE_TRISE5_MASK                       0x00000020
#define _TRISE_TRISE5_LENGTH                     0x00000001

#define _TRISE_TRISE6_POSITION                   0x00000006
#define _TRISE_TRISE6_MASK                       0x00000040
#define _TRISE_TRISE6_LENGTH                     0x00000001

#define _TRISE_TRISE7_POSITION                   0x00000007
#define _TRISE_TRISE7_MASK                       0x00000080
#define _TRISE_TRISE7_LENGTH                     0x00000001

#define _TRISE_TRISE8_POSITION                   0x00000008
#define _TRISE_TRISE8_MASK                       0x00000100
#define _TRISE_TRISE8_LENGTH                     0x00000001

#define _TRISE_TRISE9_POSITION                   0x00000009
#define _TRISE_TRISE9_MASK                       0x00000200
#define _TRISE_TRISE9_LENGTH                     0x00000001

#define _TRISE_w_POSITION                        0x00000000
#define _TRISE_w_MASK                            0xFFFFFFFF
#define _TRISE_w_LENGTH                          0x00000020

#define _PORTE_RE0_POSITION                      0x00000000
#define _PORTE_RE0_MASK                          0x00000001
#define _PORTE_RE0_LENGTH                        0x00000001

#define _PORTE_RE1_POSITION                      0x00000001
#define _PORTE_RE1_MASK                          0x00000002
#define _PORTE_RE1_LENGTH                        0x00000001

#define _PORTE_RE2_POSITION                      0x00000002
#define _PORTE_RE2_MASK                          0x00000004
#define _PORTE_RE2_LENGTH                        0x00000001

#define _PORTE_RE3_POSITION                      0x00000003
#define _PORTE_RE3_MASK                          0x00000008
#define _PORTE_RE3_LENGTH                        0x00000001

#define _PORTE_RE4_POSITION                      0x00000004
#define _PORTE_RE4_MASK                          0x00000010
#define _PORTE_RE4_LENGTH                        0x00000001

#define _PORTE_RE5_POSITION                      0x00000005
#define _PORTE_RE5_MASK                          0x00000020
#define _PORTE_RE5_LENGTH                        0x00000001

#define _PORTE_RE6_POSITION                      0x00000006
#define _PORTE_RE6_MASK                          0x00000040
#define _PORTE_RE6_LENGTH                        0x00000001

#define _PORTE_RE7_POSITION                      0x00000007
#define _PORTE_RE7_MASK                          0x00000080
#define _PORTE_RE7_LENGTH                        0x00000001

#define _PORTE_RE8_POSITION                      0x00000008
#define _PORTE_RE8_MASK                          0x00000100
#define _PORTE_RE8_LENGTH                        0x00000001

#define _PORTE_RE9_POSITION                      0x00000009
#define _PORTE_RE9_MASK                          0x00000200
#define _PORTE_RE9_LENGTH                        0x00000001

#define _PORTE_w_POSITION                        0x00000000
#define _PORTE_w_MASK                            0xFFFFFFFF
#define _PORTE_w_LENGTH                          0x00000020

#define _LATE_LATE0_POSITION                     0x00000000
#define _LATE_LATE0_MASK                         0x00000001
#define _LATE_LATE0_LENGTH                       0x00000001

#define _LATE_LATE1_POSITION                     0x00000001
#define _LATE_LATE1_MASK                         0x00000002
#define _LATE_LATE1_LENGTH                       0x00000001

#define _LATE_LATE2_POSITION                     0x00000002
#define _LATE_LATE2_MASK                         0x00000004
#define _LATE_LATE2_LENGTH                       0x00000001

#define _LATE_LATE3_POSITION                     0x00000003
#define _LATE_LATE3_MASK                         0x00000008
#define _LATE_LATE3_LENGTH                       0x00000001

#define _LATE_LATE4_POSITION                     0x00000004
#define _LATE_LATE4_MASK                         0x00000010
#define _LATE_LATE4_LENGTH                       0x00000001

#define _LATE_LATE5_POSITION                     0x00000005
#define _LATE_LATE5_MASK                         0x00000020
#define _LATE_LATE5_LENGTH                       0x00000001

#define _LATE_LATE6_POSITION                     0x00000006
#define _LATE_LATE6_MASK                         0x00000040
#define _LATE_LATE6_LENGTH                       0x00000001

#define _LATE_LATE7_POSITION                     0x00000007
#define _LATE_LATE7_MASK                         0x00000080
#define _LATE_LATE7_LENGTH                       0x00000001

#define _LATE_LATE8_POSITION                     0x00000008
#define _LATE_LATE8_MASK                         0x00000100
#define _LATE_LATE8_LENGTH                       0x00000001

#define _LATE_LATE9_POSITION                     0x00000009
#define _LATE_LATE9_MASK                         0x00000200
#define _LATE_LATE9_LENGTH                       0x00000001

#define _LATE_w_POSITION                         0x00000000
#define _LATE_w_MASK                             0xFFFFFFFF
#define _LATE_w_LENGTH                           0x00000020

#define _ODCE_ODCE0_POSITION                     0x00000000
#define _ODCE_ODCE0_MASK                         0x00000001
#define _ODCE_ODCE0_LENGTH                       0x00000001

#define _ODCE_ODCE1_POSITION                     0x00000001
#define _ODCE_ODCE1_MASK                         0x00000002
#define _ODCE_ODCE1_LENGTH                       0x00000001

#define _ODCE_ODCE2_POSITION                     0x00000002
#define _ODCE_ODCE2_MASK                         0x00000004
#define _ODCE_ODCE2_LENGTH                       0x00000001

#define _ODCE_ODCE3_POSITION                     0x00000003
#define _ODCE_ODCE3_MASK                         0x00000008
#define _ODCE_ODCE3_LENGTH                       0x00000001

#define _ODCE_ODCE4_POSITION                     0x00000004
#define _ODCE_ODCE4_MASK                         0x00000010
#define _ODCE_ODCE4_LENGTH                       0x00000001

#define _ODCE_ODCE5_POSITION                     0x00000005
#define _ODCE_ODCE5_MASK                         0x00000020
#define _ODCE_ODCE5_LENGTH                       0x00000001

#define _ODCE_ODCE6_POSITION                     0x00000006
#define _ODCE_ODCE6_MASK                         0x00000040
#define _ODCE_ODCE6_LENGTH                       0x00000001

#define _ODCE_ODCE7_POSITION                     0x00000007
#define _ODCE_ODCE7_MASK                         0x00000080
#define _ODCE_ODCE7_LENGTH                       0x00000001

#define _ODCE_ODCE8_POSITION                     0x00000008
#define _ODCE_ODCE8_MASK                         0x00000100
#define _ODCE_ODCE8_LENGTH                       0x00000001

#define _ODCE_ODCE9_POSITION                     0x00000009
#define _ODCE_ODCE9_MASK                         0x00000200
#define _ODCE_ODCE9_LENGTH                       0x00000001

#define _ODCE_w_POSITION                         0x00000000
#define _ODCE_w_MASK                             0xFFFFFFFF
#define _ODCE_w_LENGTH                           0x00000020

#define _CNPUE_CNPUE0_POSITION                   0x00000000
#define _CNPUE_CNPUE0_MASK                       0x00000001
#define _CNPUE_CNPUE0_LENGTH                     0x00000001

#define _CNPUE_CNPUE1_POSITION                   0x00000001
#define _CNPUE_CNPUE1_MASK                       0x00000002
#define _CNPUE_CNPUE1_LENGTH                     0x00000001

#define _CNPUE_CNPUE2_POSITION                   0x00000002
#define _CNPUE_CNPUE2_MASK                       0x00000004
#define _CNPUE_CNPUE2_LENGTH                     0x00000001

#define _CNPUE_CNPUE3_POSITION                   0x00000003
#define _CNPUE_CNPUE3_MASK                       0x00000008
#define _CNPUE_CNPUE3_LENGTH                     0x00000001

#define _CNPUE_CNPUE4_POSITION                   0x00000004
#define _CNPUE_CNPUE4_MASK                       0x00000010
#define _CNPUE_CNPUE4_LENGTH                     0x00000001

#define _CNPUE_CNPUE5_POSITION                   0x00000005
#define _CNPUE_CNPUE5_MASK                       0x00000020
#define _CNPUE_CNPUE5_LENGTH                     0x00000001

#define _CNPUE_CNPUE6_POSITION                   0x00000006
#define _CNPUE_CNPUE6_MASK                       0x00000040
#define _CNPUE_CNPUE6_LENGTH                     0x00000001

#define _CNPUE_CNPUE7_POSITION                   0x00000007
#define _CNPUE_CNPUE7_MASK                       0x00000080
#define _CNPUE_CNPUE7_LENGTH                     0x00000001

#define _CNPUE_CNPUE8_POSITION                   0x00000008
#define _CNPUE_CNPUE8_MASK                       0x00000100
#define _CNPUE_CNPUE8_LENGTH                     0x00000001

#define _CNPUE_CNPUE9_POSITION                   0x00000009
#define _CNPUE_CNPUE9_MASK                       0x00000200
#define _CNPUE_CNPUE9_LENGTH                     0x00000001

#define _CNPUE_w_POSITION                        0x00000000
#define _CNPUE_w_MASK                            0xFFFFFFFF
#define _CNPUE_w_LENGTH                          0x00000020

#define _CNPDE_CNPDE0_POSITION                   0x00000000
#define _CNPDE_CNPDE0_MASK                       0x00000001
#define _CNPDE_CNPDE0_LENGTH                     0x00000001

#define _CNPDE_CNPDE1_POSITION                   0x00000001
#define _CNPDE_CNPDE1_MASK                       0x00000002
#define _CNPDE_CNPDE1_LENGTH                     0x00000001

#define _CNPDE_CNPDE2_POSITION                   0x00000002
#define _CNPDE_CNPDE2_MASK                       0x00000004
#define _CNPDE_CNPDE2_LENGTH                     0x00000001

#define _CNPDE_CNPDE3_POSITION                   0x00000003
#define _CNPDE_CNPDE3_MASK                       0x00000008
#define _CNPDE_CNPDE3_LENGTH                     0x00000001

#define _CNPDE_CNPDE4_POSITION                   0x00000004
#define _CNPDE_CNPDE4_MASK                       0x00000010
#define _CNPDE_CNPDE4_LENGTH                     0x00000001

#define _CNPDE_CNPDE5_POSITION                   0x00000005
#define _CNPDE_CNPDE5_MASK                       0x00000020
#define _CNPDE_CNPDE5_LENGTH                     0x00000001

#define _CNPDE_CNPDE6_POSITION                   0x00000006
#define _CNPDE_CNPDE6_MASK                       0x00000040
#define _CNPDE_CNPDE6_LENGTH                     0x00000001

#define _CNPDE_CNPDE7_POSITION                   0x00000007
#define _CNPDE_CNPDE7_MASK                       0x00000080
#define _CNPDE_CNPDE7_LENGTH                     0x00000001

#define _CNPDE_CNPDE8_POSITION                   0x00000008
#define _CNPDE_CNPDE8_MASK                       0x00000100
#define _CNPDE_CNPDE8_LENGTH                     0x00000001

#define _CNPDE_CNPDE9_POSITION                   0x00000009
#define _CNPDE_CNPDE9_MASK                       0x00000200
#define _CNPDE_CNPDE9_LENGTH                     0x00000001

#define _CNPDE_w_POSITION                        0x00000000
#define _CNPDE_w_MASK                            0xFFFFFFFF
#define _CNPDE_w_LENGTH                          0x00000020

#define _CNCONE_SIDL_POSITION                    0x0000000D
#define _CNCONE_SIDL_MASK                        0x00002000
#define _CNCONE_SIDL_LENGTH                      0x00000001

#define _CNCONE_ON_POSITION                      0x0000000F
#define _CNCONE_ON_MASK                          0x00008000
#define _CNCONE_ON_LENGTH                        0x00000001

#define _CNCONE_w_POSITION                       0x00000000
#define _CNCONE_w_MASK                           0xFFFFFFFF
#define _CNCONE_w_LENGTH                         0x00000020

#define _CNENE_CNIEE0_POSITION                   0x00000000
#define _CNENE_CNIEE0_MASK                       0x00000001
#define _CNENE_CNIEE0_LENGTH                     0x00000001

#define _CNENE_CNIEE1_POSITION                   0x00000001
#define _CNENE_CNIEE1_MASK                       0x00000002
#define _CNENE_CNIEE1_LENGTH                     0x00000001

#define _CNENE_CNIEE2_POSITION                   0x00000002
#define _CNENE_CNIEE2_MASK                       0x00000004
#define _CNENE_CNIEE2_LENGTH                     0x00000001

#define _CNENE_CNIEE3_POSITION                   0x00000003
#define _CNENE_CNIEE3_MASK                       0x00000008
#define _CNENE_CNIEE3_LENGTH                     0x00000001

#define _CNENE_CNIEE4_POSITION                   0x00000004
#define _CNENE_CNIEE4_MASK                       0x00000010
#define _CNENE_CNIEE4_LENGTH                     0x00000001

#define _CNENE_CNIEE5_POSITION                   0x00000005
#define _CNENE_CNIEE5_MASK                       0x00000020
#define _CNENE_CNIEE5_LENGTH                     0x00000001

#define _CNENE_CNIEE6_POSITION                   0x00000006
#define _CNENE_CNIEE6_MASK                       0x00000040
#define _CNENE_CNIEE6_LENGTH                     0x00000001

#define _CNENE_CNIEE7_POSITION                   0x00000007
#define _CNENE_CNIEE7_MASK                       0x00000080
#define _CNENE_CNIEE7_LENGTH                     0x00000001

#define _CNENE_CNIEE8_POSITION                   0x00000008
#define _CNENE_CNIEE8_MASK                       0x00000100
#define _CNENE_CNIEE8_LENGTH                     0x00000001

#define _CNENE_CNIEE9_POSITION                   0x00000009
#define _CNENE_CNIEE9_MASK                       0x00000200
#define _CNENE_CNIEE9_LENGTH                     0x00000001

#define _CNENE_w_POSITION                        0x00000000
#define _CNENE_w_MASK                            0xFFFFFFFF
#define _CNENE_w_LENGTH                          0x00000020

#define _CNSTATE_CNSTATE0_POSITION               0x00000000
#define _CNSTATE_CNSTATE0_MASK                   0x00000001
#define _CNSTATE_CNSTATE0_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE1_POSITION               0x00000001
#define _CNSTATE_CNSTATE1_MASK                   0x00000002
#define _CNSTATE_CNSTATE1_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE2_POSITION               0x00000002
#define _CNSTATE_CNSTATE2_MASK                   0x00000004
#define _CNSTATE_CNSTATE2_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE3_POSITION               0x00000003
#define _CNSTATE_CNSTATE3_MASK                   0x00000008
#define _CNSTATE_CNSTATE3_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE4_POSITION               0x00000004
#define _CNSTATE_CNSTATE4_MASK                   0x00000010
#define _CNSTATE_CNSTATE4_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE5_POSITION               0x00000005
#define _CNSTATE_CNSTATE5_MASK                   0x00000020
#define _CNSTATE_CNSTATE5_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE6_POSITION               0x00000006
#define _CNSTATE_CNSTATE6_MASK                   0x00000040
#define _CNSTATE_CNSTATE6_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE7_POSITION               0x00000007
#define _CNSTATE_CNSTATE7_MASK                   0x00000080
#define _CNSTATE_CNSTATE7_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE8_POSITION               0x00000008
#define _CNSTATE_CNSTATE8_MASK                   0x00000100
#define _CNSTATE_CNSTATE8_LENGTH                 0x00000001

#define _CNSTATE_CNSTATE9_POSITION               0x00000009
#define _CNSTATE_CNSTATE9_MASK                   0x00000200
#define _CNSTATE_CNSTATE9_LENGTH                 0x00000001

#define _CNSTATE_w_POSITION                      0x00000000
#define _CNSTATE_w_MASK                          0xFFFFFFFF
#define _CNSTATE_w_LENGTH                        0x00000020

#define _ANSELF_w_POSITION                       0x00000000
#define _ANSELF_w_MASK                           0xFFFFFFFF
#define _ANSELF_w_LENGTH                         0x00000020

#define _TRISF_TRISF0_POSITION                   0x00000000
#define _TRISF_TRISF0_MASK                       0x00000001
#define _TRISF_TRISF0_LENGTH                     0x00000001

#define _TRISF_TRISF1_POSITION                   0x00000001
#define _TRISF_TRISF1_MASK                       0x00000002
#define _TRISF_TRISF1_LENGTH                     0x00000001

#define _TRISF_TRISF2_POSITION                   0x00000002
#define _TRISF_TRISF2_MASK                       0x00000004
#define _TRISF_TRISF2_LENGTH                     0x00000001

#define _TRISF_TRISF3_POSITION                   0x00000003
#define _TRISF_TRISF3_MASK                       0x00000008
#define _TRISF_TRISF3_LENGTH                     0x00000001

#define _TRISF_TRISF4_POSITION                   0x00000004
#define _TRISF_TRISF4_MASK                       0x00000010
#define _TRISF_TRISF4_LENGTH                     0x00000001

#define _TRISF_TRISF5_POSITION                   0x00000005
#define _TRISF_TRISF5_MASK                       0x00000020
#define _TRISF_TRISF5_LENGTH                     0x00000001

#define _TRISF_TRISF6_POSITION                   0x00000006
#define _TRISF_TRISF6_MASK                       0x00000040
#define _TRISF_TRISF6_LENGTH                     0x00000001

#define _TRISF_TRISF7_POSITION                   0x00000007
#define _TRISF_TRISF7_MASK                       0x00000080
#define _TRISF_TRISF7_LENGTH                     0x00000001

#define _TRISF_TRISF8_POSITION                   0x00000008
#define _TRISF_TRISF8_MASK                       0x00000100
#define _TRISF_TRISF8_LENGTH                     0x00000001

#define _TRISF_TRISF12_POSITION                  0x0000000C
#define _TRISF_TRISF12_MASK                      0x00001000
#define _TRISF_TRISF12_LENGTH                    0x00000001

#define _TRISF_TRISF13_POSITION                  0x0000000D
#define _TRISF_TRISF13_MASK                      0x00002000
#define _TRISF_TRISF13_LENGTH                    0x00000001

#define _TRISF_w_POSITION                        0x00000000
#define _TRISF_w_MASK                            0xFFFFFFFF
#define _TRISF_w_LENGTH                          0x00000020

#define _PORTF_RF0_POSITION                      0x00000000
#define _PORTF_RF0_MASK                          0x00000001
#define _PORTF_RF0_LENGTH                        0x00000001

#define _PORTF_RF1_POSITION                      0x00000001
#define _PORTF_RF1_MASK                          0x00000002
#define _PORTF_RF1_LENGTH                        0x00000001

#define _PORTF_RF2_POSITION                      0x00000002
#define _PORTF_RF2_MASK                          0x00000004
#define _PORTF_RF2_LENGTH                        0x00000001

#define _PORTF_RF3_POSITION                      0x00000003
#define _PORTF_RF3_MASK                          0x00000008
#define _PORTF_RF3_LENGTH                        0x00000001

#define _PORTF_RF4_POSITION                      0x00000004
#define _PORTF_RF4_MASK                          0x00000010
#define _PORTF_RF4_LENGTH                        0x00000001

#define _PORTF_RF5_POSITION                      0x00000005
#define _PORTF_RF5_MASK                          0x00000020
#define _PORTF_RF5_LENGTH                        0x00000001

#define _PORTF_RF6_POSITION                      0x00000006
#define _PORTF_RF6_MASK                          0x00000040
#define _PORTF_RF6_LENGTH                        0x00000001

#define _PORTF_RF7_POSITION                      0x00000007
#define _PORTF_RF7_MASK                          0x00000080
#define _PORTF_RF7_LENGTH                        0x00000001

#define _PORTF_RF8_POSITION                      0x00000008
#define _PORTF_RF8_MASK                          0x00000100
#define _PORTF_RF8_LENGTH                        0x00000001

#define _PORTF_RF12_POSITION                     0x0000000C
#define _PORTF_RF12_MASK                         0x00001000
#define _PORTF_RF12_LENGTH                       0x00000001

#define _PORTF_RF13_POSITION                     0x0000000D
#define _PORTF_RF13_MASK                         0x00002000
#define _PORTF_RF13_LENGTH                       0x00000001

#define _PORTF_w_POSITION                        0x00000000
#define _PORTF_w_MASK                            0xFFFFFFFF
#define _PORTF_w_LENGTH                          0x00000020

#define _LATF_LATF0_POSITION                     0x00000000
#define _LATF_LATF0_MASK                         0x00000001
#define _LATF_LATF0_LENGTH                       0x00000001

#define _LATF_LATF1_POSITION                     0x00000001
#define _LATF_LATF1_MASK                         0x00000002
#define _LATF_LATF1_LENGTH                       0x00000001

#define _LATF_LATF2_POSITION                     0x00000002
#define _LATF_LATF2_MASK                         0x00000004
#define _LATF_LATF2_LENGTH                       0x00000001

#define _LATF_LATF3_POSITION                     0x00000003
#define _LATF_LATF3_MASK                         0x00000008
#define _LATF_LATF3_LENGTH                       0x00000001

#define _LATF_LATF4_POSITION                     0x00000004
#define _LATF_LATF4_MASK                         0x00000010
#define _LATF_LATF4_LENGTH                       0x00000001

#define _LATF_LATF5_POSITION                     0x00000005
#define _LATF_LATF5_MASK                         0x00000020
#define _LATF_LATF5_LENGTH                       0x00000001

#define _LATF_LATF6_POSITION                     0x00000006
#define _LATF_LATF6_MASK                         0x00000040
#define _LATF_LATF6_LENGTH                       0x00000001

#define _LATF_LATF7_POSITION                     0x00000007
#define _LATF_LATF7_MASK                         0x00000080
#define _LATF_LATF7_LENGTH                       0x00000001

#define _LATF_LATF8_POSITION                     0x00000008
#define _LATF_LATF8_MASK                         0x00000100
#define _LATF_LATF8_LENGTH                       0x00000001

#define _LATF_LATF12_POSITION                    0x0000000C
#define _LATF_LATF12_MASK                        0x00001000
#define _LATF_LATF12_LENGTH                      0x00000001

#define _LATF_LATF13_POSITION                    0x0000000D
#define _LATF_LATF13_MASK                        0x00002000
#define _LATF_LATF13_LENGTH                      0x00000001

#define _LATF_w_POSITION                         0x00000000
#define _LATF_w_MASK                             0xFFFFFFFF
#define _LATF_w_LENGTH                           0x00000020

#define _ODCF_ODCF0_POSITION                     0x00000000
#define _ODCF_ODCF0_MASK                         0x00000001
#define _ODCF_ODCF0_LENGTH                       0x00000001

#define _ODCF_ODCF1_POSITION                     0x00000001
#define _ODCF_ODCF1_MASK                         0x00000002
#define _ODCF_ODCF1_LENGTH                       0x00000001

#define _ODCF_ODCF2_POSITION                     0x00000002
#define _ODCF_ODCF2_MASK                         0x00000004
#define _ODCF_ODCF2_LENGTH                       0x00000001

#define _ODCF_ODCF3_POSITION                     0x00000003
#define _ODCF_ODCF3_MASK                         0x00000008
#define _ODCF_ODCF3_LENGTH                       0x00000001

#define _ODCF_ODCF4_POSITION                     0x00000004
#define _ODCF_ODCF4_MASK                         0x00000010
#define _ODCF_ODCF4_LENGTH                       0x00000001

#define _ODCF_ODCF5_POSITION                     0x00000005
#define _ODCF_ODCF5_MASK                         0x00000020
#define _ODCF_ODCF5_LENGTH                       0x00000001

#define _ODCF_ODCF6_POSITION                     0x00000006
#define _ODCF_ODCF6_MASK                         0x00000040
#define _ODCF_ODCF6_LENGTH                       0x00000001

#define _ODCF_ODCF7_POSITION                     0x00000007
#define _ODCF_ODCF7_MASK                         0x00000080
#define _ODCF_ODCF7_LENGTH                       0x00000001

#define _ODCF_ODCF8_POSITION                     0x00000008
#define _ODCF_ODCF8_MASK                         0x00000100
#define _ODCF_ODCF8_LENGTH                       0x00000001

#define _ODCF_ODCF12_POSITION                    0x0000000C
#define _ODCF_ODCF12_MASK                        0x00001000
#define _ODCF_ODCF12_LENGTH                      0x00000001

#define _ODCF_ODCF13_POSITION                    0x0000000D
#define _ODCF_ODCF13_MASK                        0x00002000
#define _ODCF_ODCF13_LENGTH                      0x00000001

#define _ODCF_w_POSITION                         0x00000000
#define _ODCF_w_MASK                             0xFFFFFFFF
#define _ODCF_w_LENGTH                           0x00000020

#define _CNPUF_CNPUF0_POSITION                   0x00000000
#define _CNPUF_CNPUF0_MASK                       0x00000001
#define _CNPUF_CNPUF0_LENGTH                     0x00000001

#define _CNPUF_CNPUF1_POSITION                   0x00000001
#define _CNPUF_CNPUF1_MASK                       0x00000002
#define _CNPUF_CNPUF1_LENGTH                     0x00000001

#define _CNPUF_CNPUF2_POSITION                   0x00000002
#define _CNPUF_CNPUF2_MASK                       0x00000004
#define _CNPUF_CNPUF2_LENGTH                     0x00000001

#define _CNPUF_CNPUF3_POSITION                   0x00000003
#define _CNPUF_CNPUF3_MASK                       0x00000008
#define _CNPUF_CNPUF3_LENGTH                     0x00000001

#define _CNPUF_CNPUF4_POSITION                   0x00000004
#define _CNPUF_CNPUF4_MASK                       0x00000010
#define _CNPUF_CNPUF4_LENGTH                     0x00000001

#define _CNPUF_CNPUF5_POSITION                   0x00000005
#define _CNPUF_CNPUF5_MASK                       0x00000020
#define _CNPUF_CNPUF5_LENGTH                     0x00000001

#define _CNPUF_CNPUF6_POSITION                   0x00000006
#define _CNPUF_CNPUF6_MASK                       0x00000040
#define _CNPUF_CNPUF6_LENGTH                     0x00000001

#define _CNPUF_CNPUF7_POSITION                   0x00000007
#define _CNPUF_CNPUF7_MASK                       0x00000080
#define _CNPUF_CNPUF7_LENGTH                     0x00000001

#define _CNPUF_CNPUF8_POSITION                   0x00000008
#define _CNPUF_CNPUF8_MASK                       0x00000100
#define _CNPUF_CNPUF8_LENGTH                     0x00000001

#define _CNPUF_CNPUF12_POSITION                  0x0000000C
#define _CNPUF_CNPUF12_MASK                      0x00001000
#define _CNPUF_CNPUF12_LENGTH                    0x00000001

#define _CNPUF_CNPUF13_POSITION                  0x0000000D
#define _CNPUF_CNPUF13_MASK                      0x00002000
#define _CNPUF_CNPUF13_LENGTH                    0x00000001

#define _CNPUF_w_POSITION                        0x00000000
#define _CNPUF_w_MASK                            0xFFFFFFFF
#define _CNPUF_w_LENGTH                          0x00000020

#define _CNPDF_CNPDF0_POSITION                   0x00000000
#define _CNPDF_CNPDF0_MASK                       0x00000001
#define _CNPDF_CNPDF0_LENGTH                     0x00000001

#define _CNPDF_CNPDF1_POSITION                   0x00000001
#define _CNPDF_CNPDF1_MASK                       0x00000002
#define _CNPDF_CNPDF1_LENGTH                     0x00000001

#define _CNPDF_CNPDF2_POSITION                   0x00000002
#define _CNPDF_CNPDF2_MASK                       0x00000004
#define _CNPDF_CNPDF2_LENGTH                     0x00000001

#define _CNPDF_CNPDF3_POSITION                   0x00000003
#define _CNPDF_CNPDF3_MASK                       0x00000008
#define _CNPDF_CNPDF3_LENGTH                     0x00000001

#define _CNPDF_CNPDF4_POSITION                   0x00000004
#define _CNPDF_CNPDF4_MASK                       0x00000010
#define _CNPDF_CNPDF4_LENGTH                     0x00000001

#define _CNPDF_CNPDF5_POSITION                   0x00000005
#define _CNPDF_CNPDF5_MASK                       0x00000020
#define _CNPDF_CNPDF5_LENGTH                     0x00000001

#define _CNPDF_CNPDF6_POSITION                   0x00000006
#define _CNPDF_CNPDF6_MASK                       0x00000040
#define _CNPDF_CNPDF6_LENGTH                     0x00000001

#define _CNPDF_CNPDF7_POSITION                   0x00000007
#define _CNPDF_CNPDF7_MASK                       0x00000080
#define _CNPDF_CNPDF7_LENGTH                     0x00000001

#define _CNPDF_CNPDF8_POSITION                   0x00000008
#define _CNPDF_CNPDF8_MASK                       0x00000100
#define _CNPDF_CNPDF8_LENGTH                     0x00000001

#define _CNPDF_CNPDF12_POSITION                  0x0000000C
#define _CNPDF_CNPDF12_MASK                      0x00001000
#define _CNPDF_CNPDF12_LENGTH                    0x00000001

#define _CNPDF_CNPDF13_POSITION                  0x0000000D
#define _CNPDF_CNPDF13_MASK                      0x00002000
#define _CNPDF_CNPDF13_LENGTH                    0x00000001

#define _CNPDF_w_POSITION                        0x00000000
#define _CNPDF_w_MASK                            0xFFFFFFFF
#define _CNPDF_w_LENGTH                          0x00000020

#define _CNCONF_SIDL_POSITION                    0x0000000D
#define _CNCONF_SIDL_MASK                        0x00002000
#define _CNCONF_SIDL_LENGTH                      0x00000001

#define _CNCONF_ON_POSITION                      0x0000000F
#define _CNCONF_ON_MASK                          0x00008000
#define _CNCONF_ON_LENGTH                        0x00000001

#define _CNCONF_w_POSITION                       0x00000000
#define _CNCONF_w_MASK                           0xFFFFFFFF
#define _CNCONF_w_LENGTH                         0x00000020

#define _CNENF_CNIEF0_POSITION                   0x00000000
#define _CNENF_CNIEF0_MASK                       0x00000001
#define _CNENF_CNIEF0_LENGTH                     0x00000001

#define _CNENF_CNIEF1_POSITION                   0x00000001
#define _CNENF_CNIEF1_MASK                       0x00000002
#define _CNENF_CNIEF1_LENGTH                     0x00000001

#define _CNENF_CNIEF2_POSITION                   0x00000002
#define _CNENF_CNIEF2_MASK                       0x00000004
#define _CNENF_CNIEF2_LENGTH                     0x00000001

#define _CNENF_CNIEF3_POSITION                   0x00000003
#define _CNENF_CNIEF3_MASK                       0x00000008
#define _CNENF_CNIEF3_LENGTH                     0x00000001

#define _CNENF_CNIEF4_POSITION                   0x00000004
#define _CNENF_CNIEF4_MASK                       0x00000010
#define _CNENF_CNIEF4_LENGTH                     0x00000001

#define _CNENF_CNIEF5_POSITION                   0x00000005
#define _CNENF_CNIEF5_MASK                       0x00000020
#define _CNENF_CNIEF5_LENGTH                     0x00000001

#define _CNENF_CNIEF6_POSITION                   0x00000006
#define _CNENF_CNIEF6_MASK                       0x00000040
#define _CNENF_CNIEF6_LENGTH                     0x00000001

#define _CNENF_CNIEF7_POSITION                   0x00000007
#define _CNENF_CNIEF7_MASK                       0x00000080
#define _CNENF_CNIEF7_LENGTH                     0x00000001

#define _CNENF_CNIEF8_POSITION                   0x00000008
#define _CNENF_CNIEF8_MASK                       0x00000100
#define _CNENF_CNIEF8_LENGTH                     0x00000001

#define _CNENF_CNIEF12_POSITION                  0x0000000C
#define _CNENF_CNIEF12_MASK                      0x00001000
#define _CNENF_CNIEF12_LENGTH                    0x00000001

#define _CNENF_CNIEF13_POSITION                  0x0000000D
#define _CNENF_CNIEF13_MASK                      0x00002000
#define _CNENF_CNIEF13_LENGTH                    0x00000001

#define _CNENF_w_POSITION                        0x00000000
#define _CNENF_w_MASK                            0xFFFFFFFF
#define _CNENF_w_LENGTH                          0x00000020

#define _CNSTATF_CNSTATF0_POSITION               0x00000000
#define _CNSTATF_CNSTATF0_MASK                   0x00000001
#define _CNSTATF_CNSTATF0_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF1_POSITION               0x00000001
#define _CNSTATF_CNSTATF1_MASK                   0x00000002
#define _CNSTATF_CNSTATF1_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF2_POSITION               0x00000002
#define _CNSTATF_CNSTATF2_MASK                   0x00000004
#define _CNSTATF_CNSTATF2_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF3_POSITION               0x00000003
#define _CNSTATF_CNSTATF3_MASK                   0x00000008
#define _CNSTATF_CNSTATF3_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF4_POSITION               0x00000004
#define _CNSTATF_CNSTATF4_MASK                   0x00000010
#define _CNSTATF_CNSTATF4_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF5_POSITION               0x00000005
#define _CNSTATF_CNSTATF5_MASK                   0x00000020
#define _CNSTATF_CNSTATF5_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF6_POSITION               0x00000006
#define _CNSTATF_CNSTATF6_MASK                   0x00000040
#define _CNSTATF_CNSTATF6_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF7_POSITION               0x00000007
#define _CNSTATF_CNSTATF7_MASK                   0x00000080
#define _CNSTATF_CNSTATF7_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF8_POSITION               0x00000008
#define _CNSTATF_CNSTATF8_MASK                   0x00000100
#define _CNSTATF_CNSTATF8_LENGTH                 0x00000001

#define _CNSTATF_CNSTATF12_POSITION              0x0000000C
#define _CNSTATF_CNSTATF12_MASK                  0x00001000
#define _CNSTATF_CNSTATF12_LENGTH                0x00000001

#define _CNSTATF_CNSTATF13_POSITION              0x0000000D
#define _CNSTATF_CNSTATF13_MASK                  0x00002000
#define _CNSTATF_CNSTATF13_LENGTH                0x00000001

#define _CNSTATF_w_POSITION                      0x00000000
#define _CNSTATF_w_MASK                          0xFFFFFFFF
#define _CNSTATF_w_LENGTH                        0x00000020

#define _ANSELG_ANSG6_POSITION                   0x00000006
#define _ANSELG_ANSG6_MASK                       0x00000040
#define _ANSELG_ANSG6_LENGTH                     0x00000001

#define _ANSELG_ANSG7_POSITION                   0x00000007
#define _ANSELG_ANSG7_MASK                       0x00000080
#define _ANSELG_ANSG7_LENGTH                     0x00000001

#define _ANSELG_ANSG8_POSITION                   0x00000008
#define _ANSELG_ANSG8_MASK                       0x00000100
#define _ANSELG_ANSG8_LENGTH                     0x00000001

#define _ANSELG_ANSG9_POSITION                   0x00000009
#define _ANSELG_ANSG9_MASK                       0x00000200
#define _ANSELG_ANSG9_LENGTH                     0x00000001

#define _ANSELG_w_POSITION                       0x00000000
#define _ANSELG_w_MASK                           0xFFFFFFFF
#define _ANSELG_w_LENGTH                         0x00000020

#define _TRISG_TRISG0_POSITION                   0x00000000
#define _TRISG_TRISG0_MASK                       0x00000001
#define _TRISG_TRISG0_LENGTH                     0x00000001

#define _TRISG_TRISG1_POSITION                   0x00000001
#define _TRISG_TRISG1_MASK                       0x00000002
#define _TRISG_TRISG1_LENGTH                     0x00000001

#define _TRISG_TRISG2_POSITION                   0x00000002
#define _TRISG_TRISG2_MASK                       0x00000004
#define _TRISG_TRISG2_LENGTH                     0x00000001

#define _TRISG_TRISG3_POSITION                   0x00000003
#define _TRISG_TRISG3_MASK                       0x00000008
#define _TRISG_TRISG3_LENGTH                     0x00000001

#define _TRISG_TRISG6_POSITION                   0x00000006
#define _TRISG_TRISG6_MASK                       0x00000040
#define _TRISG_TRISG6_LENGTH                     0x00000001

#define _TRISG_TRISG7_POSITION                   0x00000007
#define _TRISG_TRISG7_MASK                       0x00000080
#define _TRISG_TRISG7_LENGTH                     0x00000001

#define _TRISG_TRISG8_POSITION                   0x00000008
#define _TRISG_TRISG8_MASK                       0x00000100
#define _TRISG_TRISG8_LENGTH                     0x00000001

#define _TRISG_TRISG9_POSITION                   0x00000009
#define _TRISG_TRISG9_MASK                       0x00000200
#define _TRISG_TRISG9_LENGTH                     0x00000001

#define _TRISG_TRISG12_POSITION                  0x0000000C
#define _TRISG_TRISG12_MASK                      0x00001000
#define _TRISG_TRISG12_LENGTH                    0x00000001

#define _TRISG_TRISG13_POSITION                  0x0000000D
#define _TRISG_TRISG13_MASK                      0x00002000
#define _TRISG_TRISG13_LENGTH                    0x00000001

#define _TRISG_TRISG14_POSITION                  0x0000000E
#define _TRISG_TRISG14_MASK                      0x00004000
#define _TRISG_TRISG14_LENGTH                    0x00000001

#define _TRISG_TRISG15_POSITION                  0x0000000F
#define _TRISG_TRISG15_MASK                      0x00008000
#define _TRISG_TRISG15_LENGTH                    0x00000001

#define _TRISG_w_POSITION                        0x00000000
#define _TRISG_w_MASK                            0xFFFFFFFF
#define _TRISG_w_LENGTH                          0x00000020

#define _PORTG_RG0_POSITION                      0x00000000
#define _PORTG_RG0_MASK                          0x00000001
#define _PORTG_RG0_LENGTH                        0x00000001

#define _PORTG_RG1_POSITION                      0x00000001
#define _PORTG_RG1_MASK                          0x00000002
#define _PORTG_RG1_LENGTH                        0x00000001

#define _PORTG_RG2_POSITION                      0x00000002
#define _PORTG_RG2_MASK                          0x00000004
#define _PORTG_RG2_LENGTH                        0x00000001

#define _PORTG_RG3_POSITION                      0x00000003
#define _PORTG_RG3_MASK                          0x00000008
#define _PORTG_RG3_LENGTH                        0x00000001

#define _PORTG_RG6_POSITION                      0x00000006
#define _PORTG_RG6_MASK                          0x00000040
#define _PORTG_RG6_LENGTH                        0x00000001

#define _PORTG_RG7_POSITION                      0x00000007
#define _PORTG_RG7_MASK                          0x00000080
#define _PORTG_RG7_LENGTH                        0x00000001

#define _PORTG_RG8_POSITION                      0x00000008
#define _PORTG_RG8_MASK                          0x00000100
#define _PORTG_RG8_LENGTH                        0x00000001

#define _PORTG_RG9_POSITION                      0x00000009
#define _PORTG_RG9_MASK                          0x00000200
#define _PORTG_RG9_LENGTH                        0x00000001

#define _PORTG_RG12_POSITION                     0x0000000C
#define _PORTG_RG12_MASK                         0x00001000
#define _PORTG_RG12_LENGTH                       0x00000001

#define _PORTG_RG13_POSITION                     0x0000000D
#define _PORTG_RG13_MASK                         0x00002000
#define _PORTG_RG13_LENGTH                       0x00000001

#define _PORTG_RG14_POSITION                     0x0000000E
#define _PORTG_RG14_MASK                         0x00004000
#define _PORTG_RG14_LENGTH                       0x00000001

#define _PORTG_RG15_POSITION                     0x0000000F
#define _PORTG_RG15_MASK                         0x00008000
#define _PORTG_RG15_LENGTH                       0x00000001

#define _PORTG_w_POSITION                        0x00000000
#define _PORTG_w_MASK                            0xFFFFFFFF
#define _PORTG_w_LENGTH                          0x00000020

#define _LATG_LATG0_POSITION                     0x00000000
#define _LATG_LATG0_MASK                         0x00000001
#define _LATG_LATG0_LENGTH                       0x00000001

#define _LATG_LATG1_POSITION                     0x00000001
#define _LATG_LATG1_MASK                         0x00000002
#define _LATG_LATG1_LENGTH                       0x00000001

#define _LATG_LATG2_POSITION                     0x00000002
#define _LATG_LATG2_MASK                         0x00000004
#define _LATG_LATG2_LENGTH                       0x00000001

#define _LATG_LATG3_POSITION                     0x00000003
#define _LATG_LATG3_MASK                         0x00000008
#define _LATG_LATG3_LENGTH                       0x00000001

#define _LATG_LATG6_POSITION                     0x00000006
#define _LATG_LATG6_MASK                         0x00000040
#define _LATG_LATG6_LENGTH                       0x00000001

#define _LATG_LATG7_POSITION                     0x00000007
#define _LATG_LATG7_MASK                         0x00000080
#define _LATG_LATG7_LENGTH                       0x00000001

#define _LATG_LATG8_POSITION                     0x00000008
#define _LATG_LATG8_MASK                         0x00000100
#define _LATG_LATG8_LENGTH                       0x00000001

#define _LATG_LATG9_POSITION                     0x00000009
#define _LATG_LATG9_MASK                         0x00000200
#define _LATG_LATG9_LENGTH                       0x00000001

#define _LATG_LATG12_POSITION                    0x0000000C
#define _LATG_LATG12_MASK                        0x00001000
#define _LATG_LATG12_LENGTH                      0x00000001

#define _LATG_LATG13_POSITION                    0x0000000D
#define _LATG_LATG13_MASK                        0x00002000
#define _LATG_LATG13_LENGTH                      0x00000001

#define _LATG_LATG14_POSITION                    0x0000000E
#define _LATG_LATG14_MASK                        0x00004000
#define _LATG_LATG14_LENGTH                      0x00000001

#define _LATG_LATG15_POSITION                    0x0000000F
#define _LATG_LATG15_MASK                        0x00008000
#define _LATG_LATG15_LENGTH                      0x00000001

#define _LATG_w_POSITION                         0x00000000
#define _LATG_w_MASK                             0xFFFFFFFF
#define _LATG_w_LENGTH                           0x00000020

#define _ODCG_ODCG0_POSITION                     0x00000000
#define _ODCG_ODCG0_MASK                         0x00000001
#define _ODCG_ODCG0_LENGTH                       0x00000001

#define _ODCG_ODCG1_POSITION                     0x00000001
#define _ODCG_ODCG1_MASK                         0x00000002
#define _ODCG_ODCG1_LENGTH                       0x00000001

#define _ODCG_ODCG2_POSITION                     0x00000002
#define _ODCG_ODCG2_MASK                         0x00000004
#define _ODCG_ODCG2_LENGTH                       0x00000001

#define _ODCG_ODCG3_POSITION                     0x00000003
#define _ODCG_ODCG3_MASK                         0x00000008
#define _ODCG_ODCG3_LENGTH                       0x00000001

#define _ODCG_ODCG6_POSITION                     0x00000006
#define _ODCG_ODCG6_MASK                         0x00000040
#define _ODCG_ODCG6_LENGTH                       0x00000001

#define _ODCG_ODCG7_POSITION                     0x00000007
#define _ODCG_ODCG7_MASK                         0x00000080
#define _ODCG_ODCG7_LENGTH                       0x00000001

#define _ODCG_ODCG8_POSITION                     0x00000008
#define _ODCG_ODCG8_MASK                         0x00000100
#define _ODCG_ODCG8_LENGTH                       0x00000001

#define _ODCG_ODCG9_POSITION                     0x00000009
#define _ODCG_ODCG9_MASK                         0x00000200
#define _ODCG_ODCG9_LENGTH                       0x00000001

#define _ODCG_ODCG12_POSITION                    0x0000000C
#define _ODCG_ODCG12_MASK                        0x00001000
#define _ODCG_ODCG12_LENGTH                      0x00000001

#define _ODCG_ODCG13_POSITION                    0x0000000D
#define _ODCG_ODCG13_MASK                        0x00002000
#define _ODCG_ODCG13_LENGTH                      0x00000001

#define _ODCG_ODCG14_POSITION                    0x0000000E
#define _ODCG_ODCG14_MASK                        0x00004000
#define _ODCG_ODCG14_LENGTH                      0x00000001

#define _ODCG_ODCG15_POSITION                    0x0000000F
#define _ODCG_ODCG15_MASK                        0x00008000
#define _ODCG_ODCG15_LENGTH                      0x00000001

#define _ODCG_w_POSITION                         0x00000000
#define _ODCG_w_MASK                             0xFFFFFFFF
#define _ODCG_w_LENGTH                           0x00000020

#define _CNPUG_CNPUG0_POSITION                   0x00000000
#define _CNPUG_CNPUG0_MASK                       0x00000001
#define _CNPUG_CNPUG0_LENGTH                     0x00000001

#define _CNPUG_CNPUG1_POSITION                   0x00000001
#define _CNPUG_CNPUG1_MASK                       0x00000002
#define _CNPUG_CNPUG1_LENGTH                     0x00000001

#define _CNPUG_CNPUG2_POSITION                   0x00000002
#define _CNPUG_CNPUG2_MASK                       0x00000004
#define _CNPUG_CNPUG2_LENGTH                     0x00000001

#define _CNPUG_CNPUG3_POSITION                   0x00000003
#define _CNPUG_CNPUG3_MASK                       0x00000008
#define _CNPUG_CNPUG3_LENGTH                     0x00000001

#define _CNPUG_CNPUG6_POSITION                   0x00000006
#define _CNPUG_CNPUG6_MASK                       0x00000040
#define _CNPUG_CNPUG6_LENGTH                     0x00000001

#define _CNPUG_CNPUG7_POSITION                   0x00000007
#define _CNPUG_CNPUG7_MASK                       0x00000080
#define _CNPUG_CNPUG7_LENGTH                     0x00000001

#define _CNPUG_CNPUG8_POSITION                   0x00000008
#define _CNPUG_CNPUG8_MASK                       0x00000100
#define _CNPUG_CNPUG8_LENGTH                     0x00000001

#define _CNPUG_CNPUG9_POSITION                   0x00000009
#define _CNPUG_CNPUG9_MASK                       0x00000200
#define _CNPUG_CNPUG9_LENGTH                     0x00000001

#define _CNPUG_CNPUG12_POSITION                  0x0000000C
#define _CNPUG_CNPUG12_MASK                      0x00001000
#define _CNPUG_CNPUG12_LENGTH                    0x00000001

#define _CNPUG_CNPUG13_POSITION                  0x0000000D
#define _CNPUG_CNPUG13_MASK                      0x00002000
#define _CNPUG_CNPUG13_LENGTH                    0x00000001

#define _CNPUG_CNPUG14_POSITION                  0x0000000E
#define _CNPUG_CNPUG14_MASK                      0x00004000
#define _CNPUG_CNPUG14_LENGTH                    0x00000001

#define _CNPUG_CNPUG15_POSITION                  0x0000000F
#define _CNPUG_CNPUG15_MASK                      0x00008000
#define _CNPUG_CNPUG15_LENGTH                    0x00000001

#define _CNPUG_w_POSITION                        0x00000000
#define _CNPUG_w_MASK                            0xFFFFFFFF
#define _CNPUG_w_LENGTH                          0x00000020

#define _CNPDG_CNPDG0_POSITION                   0x00000000
#define _CNPDG_CNPDG0_MASK                       0x00000001
#define _CNPDG_CNPDG0_LENGTH                     0x00000001

#define _CNPDG_CNPDG1_POSITION                   0x00000001
#define _CNPDG_CNPDG1_MASK                       0x00000002
#define _CNPDG_CNPDG1_LENGTH                     0x00000001

#define _CNPDG_CNPDG2_POSITION                   0x00000002
#define _CNPDG_CNPDG2_MASK                       0x00000004
#define _CNPDG_CNPDG2_LENGTH                     0x00000001

#define _CNPDG_CNPDG3_POSITION                   0x00000003
#define _CNPDG_CNPDG3_MASK                       0x00000008
#define _CNPDG_CNPDG3_LENGTH                     0x00000001

#define _CNPDG_CNPDG6_POSITION                   0x00000006
#define _CNPDG_CNPDG6_MASK                       0x00000040
#define _CNPDG_CNPDG6_LENGTH                     0x00000001

#define _CNPDG_CNPDG7_POSITION                   0x00000007
#define _CNPDG_CNPDG7_MASK                       0x00000080
#define _CNPDG_CNPDG7_LENGTH                     0x00000001

#define _CNPDG_CNPDG8_POSITION                   0x00000008
#define _CNPDG_CNPDG8_MASK                       0x00000100
#define _CNPDG_CNPDG8_LENGTH                     0x00000001

#define _CNPDG_CNPDG9_POSITION                   0x00000009
#define _CNPDG_CNPDG9_MASK                       0x00000200
#define _CNPDG_CNPDG9_LENGTH                     0x00000001

#define _CNPDG_CNPDG12_POSITION                  0x0000000C
#define _CNPDG_CNPDG12_MASK                      0x00001000
#define _CNPDG_CNPDG12_LENGTH                    0x00000001

#define _CNPDG_CNPDG13_POSITION                  0x0000000D
#define _CNPDG_CNPDG13_MASK                      0x00002000
#define _CNPDG_CNPDG13_LENGTH                    0x00000001

#define _CNPDG_CNPDG14_POSITION                  0x0000000E
#define _CNPDG_CNPDG14_MASK                      0x00004000
#define _CNPDG_CNPDG14_LENGTH                    0x00000001

#define _CNPDG_CNPDG15_POSITION                  0x0000000F
#define _CNPDG_CNPDG15_MASK                      0x00008000
#define _CNPDG_CNPDG15_LENGTH                    0x00000001

#define _CNPDG_w_POSITION                        0x00000000
#define _CNPDG_w_MASK                            0xFFFFFFFF
#define _CNPDG_w_LENGTH                          0x00000020

#define _CNCONG_SIDL_POSITION                    0x0000000D
#define _CNCONG_SIDL_MASK                        0x00002000
#define _CNCONG_SIDL_LENGTH                      0x00000001

#define _CNCONG_ON_POSITION                      0x0000000F
#define _CNCONG_ON_MASK                          0x00008000
#define _CNCONG_ON_LENGTH                        0x00000001

#define _CNCONG_w_POSITION                       0x00000000
#define _CNCONG_w_MASK                           0xFFFFFFFF
#define _CNCONG_w_LENGTH                         0x00000020

#define _CNENG_CNIEG0_POSITION                   0x00000000
#define _CNENG_CNIEG0_MASK                       0x00000001
#define _CNENG_CNIEG0_LENGTH                     0x00000001

#define _CNENG_CNIEG1_POSITION                   0x00000001
#define _CNENG_CNIEG1_MASK                       0x00000002
#define _CNENG_CNIEG1_LENGTH                     0x00000001

#define _CNENG_CNIEG2_POSITION                   0x00000002
#define _CNENG_CNIEG2_MASK                       0x00000004
#define _CNENG_CNIEG2_LENGTH                     0x00000001

#define _CNENG_CNIEG3_POSITION                   0x00000003
#define _CNENG_CNIEG3_MASK                       0x00000008
#define _CNENG_CNIEG3_LENGTH                     0x00000001

#define _CNENG_CNIEG6_POSITION                   0x00000006
#define _CNENG_CNIEG6_MASK                       0x00000040
#define _CNENG_CNIEG6_LENGTH                     0x00000001

#define _CNENG_CNIEG7_POSITION                   0x00000007
#define _CNENG_CNIEG7_MASK                       0x00000080
#define _CNENG_CNIEG7_LENGTH                     0x00000001

#define _CNENG_CNIEG8_POSITION                   0x00000008
#define _CNENG_CNIEG8_MASK                       0x00000100
#define _CNENG_CNIEG8_LENGTH                     0x00000001

#define _CNENG_CNIEG9_POSITION                   0x00000009
#define _CNENG_CNIEG9_MASK                       0x00000200
#define _CNENG_CNIEG9_LENGTH                     0x00000001

#define _CNENG_CNIEG12_POSITION                  0x0000000C
#define _CNENG_CNIEG12_MASK                      0x00001000
#define _CNENG_CNIEG12_LENGTH                    0x00000001

#define _CNENG_CNIEG13_POSITION                  0x0000000D
#define _CNENG_CNIEG13_MASK                      0x00002000
#define _CNENG_CNIEG13_LENGTH                    0x00000001

#define _CNENG_CNIEG14_POSITION                  0x0000000E
#define _CNENG_CNIEG14_MASK                      0x00004000
#define _CNENG_CNIEG14_LENGTH                    0x00000001

#define _CNENG_CNIEG15_POSITION                  0x0000000F
#define _CNENG_CNIEG15_MASK                      0x00008000
#define _CNENG_CNIEG15_LENGTH                    0x00000001

#define _CNENG_w_POSITION                        0x00000000
#define _CNENG_w_MASK                            0xFFFFFFFF
#define _CNENG_w_LENGTH                          0x00000020

#define _CNSTATG_CNSTATG0_POSITION               0x00000000
#define _CNSTATG_CNSTATG0_MASK                   0x00000001
#define _CNSTATG_CNSTATG0_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG1_POSITION               0x00000001
#define _CNSTATG_CNSTATG1_MASK                   0x00000002
#define _CNSTATG_CNSTATG1_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG2_POSITION               0x00000002
#define _CNSTATG_CNSTATG2_MASK                   0x00000004
#define _CNSTATG_CNSTATG2_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG3_POSITION               0x00000003
#define _CNSTATG_CNSTATG3_MASK                   0x00000008
#define _CNSTATG_CNSTATG3_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG6_POSITION               0x00000006
#define _CNSTATG_CNSTATG6_MASK                   0x00000040
#define _CNSTATG_CNSTATG6_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG7_POSITION               0x00000007
#define _CNSTATG_CNSTATG7_MASK                   0x00000080
#define _CNSTATG_CNSTATG7_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG8_POSITION               0x00000008
#define _CNSTATG_CNSTATG8_MASK                   0x00000100
#define _CNSTATG_CNSTATG8_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG9_POSITION               0x00000009
#define _CNSTATG_CNSTATG9_MASK                   0x00000200
#define _CNSTATG_CNSTATG9_LENGTH                 0x00000001

#define _CNSTATG_CNSTATG12_POSITION              0x0000000C
#define _CNSTATG_CNSTATG12_MASK                  0x00001000
#define _CNSTATG_CNSTATG12_LENGTH                0x00000001

#define _CNSTATG_CNSTATG13_POSITION              0x0000000D
#define _CNSTATG_CNSTATG13_MASK                  0x00002000
#define _CNSTATG_CNSTATG13_LENGTH                0x00000001

#define _CNSTATG_CNSTATG14_POSITION              0x0000000E
#define _CNSTATG_CNSTATG14_MASK                  0x00004000
#define _CNSTATG_CNSTATG14_LENGTH                0x00000001

#define _CNSTATG_CNSTATG15_POSITION              0x0000000F
#define _CNSTATG_CNSTATG15_MASK                  0x00008000
#define _CNSTATG_CNSTATG15_LENGTH                0x00000001

#define _CNSTATG_w_POSITION                      0x00000000
#define _CNSTATG_w_MASK                          0xFFFFFFFF
#define _CNSTATG_w_LENGTH                        0x00000020

#define _DEVCFG3_USERID_POSITION                 0x00000000
#define _DEVCFG3_USERID_MASK                     0x0000FFFF
#define _DEVCFG3_USERID_LENGTH                   0x00000010

#define _DEVCFG3_FSRSSEL_POSITION                0x00000010
#define _DEVCFG3_FSRSSEL_MASK                    0x00070000
#define _DEVCFG3_FSRSSEL_LENGTH                  0x00000003

#define _DEVCFG3_PMDL1WAY_POSITION               0x0000001C
#define _DEVCFG3_PMDL1WAY_MASK                   0x10000000
#define _DEVCFG3_PMDL1WAY_LENGTH                 0x00000001

#define _DEVCFG3_IOL1WAY_POSITION                0x0000001D
#define _DEVCFG3_IOL1WAY_MASK                    0x20000000
#define _DEVCFG3_IOL1WAY_LENGTH                  0x00000001

#define _DEVCFG3_w_POSITION                      0x00000000
#define _DEVCFG3_w_MASK                          0xFFFFFFFF
#define _DEVCFG3_w_LENGTH                        0x00000020

#define _DEVCFG2_FPLLIDIV_POSITION               0x00000000
#define _DEVCFG2_FPLLIDIV_MASK                   0x00000007
#define _DEVCFG2_FPLLIDIV_LENGTH                 0x00000003

#define _DEVCFG2_FPLLMUL_POSITION                0x00000004
#define _DEVCFG2_FPLLMUL_MASK                    0x00000070
#define _DEVCFG2_FPLLMUL_LENGTH                  0x00000003

#define _DEVCFG2_FPLLODIV_POSITION               0x00000010
#define _DEVCFG2_FPLLODIV_MASK                   0x00070000
#define _DEVCFG2_FPLLODIV_LENGTH                 0x00000003

#define _DEVCFG2_w_POSITION                      0x00000000
#define _DEVCFG2_w_MASK                          0xFFFFFFFF
#define _DEVCFG2_w_LENGTH                        0x00000020

#define _DEVCFG1_FNOSC_POSITION                  0x00000000
#define _DEVCFG1_FNOSC_MASK                      0x00000007
#define _DEVCFG1_FNOSC_LENGTH                    0x00000003

#define _DEVCFG1_FSOSCEN_POSITION                0x00000005
#define _DEVCFG1_FSOSCEN_MASK                    0x00000020
#define _DEVCFG1_FSOSCEN_LENGTH                  0x00000001

#define _DEVCFG1_IESO_POSITION                   0x00000007
#define _DEVCFG1_IESO_MASK                       0x00000080
#define _DEVCFG1_IESO_LENGTH                     0x00000001

#define _DEVCFG1_POSCMOD_POSITION                0x00000008
#define _DEVCFG1_POSCMOD_MASK                    0x00000300
#define _DEVCFG1_POSCMOD_LENGTH                  0x00000002

#define _DEVCFG1_OSCIOFNC_POSITION               0x0000000A
#define _DEVCFG1_OSCIOFNC_MASK                   0x00000400
#define _DEVCFG1_OSCIOFNC_LENGTH                 0x00000001

#define _DEVCFG1_FPBDIV_POSITION                 0x0000000C
#define _DEVCFG1_FPBDIV_MASK                     0x00003000
#define _DEVCFG1_FPBDIV_LENGTH                   0x00000002

#define _DEVCFG1_FCKSM_POSITION                  0x0000000E
#define _DEVCFG1_FCKSM_MASK                      0x0000C000
#define _DEVCFG1_FCKSM_LENGTH                    0x00000002

#define _DEVCFG1_WDTPS_POSITION                  0x00000010
#define _DEVCFG1_WDTPS_MASK                      0x001F0000
#define _DEVCFG1_WDTPS_LENGTH                    0x00000005

#define _DEVCFG1_WINDIS_POSITION                 0x00000016
#define _DEVCFG1_WINDIS_MASK                     0x00400000
#define _DEVCFG1_WINDIS_LENGTH                   0x00000001

#define _DEVCFG1_FWDTEN_POSITION                 0x00000017
#define _DEVCFG1_FWDTEN_MASK                     0x00800000
#define _DEVCFG1_FWDTEN_LENGTH                   0x00000001

#define _DEVCFG1_FWDTWINSZ_POSITION              0x00000018
#define _DEVCFG1_FWDTWINSZ_MASK                  0x03000000
#define _DEVCFG1_FWDTWINSZ_LENGTH                0x00000002

#define _DEVCFG1_w_POSITION                      0x00000000
#define _DEVCFG1_w_MASK                          0xFFFFFFFF
#define _DEVCFG1_w_LENGTH                        0x00000020

#define _DEVCFG0_DEBUG_POSITION                  0x00000000
#define _DEVCFG0_DEBUG_MASK                      0x00000003
#define _DEVCFG0_DEBUG_LENGTH                    0x00000002

#define _DEVCFG0_JTAGEN_POSITION                 0x00000002
#define _DEVCFG0_JTAGEN_MASK                     0x00000004
#define _DEVCFG0_JTAGEN_LENGTH                   0x00000001

#define _DEVCFG0_ICESEL_POSITION                 0x00000003
#define _DEVCFG0_ICESEL_MASK                     0x00000018
#define _DEVCFG0_ICESEL_LENGTH                   0x00000002

#define _DEVCFG0_PWP_POSITION                    0x0000000C
#define _DEVCFG0_PWP_MASK                        0x000FF000
#define _DEVCFG0_PWP_LENGTH                      0x00000008

#define _DEVCFG0_BWP_POSITION                    0x00000018
#define _DEVCFG0_BWP_MASK                        0x01000000
#define _DEVCFG0_BWP_LENGTH                      0x00000001

#define _DEVCFG0_CP_POSITION                     0x0000001C
#define _DEVCFG0_CP_MASK                         0x10000000
#define _DEVCFG0_CP_LENGTH                       0x00000001

#define _DEVCFG0_FDEBUG_POSITION                 0x00000000
#define _DEVCFG0_FDEBUG_MASK                     0x00000003
#define _DEVCFG0_FDEBUG_LENGTH                   0x00000002

#define _DEVCFG0_w_POSITION                      0x00000000
#define _DEVCFG0_w_MASK                          0xFFFFFFFF
#define _DEVCFG0_w_LENGTH                        0x00000020

/* Vector Numbers */
#define _CORE_TIMER_VECTOR                       0
#define _CORE_SOFTWARE_0_VECTOR                  1
#define _CORE_SOFTWARE_1_VECTOR                  2
#define _EXTERNAL_0_VECTOR                       3
#define _TIMER_1_VECTOR                          4
#define _INPUT_CAPTURE_1_VECTOR                  5
#define _OUTPUT_COMPARE_1_VECTOR                 6
#define _EXTERNAL_1_VECTOR                       7
#define _TIMER_2_VECTOR                          8
#define _INPUT_CAPTURE_2_VECTOR                  9
#define _OUTPUT_COMPARE_2_VECTOR                 10
#define _EXTERNAL_2_VECTOR                       11
#define _TIMER_3_VECTOR                          12
#define _INPUT_CAPTURE_3_VECTOR                  13
#define _OUTPUT_COMPARE_3_VECTOR                 14
#define _EXTERNAL_3_VECTOR                       15
#define _TIMER_4_VECTOR                          16
#define _INPUT_CAPTURE_4_VECTOR                  17
#define _OUTPUT_COMPARE_4_VECTOR                 18
#define _EXTERNAL_4_VECTOR                       19
#define _TIMER_5_VECTOR                          20
#define _INPUT_CAPTURE_5_VECTOR                  21
#define _OUTPUT_COMPARE_5_VECTOR                 22
#define _ADC_VECTOR                              23
#define _FAIL_SAFE_MONITOR_VECTOR                24
#define _RTCC_VECTOR                             25
#define _FCE_VECTOR                              26
#define _COMPARATOR_1_VECTOR                     27
#define _COMPARATOR_2_VECTOR                     28
#define _SPI_1_VECTOR                            30
#define _UART_1_VECTOR                           31
#define _I2C_1_VECTOR                            32
#define _CHANGE_NOTICE_VECTOR                    33
#define _PMP_VECTOR                              34
#define _SPI_2_VECTOR                            35
#define _UART_2_VECTOR                           36
#define _I2C_2_VECTOR                            37
#define _UART_3_VECTOR                           38
#define _UART_4_VECTOR                           39
#define _UART_5_VECTOR                           40
#define _CTMU_VECTOR                             41
#define _DMA_0_VECTOR                            42
#define _DMA_1_VECTOR                            43
#define _DMA_2_VECTOR                            44
#define _DMA_3_VECTOR                            45

/* IRQ Numbers */
#define _CORE_TIMER_IRQ                          0
#define _CORE_SOFTWARE_0_IRQ                     1
#define _CORE_SOFTWARE_1_IRQ                     2
#define _EXTERNAL_0_IRQ                          3
#define _TIMER_1_IRQ                             4
#define _INPUT_CAPTURE_ERROR_1_IRQ               5
#define _INPUT_CAPTURE_1_IRQ                     6
#define _OUTPUT_COMPARE_1_IRQ                    7
#define _EXTERNAL_1_IRQ                          8
#define _TIMER_2_IRQ                             9
#define _INPUT_CAPTURE_ERROR_2_IRQ               10
#define _INPUT_CAPTURE_2_IRQ                     11
#define _OUTPUT_COMPARE_2_IRQ                    12
#define _EXTERNAL_2_IRQ                          13
#define _TIMER_3_IRQ                             14
#define _INPUT_CAPTURE_ERROR_3_IRQ               15
#define _INPUT_CAPTURE_3_IRQ                     16
#define _OUTPUT_COMPARE_3_IRQ                    17
#define _EXTERNAL_3_IRQ                          18
#define _TIMER_4_IRQ                             19
#define _INPUT_CAPTURE_ERROR_4_IRQ               20
#define _INPUT_CAPTURE_4_IRQ                     21
#define _OUTPUT_COMPARE_4_IRQ                    22
#define _EXTERNAL_4_IRQ                          23
#define _TIMER_5_IRQ                             24
#define _INPUT_CAPTURE_ERROR_5_IRQ               25
#define _INPUT_CAPTURE_5_IRQ                     26
#define _OUTPUT_COMPARE_5_IRQ                    27
#define _ADC_IRQ                                 28
#define _FAIL_SAFE_MONITOR_IRQ                   29
#define _RTCC_IRQ                                30
#define _FLASH_CONTROL_IRQ                       31
#define _COMPARATOR_1_IRQ                        32
#define _COMPARATOR_2_IRQ                        33
#define _SPI1_ERR_IRQ                            35
#define _SPI1_RX_IRQ                             36
#define _SPI1_TX_IRQ                             37
#define _UART1_ERR_IRQ                           38
#define _UART1_RX_IRQ                            39
#define _UART1_TX_IRQ                            40
#define _I2C1_BUS_IRQ                            41
#define _I2C1_SLAVE_IRQ                          42
#define _I2C1_MASTER_IRQ                         43
#define _CHANGE_NOTICE_A_IRQ                     44
#define _CHANGE_NOTICE_B_IRQ                     45
#define _CHANGE_NOTICE_C_IRQ                     46
#define _CHANGE_NOTICE_D_IRQ                     47
#define _CHANGE_NOTICE_E_IRQ                     48
#define _CHANGE_NOTICE_F_IRQ                     49
#define _CHANGE_NOTICE_G_IRQ                     50
#define _PMP_IRQ                                 51
#define _PMP_ERROR_IRQ                           52
#define _SPI2_ERR_IRQ                            53
#define _SPI2_RX_IRQ                             54
#define _SPI2_TX_IRQ                             55
#define _UART2_ERR_IRQ                           56
#define _UART2_RX_IRQ                            57
#define _UART2_TX_IRQ                            58
#define _I2C2_BUS_IRQ                            59
#define _I2C2_SLAVE_IRQ                          60
#define _I2C2_MASTER_IRQ                         61
#define _UART3_ERR_IRQ                           62
#define _UART3_RX_IRQ                            63
#define _UART3_TX_IRQ                            64
#define _UART4_ERR_IRQ                           65
#define _UART4_RX_IRQ                            66
#define _UART4_TX_IRQ                            67
#define _UART5_ERR_IRQ                           68
#define _UART5_RX_IRQ                            69
#define _UART5_TX_IRQ                            70
#define _CTMU_IRQ                                71
#define _DMA0_IRQ                                72
#define _DMA1_IRQ                                73
#define _DMA2_IRQ                                74
#define _DMA3_IRQ                                75

/* Device Peripherals */
#define _ADC10
#define _BMX
#define _CFG
#define _CMP
#define _CVR
#define _DMAC
#define _DMAC0
#define _DMAC1
#define _DMAC2
#define _DMAC3
#define _I2C1
#define _I2C2
#define _ICAP1
#define _ICAP2
#define _ICAP3
#define _ICAP4
#define _ICAP5
#define _INT
#define _NVM
#define _OCMP1
#define _OCMP2
#define _OCMP3
#define _OCMP4
#define _OCMP5
#define _OSC
#define _PCACHE
#define _PMP
#define _PORTA
#define _PORTB
#define _PORTC
#define _PORTD
#define _PORTE
#define _PORTF
#define _PORTG
#define _RCON
#define _RTCC
#define _SPI1
#define _SPI2
#define _TMR1
#define _TMR2
#define _TMR3
#define _TMR4
#define _TMR5
#define _UART1
#define _UART2
#define _UART3
#define _UART4
#define _UART5
#define _WDT

/* Base Addresses for Peripherals */
#define _ADC10_BASE_ADDRESS                      0xBF809000
#define _BMX_BASE_ADDRESS                        0xBF882000
#define _CFG_BASE_ADDRESS                        0xBF80F200
#define _CMP_BASE_ADDRESS                        0xBF80A000
#define _CVR_BASE_ADDRESS                        0xBF809800
#define _DMAC_BASE_ADDRESS                       0xBF883000
#define _DMAC0_BASE_ADDRESS                      0xBF883060
#define _DMAC1_BASE_ADDRESS                      0xBF883120
#define _DMAC2_BASE_ADDRESS                      0xBF8831E0
#define _DMAC3_BASE_ADDRESS                      0xBF8832A0
#define _I2C1_BASE_ADDRESS                       0xBF805000
#define _I2C2_BASE_ADDRESS                       0xBF805100
#define _ICAP1_BASE_ADDRESS                      0xBF802000
#define _ICAP2_BASE_ADDRESS                      0xBF802200
#define _ICAP3_BASE_ADDRESS                      0xBF802400
#define _ICAP4_BASE_ADDRESS                      0xBF802600
#define _ICAP5_BASE_ADDRESS                      0xBF802800
#define _INT_BASE_ADDRESS                        0xBF881000
#define _NVM_BASE_ADDRESS                        0xBF80F400
#define _OCMP1_BASE_ADDRESS                      0xBF803000
#define _OCMP2_BASE_ADDRESS                      0xBF803200
#define _OCMP3_BASE_ADDRESS                      0xBF803400
#define _OCMP4_BASE_ADDRESS                      0xBF803600
#define _OCMP5_BASE_ADDRESS                      0xBF803800
#define _OSC_BASE_ADDRESS                        0xBF80F000
#define _PCACHE_BASE_ADDRESS                     0xBF884000
#define _PMP_BASE_ADDRESS                        0xBF807000
#define _PORTA_BASE_ADDRESS                      0xBF886020
#define _PORTB_BASE_ADDRESS                      0xBF886120
#define _PORTC_BASE_ADDRESS                      0xBF886220
#define _PORTD_BASE_ADDRESS                      0xBF886320
#define _PORTE_BASE_ADDRESS                      0xBF886420
#define _PORTF_BASE_ADDRESS                      0xBF886520
#define _PORTG_BASE_ADDRESS                      0xBF886660
#define _RCON_BASE_ADDRESS                       0xBF80F600
#define _RTCC_BASE_ADDRESS                       0xBF800200
#define _SPI1_BASE_ADDRESS                       0xBF805800
#define _SPI2_BASE_ADDRESS                       0xBF805A00
#define _TMR1_BASE_ADDRESS                       0xBF800600
#define _TMR2_BASE_ADDRESS                       0xBF800800
#define _TMR3_BASE_ADDRESS                       0xBF800A00
#define _TMR4_BASE_ADDRESS                       0xBF800C00
#define _TMR5_BASE_ADDRESS                       0xBF800E00
#define _UART1_BASE_ADDRESS                      0xBF806000
#define _UART2_BASE_ADDRESS                      0xBF806200
#define _UART3_BASE_ADDRESS                      0xBF806400
#define _UART4_BASE_ADDRESS                      0xBF806600
#define _UART5_BASE_ADDRESS                      0xBF806800
#define _WDT_BASE_ADDRESS                        0xBF800000

/* include generic header file for backwards compatibility with old C32 v1.xx code */
#include "ppic32mx.h"


#endif
