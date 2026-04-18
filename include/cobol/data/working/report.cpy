      **********************************
      *** Author: Dracma Capital     ***
      *** Date:   April 15 from 2026 ***
      *** Update: April 16 from 2026 ***
      *** License: AGPL-3-or-later   ***
      **********************************

      *****************************************************************
       77 WS-REPORT-FILE-STATUS PIC X(02).
      *****************************************************************

      *****************************************************************
       01 WS-REPORT-RECORD.
          02 WS-REPORT-EXCHANGE   PIC X(10).
          02 WS-REPORT-SYMBOL     PIC X(10).
          02 WS-REPORT-ORDER      PIC X(10).
          02 WS-REPORT-BID        COMP-2.
          02 WS-REPORT-ASK        COMP-2.
          02 WS-REPORT-INVENTORY  PIC 9(18) COMP-5.
          02 WS-REPORT-SPREAD-MIN PIC 9(10) COMP-5.
          02 WS-REPORT-SPREAD-MAX PIC 9(10) COMP-5.
          02 WS-REPORT-VOLATILITY COMP-2.
          02 WS-REPORT-AUDIT-LOG  PIC 9(01) COMP-5.
      *****************************************************************