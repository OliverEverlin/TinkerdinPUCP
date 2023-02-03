#include "pch.h"

#include "TinkerdinControler.h"

int TinkerdinControler::Controller::AddClient(Cliente^ client)
{
	clientList->Add(client);

	return client->code;
}

Cliente^ TinkerdinControler::Controller::QueryClientById(int^ clientId)
{
	//clientList = (List<Cliente^>^)Persistance::LoadBinary;
	for (int i = 0; i < clientList->Count; i++)
		if (clientList[i]->code == clientId)
			return clientList[i];
	return nullptr;
		// TODO: Insertar una instrucción "return" aquí
}

List<Cliente^>^ TinkerdinControler::Controller::QueryAllClients()
{
	//clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
	return clientList;
}

int TinkerdinControler::Controller::UpdateClient(Cliente^ client)
{
	for (int i = 0; i < clientList->Count; i++)
	{
		if (clientList[i]->code == client->code) {
			clientList[i] = client;
			//añadir sus persistencia
			return client->code;

		}
	}
	return 0;
}

int TinkerdinControler::Controller::DeleteClient(int ClientId)
{	
	for (int i = 0; i < clientList->Count; i++)
	{
		if (clientList[i]->code==ClientId)
		{
			clientList->RemoveAt(i);
			//añadir persisrtencia
			return ClientId;

		}

	}
	return 0;
}
