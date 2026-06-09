# Swiss Exchange Market Maker

## Legal notice

This project is non-profit and intended solely for educational purposes regarding the use of ***IBKR’s*** ***TwsSocketClient***.

No proprietary files belonging to IBKR are distributed.

No warranty of any kind is provided regarding its operation.

## Project concept

This bot was developed to provide liquidity to the markets for its less liquid assets via the broker ***IBKR***.

## Compilation

This project assumes that the default path for `libTwsSocketClient.so` is `/usr/local/lib` or `/usr/lib`

In the case of the headers, it is assumed that they are located in
`/usr/local/include/IBKR/TwsSocketClient` and `/usr/local/include/IBKR/TwsSocketClient/protobufUnix`

To change the header path, go to the `meson.build` and edit the paths.
Just make sure you keep the `IBKR/TwsSocketClient` structure so you don’t have to change all the include statements in the source code.

## JSON Format

```json
{	
	"host": "127.0.0.1", // Host of the server
	"port": 7497,        // Port of set on IBKR
	"userId": 0,         // Id of the user for operate
	"extraAuth": false,  // Extra Authentication for IBKR

	"symbol": "GLKBN", // Symbol name
	"sectype": "STK",  // Sector Type (View Docs)
	"exchange": "EBS", // The exchange on which the security is listed
	"currency": "CHF", // Currency in which the instrument is priced
	
	"bid": 1, 		   // Number of orders on bid
	"ask": 1,		   // Number of orders on ask
	"size": 100,	   // Size of the orders
	"minimum": 10,     // Number of minimun positions
	"inventory": 1000  // Number of max positions
}
```

## License

The source code for this software is licensed under the AGPL-3-or-later licence.
This does not apply to proprietary tools or files belonging to IBKR and IBM.