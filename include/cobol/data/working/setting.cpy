      **********************************
      *** Author: Dracma Capital     ***
      *** Date:   April 17 from 2026 ***
      *** Update: April 17 from 2026 ***
      *** License: AGPL-3-or-later   ***
      **********************************

      *****************************************************************
       77 WS-SETTING-JSON-CONTENT     PIC X(2000).
       77 WS-SETTING-JSON-FILE-STATUS PIC X(02).
      *****************************************************************

      *****************************************************************
       01 WS-SETING-JSON.
          02 WS-SETTING-JSON-EXCHANGE   PIC X(10).
          02 WS-SETTING-JSON-SYMBOL     PIC X(10).
          02 WS-SETTING-JSON-ORDER      PIC X(10).
          02 WS-SETTING-JSON-BID        PIC 9(18) COMP-5.
          02 WS-SETTING-JSON-ASK        PIC 9(18) COMP-5.
          02 WS-SETTING-JSON-INVENTORY  PIC 9(18) COMP-5.
          02 WS-SETTING-JSON-SPREAD-MIN PIC 9(18) COMP-5.
          02 WS-SETTING-JSON-SPREAD-MAX PIC 9(18) COMP-5.
          02 WS-SETTING-JSON-VOLATILITY PIC 9(02)V99 COMP-3.
          02 WS-SETTING-JSON-AUDIT-LOG  PIC 9(18) COMP-5.
      *****************************************************************