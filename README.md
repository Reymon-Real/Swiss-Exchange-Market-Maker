# Swiss Exchange Market Maker

## Legal notice

This bot contains COBOL code compiled using IBM COBOL for Linux x86; therefore, an IBM commercial licence is required to use it for commercial purposes.

This project is non-profit and intended solely for educational purposes regarding the use of IBKR’s TwsSocketClient.

No proprietary files belonging to IBM or IBKR are distributed.

No warranty of any kind is provided regarding its operation.

## Project concept

This bot was developed to provide liquidity to the Swiss market for its less liquid assets via the broker IBKR.

The reason for using COBOL for this bot is to make it easier for regulators who do not know how to program to audit the code.

## Compilation

This project assumes that the default path for `libTwsSocketClient.so` is `/usr/local/lib` or `/usr/lib`

In the case of the headers, it is assumed that they are located in
`/usr/local/include/IBKR/TwsSocketClient` and `/usr/local/include/IBKR/TwsSocketClient/protobufUnix`

To change the header path, go to the `meson.build` and edit the paths.
Just make sure you keep the `IBKR/TwsSocketClient` structure so you don’t have to change all the include statements in the source code.

## License

The source code for this software is licensed under the AGPL-3-or-later licence.
This does not apply to proprietary tools or files belonging to IBKR and IBM.