namespace project
{

struct LFO_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "LFO";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "2074.nT6K8CFP7THP.nVPzw.Kv5LhF7EgXHSUeYBEOrteQh+VC4gpK3qVkInjVl7aJ38CpcDrNlktQ7uE4GPu..L.4BPyQ9tjOlWzN6VuvYcjldYmUvmTQyUTL3P2zopFR3ZEEC2RSMMqbIKvPuWLEYZlpoFWbMOsWR3Kbr3JL2MVafolnY2hjV5TXDPBO4M.g0sE.XVUzLcZVMwvCrlKRTKqI0FFz25TCFmJ5sNyWLFOBVqIOwXSENiY5fHrlJgk.i0Macpg0DB46EdZBK8dmZnfZqTSXJ5lSyo4SX8EWspnUneGBqwTuXMTarXL7.asSzSvAQvcVWgENq6nB6QlJgvsFAmR2toKI3A..BnhJM43i2bhxcHMmO4mvdOzcFHnBmmVaEiE1sz8EnUNvYcgWQBewFZMWQovUX.QhIGvwgCgA5.C1ZgMjeT4nYLmI2RrZRsUy7EJLNBtCuS4UfGg0ePktVvXMGbbwfMSKkUsBFq6YdVwGTqCsxAo+HV3SfjmOvkvL.0lICNuQ9h5VcHnWJ3P7w+aQvu8Dn0ZM26MHQsVXdafWoUQqVpZ1dcgaw89t+7bBmuln0nBK9LTuPQyW5viCFeY7ghPQ+LmmKfIMa3+.v9GdjjlP9+g3kvStLUKHL57AG9.tWXJjrXMR24zJR7gQZeEmKgEEkqVJKmB74.PlZkvSNkNlTpL0hlgao6XS9zdfPOYtUMYLd5x2fhfxnnVq8Ze6IIp8dnDBA0fbNGz4wknQAhKyC25Cj7gffOVrlZvnIwFLW50iDRBeNW7A1hhbNuR2OG7kuCJx8ZQnmHOncbAJQRDPpR0oMvWuxlF5VRZBMXxUOtzAb4A3ivPUpx6AGnllYf4v5Uhs28hRoiDFkA74fumiK5RTAD5IbHRhOvm6+HIzC74hO+q8fPeTLJktuQoAEIiftGBEaN7.gdsm6cOOOeBjLF4fOwGHnnHvTcgsDv2dtBH4QyyLdCOwGbQ3+xGnSBisHoCRWT6AJiMnKBBcNNpjmFKuxi6kt2GexHrTqXqwRSBrdfdvGjS9fNOGBGxD8ha60j68DKt0L0pr2u0kUjMSLTImR+buH3BnJ8HOEhFYD.DFffj.HQF..LPhXZbxxd.RAGDLC.F.L.GF.G.P.w.T.CP.B.DPPD.vPQvTiMAH.Zw+Ml.muor9S7aSb1iYIB019+09bIGKq0iiRTjzhKhRcP3H1YonimziPoTqR3bR0iDGLEVDZvYYs60mO.9LrGYRGZ.pd5amEgClLkzgLEO+Be5UuCZzSeA3CYXwSMR6+vdsbnkWZu.uTPBIdal4kWKDqaqVgAFsvbR.HCG1VHPtSXAhVdAaxiAmDxBTq6rUQBHRnKqOOfoXByihBFaiEiNqxUPFMFwj5jQVlsvl4fbuvaJOTRLso+NbcNCr4cnm6XGFdzYx1IVMW.LZrvKHInTFrCB5Coif.beBVMMU9UUx0SLFHajhJ75xO01GkPJRXuD.9mtuFbFVy7a9InA.wMvEPeKoj8JX6QNt4xzfy4o6kuldp07mwTRke5AF9HSC4X4AWIwq3Al.OFM0cGyDYD5IheD+cXrtxXbw1MH.X2miAW6d.fNonzPga.kP.AwrV+D.ER5kY+VAfA8AdYr3tsntz22iW.7U721iJgIY2.e1vGl1RHo4rjGbiDlYmx4Km7KsR5tnET1UZwy4rybnxiDzZPvKFWlr8sxEaCnMDM9yHQa9.NpaxEFDPIIP+bf96hXLzY4G6TwzFmnriGuFWxZfz2NqsWunDcQGt0CfCD9lBA5nwuJBamxjFETqID7oZsQM1OUJxi8Djv.CUh.zb08EGp3YSv41KxPkHEplcc+KTRK6HX5HV9xxuUe2U2Azny1wy+vbQNQK.wZXZWD.5dngjNJslHLNlz9TaDPJgrprCd9KgpQHl2a0FykALU7Wk1SFOksGluMVJeB5voPsvP9fsiS4OhGjtjAojPwQ1AV+OIgCBEShjoIVsP3kVnd9N1E5foX1+t+WB1ccOkT8xZy9JltDpeH3dvivttXYUV5C8QVJNuIM7loyg4i1zNkiGJ+XHhe1OusCFOHHkLOagiub2GUfbXJaYKUAYRDadRao1eTQAzjXoXBbYRF1ATlbtxRR9.169d3j9oFCeCLOEhceqZlGay55rwlYek9BeFuTAyFPh5lbt.QaKipjZ7I3KTkFHFsy8JtEj9zvW2t4WY.szWjyzy5.uFPwbei6.lA1Z4gjEIS3VaoEVqRjQQQw2vvHUuv4DRnkomjoV2pSc0wGLipkHQ+QTDPZuPtioZctD22pk8cHTQA0QldEA3oa2TW3K0tc.iDBVLZqzJ7pUWJZ1bIt+c2.t4GerMDpFvAE2+emq6uLWbtn2ePRh1NjKn9foWLcu43mWYh6q71izzr5Vp1MT.9.a6201ugvheEh9aZ0VvP5xa2jKQryTD4L2Jr0DBt8l7cpQSYPE9yW+GAsSjWYrjf+.cLCtsDJIVpLvnnmArbQh0rQEdvcPJsLGconUyzMQjzCQgJD2oS+T7PXicnqLavwscRjqcVJN+nFscqKhy5G4.QUZTaa6YQadNylrAtgts5akarMEJz+sYP5SCI9IYpUL6XSA8Rtjvf1wr9.+VDgYwiFlcWUvmh+MNCg2zS5g+j63k6ZIGlY6CAHkDR0lP9CQgep8wm+0Z1L8zeLmH6H0qd7x1lP1yD2yVjGn8+4FNJHjjhBSi+z5iuluu+wjBcTPSgjI8dfft+BtnboIcgJlDsc.CRSBdNdPhCGGRj2C";
	}
};
}

