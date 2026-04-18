      **********************************
      *** Author: Dracma Capital     ***
      *** Date:   April 15 from 2026 ***
      *** Update: April 16 from 2026 ***
      *** License: AGPL-3-or-later   ***
      **********************************

      *****************************************************************
       FD FC-REPORT
           RECORDING MODE IS V.

       01 FS-REPORT-RECORD.
          02 FS-REPORT-EXCHANGE   PIC X(10).
          02 FS-REPORT-SYMBOL     PIC X(10).
          02 FS-REPORT-ORDER      PIC X(10).
          02 FS-REPORT-BID        PIC 9(10) COMP-5.
          02 FS-REPORT-ASK        PIC 9(10) COMP-5.
          02 FS-REPORT-INVENTORY  PIC 9(18) COMP-5.
          02 FS-REPORT-SPREAD-MIN PIC 9(10) COMP-5.
          02 FS-REPORT-SPREAD-MAX PIC 9(10) COMP-5.
          02 FS-REPORT-VOLATILITY PIC 9(02)V99 COMP-3.
          02 FS-REPORT-AUDIT-LOG  PIC 9(01) COMP-5.
      *****************************************************************