namespace project
{

struct fout2_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "fout2";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "147.nT6K8Ch0UQ..Rg.Gd.VMtA.BFQNTxQaaGQRILjVF1BnBMRffrBwkXQDk98+GqsJPxoBp5lBvxOoB+fk.sNNKRZve5xxJvuRF3Wz2KehLbWSxzTr5Zx1ssDA7LcpDwa2RDC75xxP7K0RsbayiUD+nGXSjDf+PRA9.3EpUVf..vbnT3IfnuHuvkOM.3DaMiD3Rj0LO";
	}
};
}

